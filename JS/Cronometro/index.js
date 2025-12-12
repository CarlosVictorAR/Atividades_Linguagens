    let hour = 0;
    let minute = 0;
    let second = 0;
    let milisecond = 0;
    let starting;
    let startEvent;
    let pauseEvent;
    let resetEvent;
function atualizar(){

    let sectionPrincipal = document.createElement("section");
    sectionPrincipal.className = "fundo";//principal
    let sectionTime = document.createElement("section");
    sectionTime.className = "time";
    sectionTime.appendChild(document.createTextNode("00:00:00.00"));//time
    let sectionStart = document.createElement("section");
    sectionStart.className = "start";
    sectionStart.classList.add("align");
    sectionStart.appendChild(document.createTextNode("start"));//start
    let sectionPause = document.createElement("section");
    sectionPause.className = "pause";
    sectionPause.classList.add("align");
    sectionPause.appendChild(document.createTextNode("pause"));//pause
    let sectionReset = document.createElement("section");
    sectionReset.className = "reset";
    sectionReset.classList.add("align");
    sectionReset.appendChild(document.createTextNode("reset"));//reset
    sectionPrincipal.appendChild(sectionTime);
    sectionPrincipal.appendChild(sectionStart);
    sectionPrincipal.appendChild(sectionPause);
    sectionPrincipal.appendChild(sectionReset);
    let inserir = document.querySelector(".inserir");
    inserir.appendChild(sectionPrincipal);//inserido
    startEvent = document.querySelector(".start");
    startEvent.addEventListener("click",iniciar);
}
atualizar();
function iniciar(){
    starting = setInterval(contando,10); 
    startEvent.removeEventListener("click",iniciar);
    startEvent.innerHTML = "running";
    startEvent.style.backgroundColor = "#2E2E2E";
    pauseEvent = document.querySelector(".pause");
    pauseEvent.addEventListener("click",pausar);
    resetEvent = document.querySelector(".reset");
    resetEvent.addEventListener("click",resetar);

}
function pausar(){
    clearInterval(starting);
    startEvent.removeEventListener("click",iniciar);
    startEvent.addEventListener("click",iniciar);
    pauseEvent.removeEventListener("click",pausar);
    startEvent.innerHTML = "continuar";
    startEvent.style.backgroundColor = "#556B2F";
}
function resetar(){
    hour = 0;
    minute = 0;
    second = 0;
    milisecond = -1;
    clearInterval(starting);
    contando();
    startEvent.removeEventListener("click",iniciar);
    startEvent.addEventListener("click",iniciar);
    pauseEvent.removeEventListener("click",pausar);
    resetEvent.removeEventListener("click",resetar);
    startEvent.innerHTML = "start";
    startEvent.style.backgroundColor = "#556B2F";
}
function contando(){
    milisecond++;
    if (milisecond == 100){
        second++;
        milisecond = 0;
    }
    if (second == 60){
        minute++;
        second = 0;
    }
    if (minute == 60){
        hour++;
        minute = 0;
    }
    document.querySelector(".time").innerHTML = ``;
    if (hour < 10){
        document.querySelector(".time").innerHTML += `0${hour}:`;
    }
    else {
        document.querySelector(".time").innerHTML += `${hour}:`;
    }
    if (minute < 10){
        document.querySelector(".time").innerHTML += `0${minute}:`;
    }
    else {
        document.querySelector(".time").innerHTML += `${minute}:`;
    }
    if (second < 10){
        document.querySelector(".time").innerHTML += `0${second}.`;
    }
    else {
        document.querySelector(".time").innerHTML += `${second}.`;
    }
    if (milisecond < 10){
        document.querySelector(".time").innerHTML += `0${milisecond}`;
    }
    else {
        document.querySelector(".time").innerHTML += `${milisecond}`;
    }
}
    