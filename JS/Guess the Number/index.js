let sectionPrincipal = document.createElement('section');
sectionPrincipal.classList = "sectionPrincipal";
let input = document.createElement("input");
input.type = "Number";
input.classList = "input";
let sectionSecundaria = document.createElement('section');
sectionSecundaria.classList = "sectionSecundaria";
let button = document.createElement("button");
button.innerText = "Enviar";
button.onclick = enviar;
sectionSecundaria.appendChild(input);
sectionSecundaria.appendChild(button);
sectionPrincipal.appendChild(sectionSecundaria);
let sectionResposta = document.createElement("section");
sectionResposta.classList = "sectionResposta";
sectionResposta.innerText = "Resultado:";
sectionPrincipal.appendChild(sectionResposta);
document.body.appendChild(sectionPrincipal);
input.addEventListener("keydown",function (event){
    if(event.key==="Enter"){
        enviar();
}});
min = Math.ceil(1);
max = Math.floor(1000);
number = Math.floor(Math.random() * (max - min) + min);
function enviar(){
    if (document.querySelector(".input").value > number){
        sectionResposta.innerText = "Resultado: Abaixo";
        input.value = " ";
    }
    else if(document.querySelector(".input").value < number) {
        sectionResposta.innerText = "Resultado: Acima";
        input.value = " ";
    }
    else {
        sectionResposta.innerText = `Acertou (${number})`;
        input.value = " ";
    }
}S