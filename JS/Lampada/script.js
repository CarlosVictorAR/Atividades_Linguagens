
/*
    Light Bulb, 
    Two Clicks = Break Bulb,
    Two buttons (Turn On/Off),
    Mouse On = Turn On
    Mouse Out = Turn Off

*/
//===================================================//

function turnOn(){
    bulbImgOn.style.display = 'block';
    bulbImgOff.style.display = 'none';   
}
function turnOff(){
    bulbImgOn.style.display = 'none';
    bulbImgOff.style.display = 'block';   
}
function breakBulb(){
    bulbImgOn.style.display = 'none';
    bulbImgOff.style.display = 'none';   
    bulbImgBroken.style.display = 'block';
    buttonOn.disabled = true;
    buttonOff.disabled = true;
    lightBulbImg.removeEventListener('mouseover', turnOnMouse);
    lightBulbImg.removeEventListener('mouseout', turnOffMouse);
}
function turnOffMouse(){
    turnOff();
    lightBulbImg.removeEventListener('mouseout', turnOffMouse);
    lightBulbImg.addEventListener('mouseover', turnOnMouse);
    buttonOff.disabled = false;
    buttonOn.disabled = false;
}
function turnOnMouse(){
    turnOn();
    lightBulbImg.removeEventListener('mouseover', turnOnMouse);
    lightBulbImg.addEventListener('mouseout', turnOffMouse);
    buttonOff.disabled = false;
    buttonOn.disabled = false;
}
function turnOffClick(){
    turnOff();
    buttonOn.disabled = false;
    lightBulbImg.addEventListener('mouseover', turnOnMouse);

}
function turnOnClick(){
    turnOn();
    buttonOn.disabled = true;
    buttonOff.disabled = false;
    lightBulbImg.removeEventListener('mouseover', turnOnMouse);
    lightBulbImg.removeEventListener('mouseout', turnOffMouse);

}


//Functions

//===================================================//
    
    let mainBlock = document.createElement('div');
    mainBlock.classList.add('mainBlock');
    document.body.appendChild(mainBlock);

    //===================================================//

        let lightBulbImg = document.createElement('div');
        lightBulbImg.classList.add('lightBulbImg');
        let bulbImgOn = document.createElement('img');
        bulbImgOn.src = 'light_bulb_turn_on.png';
        bulbImgOn.classList.add('bulbImgOn');
        bulbImgOn.style.display = 'none';
        lightBulbImg.appendChild(bulbImgOn);
        let bulbImgOff = document.createElement('img');
        bulbImgOff.src = 'light_bulb_turn_off.jpg';
        bulbImgOff.classList.add('bulbImgOff');
        bulbImgOff.style.display = 'block';
        lightBulbImg.appendChild(bulbImgOff);
        let bulbImgBroken = document.createElement('img');
        bulbImgBroken.src = 'light_bulb_broken.png';
        bulbImgBroken.classList.add('bulbImgBroken');
        bulbImgBroken.style.display = 'none';
        lightBulbImg.appendChild(bulbImgBroken);
        mainBlock.appendChild(lightBulbImg);
        
    
    //Lamp Img Block

    //===================================================//

        let buttonsBlock = document.createElement('div');
        buttonsBlock.classList.add('buttonsBlock');
        let buttonOn = document.createElement('button');
        buttonOn.classList.add('buttonOn');
        buttonOn.innerText = 'Turn On';
        buttonsBlock.appendChild(buttonOn);
        let buttonOff = document.createElement('button');
        buttonOff.classList.add('buttonOff');
        buttonOff.innerText = 'Turn Off';
        buttonsBlock.appendChild(buttonOff);
        mainBlock.appendChild(buttonsBlock);
        

    //Buttons Block

    //===================================================//
    buttonOn.addEventListener('click', turnOnClick);
    buttonOff.addEventListener('click', turnOffClick);
    lightBulbImg.addEventListener('dblclick', breakBulb);
    turnOffMouse();

//Main Block

