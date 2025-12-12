/*
    Traffic Lights
    1. Create a traffic light using CSS.
    2. Create four buttons, one for each light and one to automate the traffic light.
    3. When clicking on each button, the respective light should turn on and all others should turn off.
    4. When clicking on the automate button, the traffic light should start cycling through the lights (green -> yellow -> red -> green ...).
    5. When clicking on any of the light buttons while the traffic light is automated, the automation should stop and the respective light should turn on.
*/

//Functions


    function turnOnLightRed() {
        
        redLight.style.backgroundColor = "rgba(255, 0, 0, 0.800)";
        yellowLight.style.backgroundColor = "gray";
        greenLight.style.backgroundColor = "gray";
        redLight.style.boxShadow = "0px 0px 15px 15px red";
        yellowLight.style.boxShadow = "none";
        greenLight.style.boxShadow = "none";
        redLight.style.color = "rgba(0,0,0,0.2)";
        yellowLight.style.color = "black";
        greenLight.style.color = "black";

    }

    function turnOnLightYellow(){

        redLight.style.backgroundColor = "gray";
        yellowLight.style.backgroundColor = "rgba(255, 255, 0, 0.800)";
        greenLight.style.backgroundColor = "gray";
        redLight.style.boxShadow = "none";
        yellowLight.style.boxShadow = "0px 0px 15px 15px yellow";
        greenLight.style.boxShadow = "none";
        redLight.style.color = "black";
        yellowLight.style.color = "rgba(0,0,0,0.2)";
        greenLight.style.color = "black";
    }

    function turnOnLightGreen(){

        redLight.style.backgroundColor = "gray";
        yellowLight.style.backgroundColor = "gray";
        greenLight.style.backgroundColor = "rgba(0, 128, 0, 0.800)";
        redLight.style.boxShadow = "none";
        yellowLight.style.boxShadow = "none";
        greenLight.style.boxShadow = "0px 0px 15px 15px green";
        redLight.style.color = "black";
        yellowLight.style.color = "black";
        greenLight.style.color = "rgba(0,0,0,0.2)";
    }

    let stop = false;
    function automate(){
        automateButton.disabled = true;
        if (stop) return;
        turnOnLightRed();
            
            setTimeout(()=>{
                if(stop) return;
                turnOnLightYellow();

                setTimeout(()=>{
                    if (stop) return;
                    turnOnLightGreen();

                    setTimeout(()=>{
                        if (stop) return;
                        automate();
                    },2000);

                },2000);

            },2000);
        
    }

//=============================================

//Main Container

    let mainContainer = document.createElement("div");
    mainContainer.classList.add("mainContainer");
    document.body.appendChild(mainContainer);

    //Traffic Light Container

        let trafficLightContainer = document.createElement("div");
        trafficLightContainer.classList.add("trafficLightContainer");
        mainContainer.appendChild(trafficLightContainer);

        //Traffic Light Base

            let trafficLightBase = document.createElement("div");
            trafficLightBase.classList.add("trafficLightBase");
            trafficLightContainer.appendChild(trafficLightBase);

            //Lights
    
                let redLight = document.createElement("div");
                redLight.classList.add("light","redLight");
                trafficLightBase.appendChild(redLight);

                let yellowLight = document.createElement("div");
                yellowLight.classList.add("light","yellowLight");
                trafficLightBase.appendChild(yellowLight);

                let greenLight = document.createElement("div");
                greenLight.classList.add("light","greenLight");
                trafficLightBase.appendChild(greenLight);
                
                let array = document.querySelectorAll(".light");
                array.forEach( i =>{
                    i.innerText = "☰";
                })

            //==============================================

        //=============================================        

    //=============================================

    //Buttons Container

        let buttonsContainer = document.createElement("div");
        buttonsContainer.classList.add("buttonsContainer");
        mainContainer.appendChild(buttonsContainer);

        //Buttons

            let redButton = document.createElement("button");
            redButton.dataset.color = "redLight";
            redButton.classList.add("button");
            redButton.innerText = "Red";
            buttonsContainer.appendChild(redButton);

            let yellowButton = document.createElement("button");
            yellowButton.classList.add("button");
            yellowButton.innerText = "Yellow";
            buttonsContainer.appendChild(yellowButton); 

            let greenButton = document.createElement("button");
            greenButton.classList.add("button");
            greenButton.innerText = "Green";
            buttonsContainer.appendChild(greenButton);

            let automateButton = document.createElement("button");
            automateButton.classList.add("button");
            automateButton.innerText = "Automate";
            buttonsContainer.appendChild(automateButton);

            redButton.addEventListener('click',()=>{
                stop = true;
                automateButton.disabled = false;
                redButton.disabled = true;
                yellowButton.disabled = false;
                greenButton.disabled = false;
                turnOnLightRed();
            });
            yellowButton.addEventListener('click',()=>{
                stop = true;
                automateButton.disabled = false;
                redButton.disabled = false;
                yellowButton.disabled = true;
                greenButton.disabled = false;
                turnOnLightYellow();
                
            });
            greenButton.addEventListener('click',()=>{
                stop = true;
                automateButton.disabled = false;
                redButton.disabled = false;
                yellowButton.disabled = false;
                greenButton.disabled = true;
                turnOnLightGreen();
                
            });
            automateButton.addEventListener('click',()=>{
                stop = false;
                redButton.disabled = false;
                yellowButton.disabled = false;
                greenButton.disabled = false;
                automate();
            });

        //=============================================

    //=============================================

//=============================================
