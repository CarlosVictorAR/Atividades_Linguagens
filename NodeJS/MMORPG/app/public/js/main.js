async function mostrarListaDeErros(response,div){
    div.style.display = 'block';
    let ul = document.createElement('ul');
    ul.innerHTML = '';
    div.innerHTML = '';
    response.errors.forEach((value)=>{
        let li = document.createElement('li');
        li.textContent = value.message;
        ul.appendChild(li);
    });
    div.appendChild(ul);
    throw {
        error: response.error || response.statusText,
        status: response.status,
        message: response.message ? response.message : "Bad Request"
    }
}

async function usuarioCriadoComSucesso(response,div){
    div.style.display = 'none';
    alert('criado');
    limparCadastro();
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
            response = await response.json();
            if (response.status == 400 || response.status == 409) {//se der algum dos erros entra aqui
                await mostrarListaDeErros(response,errosDiv);
            }
            //se der certo passa direto
            await usuarioCriadoComSucesso(response,errosDiv);
        } catch (err) {
            console.error(err);
        }
        finally{
            buttonCadastro.disabled = false;
        }
    });
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
            response = await response.json();
            if (response.status == 400){
                await mostrarListaDeErros(response,errosDivEntrar); 
            }
            if (response.status == 500) {
                throw {
                    error: response.error || response.statusText, 
                    status: response.status,
                    message: response.message ? response.message : "Bad Request"
                }
            };
            if (response.status == 200){
                errosDivEntrar.style.display = 'none';
                window.location.href = '/jogo';
                return;
            }
        }
        catch(err){
            console.error(err);
        }
        finally {
            buttonEntrar.disabled = false;
        }
    });
}

/* RECRUTAR */
let buttonRecrutar = document.getElementById('btn-recrutar');
if (buttonRecrutar){
    buttonRecrutar.addEventListener('click', async (event)=>{
        event.preventDefault();
        buttonRecrutar.disabled = true;
        try{
            let config = {
                    method: 'POST', 
                    headers: {
                        'Content-Type': 'application/json' 
                    },
                    body: JSON.stringify({})
                };
            let response = await fetch('/acao/recrutar',config);
            response = await response.json();
            let msg = document.getElementById('msg-recrutar');
            if (response.status == 200){
                msg.style.display = 'block'
                msg.textContent = "Sucesso ao recrutar";
                document.getElementById('AldeõesQuantidade').textContent = response.aldeoes;
                document.getElementById('MoedaQuantidade').textContent = response.ouro;
            }
            else {
                msg.style.display = 'block';
                msg.textContent = response.error || "Erro ao recrutar";
            }
            setTimeout(()=>{
                msg.style.display = 'none';/* limpa o texto depois de dar erro ou sucesso*/
            },5000);
        }
        catch(err){
            console.error(err);
        }
        finally{
            buttonRecrutar.disabled = false;
        }
    });
}

/* COLETAR OURO */
const buttonColetar = document.getElementById('btn-coletar-ouro');
if (buttonColetar){
    buttonColetar.addEventListener('click',async (event)=>{
        buttonColetar.disabled = true;
        try{
            event.preventDefault();
            let config = {
                        method: 'POST', 
                        headers: {
                            'Content-Type': 'application/json' 
                        },
                        body: JSON.stringify({})
                    };
            let response = await fetch('/acao/coletar-ouro',config);
            response = await response.json();
            let msg = document.getElementById('msg-acoes');
            if (response.status == 200){
                msg.style.display = 'block'
                msg.textContent = "Ouro coletado com sucesso";
                document.getElementById('MoedaQuantidade').textContent = response.ouro;
            }
            else {
                msg.style.display = 'block';
                msg.textContent = response.error || "Erro ao coletar ouro";
            }
            setTimeout(()=>{
                msg.style.display = 'none';/* limpa o texto depois de dar erro ou sucesso*/
            },5000);
        }
        catch(err){
            console.error(err);
        }
        finally{
            buttonColetar.disabled = false;
        }
    });
}

/* USAR HABILIDADE */
const buttonHabilidade = document.getElementById('btn-habilidade');
if (buttonHabilidade){
    buttonHabilidade.addEventListener('click',async (event)=>{
        buttonHabilidade.disabled = true;
        try{
            event.preventDefault();
            let config = {
                        method: 'POST', 
                        headers: {
                            'Content-Type': 'application/json' 
                        },
                        body: JSON.stringify({})
                    };
            let response = await fetch('/acao/habilidade',config);
            response = await response.json();
            let msg = document.getElementById('msg-acoes');
            if (response.status == 200){
                msg.style.display = 'block'
                msg.textContent = "Habilidade utilizada com sucesso";
                document.getElementById(response.atributo).textContent = response.valor;
                document.getElementById('MoedaQuantidade').textContent = response.ouro;
            }
            else {
                msg.style.display = 'block';
                msg.textContent = response.error || "Erro ao utilizar habilidade";
            }
            setTimeout(()=>{
                msg.style.display = 'none';/* limpa o texto depois de dar erro ou sucesso*/
            },5000);
        }
        catch(err){
            console.error(err);
        }
        finally{
            buttonHabilidade.disabled = false;
        }
    });
}