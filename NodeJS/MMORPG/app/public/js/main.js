let formCadastro = document.getElementById('form-cadastro');
let button = document.querySelector('button[type="submit"][form="form-cadastro"]');
let errosDiv = document.querySelector("#erros");
if (formCadastro) {
    formCadastro.addEventListener('submit', async (event) => {
        event.preventDefault();
        button.disabled = true;
        try {
            const formDados = new FormData(formCadastro);
            let data = {
                nome: formDados.get('nome'),
                senha: formDados.get('senha'),
                usuario: formDados.get('usuario'),
                casa: formDados.get('casa') || '',
            }
            let config = {
                method: 'POST', 
                headers: {
                    'Content-Type': 'application/json' 
                },
                body: JSON.stringify(data)
            };

            let response = await fetch('/cadastrar', config);
            if (response.status == 400 || response.status == 409) {//se der algum dos erros entra aqui
                await mostrarListaDeErros(response);
            }
            //se der certo passa direto
            await usuarioCriadoComSucesso(response);
        } catch (err) {
            console.error(err);
        }
    });
}

async function mostrarListaDeErros(response){
    let errorsList = await response.json();
    errosDiv.style.display = 'block';
    let ul = document.createElement('ul');
    ul.innerHTML = '';
    errosDiv.innerHTML = '';
    errorsList.errors.forEach((value)=>{
        let li = document.createElement('li');
        li.textContent = value.message;
        ul.appendChild(li);
    });
    errosDiv.appendChild(ul);
    button.disabled = false;
    throw {
        error: response.statusText,
        status: response.status
    }
}

async function usuarioCriadoComSucesso(response){
    response = await response.json();
    errosDiv.style.display = 'none';
    alert('criado');
    button.disabled = false;
    limparCadastro();
}

async function limparCadastro(){
    document.querySelector('input[name="nome"]').value = '';
    document.querySelector('input[name="usuario"]').value = '';
    document.querySelector('input[name="senha"]').value = '';
    document.querySelector('input[type=radio]:checked').checked = false;

}