let casaInput = document.getElementById('casa');
let valor = casaInput ? casaInput.value : '';
if (valor) {
    let radio = document.body.querySelector("input[type='radio'][value='" + valor + "']");
    if (radio) {
        radio.checked = true;
    }
}


let formCadastro = document.getElementById('form-cadastro');
if (formCadastro) {
    formCadastro.addEventListener('submit', async (event) => {
        event.preventDefault();

        try {
            const formDados = new FormData(formCadastro);
            let data = {
                nome: formDados.get('nome'),
                senha: formDados.get('senha'),
                usuario: formDados.get('usuario'),
                casa: formDados.get('casa') || '',
            }

            console.log(data);
            let config = {
                method: 'POST', 
                headers: {
                    'Content-Type': 'application/json' 
                },
                body: JSON.stringify(data)
            };

            let response = await fetch('/cadastrar', config);
            if (!response.ok) {
                throw {
                    error: response.statusText,
                    status: response.status
                }
            }
        } catch (err) {
            console.error(err);
        }
    });
}
