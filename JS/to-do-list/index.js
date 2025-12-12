let num = 0;
const nomes = [];
const tarefas = document.querySelector(".tarefas");
const texto = [];
const datas = [];
const mes = ["01","02","03","04","05","06","07","08","09","10","11","12"];
const dia = [];
let i;
var escuroBool=0;
ajustarBackground();
setInterval(ajustarBackground,3600000);
for (i = 1;i<=31;i++){
    if (i < 10){
        dia.push(`0${i}`);
    }
    else {
        dia.push(i);
    }
}
function escuro(){
    let h1Inicio = document.querySelector(".h1");
    h1Inicio.classList.add("h1Escuro");
    h1Inicio.classList.remove("h1");
    let concluidoSection = document.querySelector(".concluidosection");
    concluidoSection.classList.add("concluidosectionEscuro");
    concluidoSection.classList.remove("concluidosection");
    let principal = document.querySelector(".principal");
    principal.classList.add("principalEscuro");
    principal.classList.remove("principal");
    let secundaria = document.querySelector(".secundaria");
    secundaria.classList.add("secundariaEscuro");
    secundaria.classList.remove("secundaria");
    document.querySelectorAll(".buttonExcluir").forEach(button =>{
        button.classList.add("buttonExcluirEscuro");
        button.classList.remove("buttonExcluir");
    })
    escuroBool=1;
        document.querySelectorAll(".img").forEach(imgs=>{
        imgs.src="removerEscuro.png";
    })
    document.body.style.backgroundImage = "";
    document.body.style.backgroundColor = "#05183c";
}
function claro(){
    let concluidoSection = document.querySelector(".concluidosectionEscuro");
    concluidoSection.classList.add("concluidosection");
    concluidoSection.classList.remove("concluidosectionEscuro");
    let h1Inicio = document.querySelector(".h1Escuro");
    h1Inicio.classList.add("h1");
    h1Inicio.classList.remove("h1Escuro");
    let principal = document.querySelector(".principalEscuro");
    principal.classList.add("principal");
    principal.classList.remove("principalEscuro");
    let secundaria = document.querySelector(".secundariaEscuro");
    secundaria.classList.add("secundaria");
    secundaria.classList.remove("secundariaEscuro");
    document.querySelectorAll(".buttonExcluirEscuro").forEach(button =>{
        button.classList.add("buttonExcluir");
        button.classList.remove("buttonExcluirEscuro");
    })
    escuroBool=0;
    document.querySelectorAll(".img").forEach(imgs=>{
        imgs.src="remover.png";
    })
    ajustarBackground();
}
function ajustarBackground(){
    let hour = new Date().getHours();
    if (hour >= 0 && hour <= 11){
        document.body.style.backgroundImage = "url(manha.jpg)";
        document.body.style.backgroundSize = "cover";
    }
    else if(hour <= 18){
        document.body.style.backgroundImage = "url(tarde.jpg)";
        document.body.style.backgroundSize = "cover";
        
    }
    else {
        document.body.style.backgroundImage = "url(noite.jpg)";
        document.body.style.backgroundSize = "cover";
    }
}
function atualizar(){
    tarefas.innerHTML = "";
    nomes.forEach((nome,i) => {
            let Total = document.createElement("div");
            let LabelTarefas = document.createElement("label");
            LabelTarefas.className = "azul";
            let inputConcluido = document.createElement("input");
            inputConcluido.type="checkbox";
            inputConcluido.value=i;
            inputConcluido.onclick = function(event){
                concluido(event);
            }
            LabelTarefas.appendChild(inputConcluido);
            LabelTarefas.appendChild(document.createTextNode(nome));
            let LabelExcluir = document.createElement("label");
            LabelExcluir.value=i;
            if (escuroBool){
                LabelExcluir.className = "buttonExcluirEscuro";
            } 
            else {
                LabelExcluir.className = "buttonExcluir";
            }
            let buttonExcluir = document.createElement("button");
            buttonExcluir.onclick = function(event){
                excluir(event);
            }
            if(escuroBool){
                buttonExcluir.className = "buttonExcluirEscuro";

            }
            else{
                buttonExcluir.className = "buttonExcluir";
            }
            buttonExcluir.value=i;
            LabelExcluir.appendChild(buttonExcluir);
            let img=document.createElement("img");
            if(escuroBool){
                img.src="removerEscuro.png";
            }
            else {
                img.src="remover.png"
            }
            img.width="20";
            img.height="20";
            img.className="img";
            LabelExcluir.appendChild(img);
            let br = document.createElement("br");
            let span = document.createElement("span");
            span.className = "verdespan";
            span.appendChild(document.createTextNode(`criado em ${datas[i]}`));
            span.appendChild(br);
            Total.appendChild(LabelTarefas);
            Total.appendChild(LabelExcluir);
            Total.appendChild(br);
            Total.appendChild(span);
            tarefas.appendChild(Total);
        }
    )

}

function adicionar(){
    let valor = event.target.value;
    let day = new Date().getDate();
    let month = new Date().getMonth();
    let year = new Date().getFullYear();
    let nome = document.querySelector(".text").value;
    nomes.push(nome);
    datas.push(`${dia[day-1]}/${mes[month]}/${year}`);
    atualizar();
}
    document.querySelector(".text").addEventListener("keydown",function(){
        if (event.key==='Enter'){
            adicionar();
        }
    });  

            

function concluido(event){
    let feitos = document.querySelector(".concluidop");
    let valor = event.target.value;
    let day = new Date().getDate();
    let month = new Date().getMonth();
    let year = new Date().getFullYear();
    valor = Number (valor);
    feitos.innerHTML+= `<span class="verde">${nomes[valor]}</span> ${datas[valor]} - ${dia[day-1]}/${mes[month]}/${year}<br>`;
    nomes.splice(valor,1);
    datas.splice(valor,1);
    atualizar();
}
function excluir(event){
    let valor = event.target.value;
    valor = Number(valor);
    nomes.splice(valor,1);
    datas.splice(valor,1);
    atualizar();
}
