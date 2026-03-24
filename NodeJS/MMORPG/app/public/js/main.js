async function mostrarListaDeErros(response,div,button){
    let errorsList = await response.json();
    div.style.display = 'block';
    let ul = document.createElement('ul');
    ul.innerHTML = '';
    div.innerHTML = '';
    errorsList.errors.forEach((value)=>{
        let li = document.createElement('li');
        li.textContent = value.message;
        ul.appendChild(li);
    });
    div.appendChild(ul);
    button.disabled = false;
    throw {
        error: response.statusText,
        status: response.status
    }
}
/* CADASTRO */
let formCadastro = document.getElementById('form-cadastro');
if (formCadastro) {
    let buttonCadastro = document.querySelector('button[type="submit"][form="form-cadastro"]');
    let errosDiv = document.querySelector("#erros");
    formCadastro.addEventListener('submit', async (event) => {
        event.preventDefault();
        buttonCadastro.disabled = true;
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
                await mostrarListaDeErros(response,errosDiv,buttonCadastro);
            }
            //se der certo passa direto
            await usuarioCriadoComSucesso(response);
        } catch (err) {
            console.error(err);
        }
    });
}


async function usuarioCriadoComSucesso(response){
    response = await response.json();
    errosDiv.style.display = 'none';
    alert('criado');
    buttonCadastro.disabled = false;
    limparCadastro();
}

async function limparCadastro(){
    document.querySelector('input[name="nome"]').value = '';
    document.querySelector('input[name="usuario"]').value = '';
    document.querySelector('input[name="senha"]').value = '';
    document.querySelector('input[type=radio]:checked').checked = false;
    
}
/* ----- */


/* LOGIN */

let formEntrar = document.getElementById('form-entrar');
if (formEntrar){
    let buttonEntrar = document.querySelector('button[form="form-entrar"]');
    let errosDivEntrar = document.querySelector("#errosEntrar");
    formEntrar.addEventListener('submit',async (event)=>{
        event.preventDefault();
        buttonEntrar.disabled = true;
        const formEntDados = new FormData(formEntrar);
        try{
            let data = {
                usuario: formEntDados.get('usuario') || '',
                senha: formEntDados.get('senha') || ''
            }
            let config = {
                method: 'POST', 
                headers: {
                    'Content-Type': 'application/json' 
                },
                body: JSON.stringify(data)
            };
            
            let response = await fetch('/entrar',config);
            if (response.status == 400){
               await mostrarListaDeErros(response,errosDivEntrar,buttonEntrar); 
            }
            response = await response.json();
            alert(response.message);
            buttonEntrar.disabled = false;
        }
        catch(err){
            console.error(err);
        }
    });
}

