
//=======================================
    let principalBlock = document.createElement('div');
    principalBlock.classList.add('principalBlock');
    document.body.appendChild(principalBlock);

    //=======================================
        let titleBlock = document.createElement('div');
        titleBlock.classList.add('titleBlock');
        principalBlock.appendChild(titleBlock);
        let title = document.createElement('h1');
        title.innerHTML = 'Calculadora - IMC';
        title.classList.add('title');
        titleBlock.appendChild(title);
        let hr = document.createElement('hr');
        hr.classList.add('line');
        titleBlock.appendChild(hr);
    //Title Block

    //=======================================
        let calculatorBlock = document.createElement('div');
        calculatorBlock.classList.add('calculatorBlock');
        principalBlock.appendChild(calculatorBlock);

        //=======================================
            let nameDiv = document.createElement('div');
            nameDiv.classList.add('nameDiv');
            calculatorBlock.appendChild(nameDiv);
            let name = document.createElement('p');
            name.classList.add('name');
            name.innerHTML = 'Nome: ';
            let nameInput = document.createElement('input');
            nameInput.type = 'text';
            nameInput.classList.add('nameInput');
            nameDiv.appendChild(name);
            nameDiv.appendChild(nameInput);
        //Name Div

        //=======================================
            let heightDiv = document.createElement('div');
            heightDiv.classList.add('heightDiv');
            let height = document.createElement('p');
            height.classList.add('height');
            height.innerHTML = 'Altura (m): ';
            heightDiv.appendChild(height);
            let heightInput = document.createElement('input');
            heightInput.type = 'number';
            heightInput.classList.add('heightInput');
            heightDiv.appendChild(heightInput);
            calculatorBlock.appendChild(heightDiv);
        //Height Div

        //=======================================
            let weightDiv = document.createElement('div');
            weightDiv.classList.add('weightDiv');
            let weight = document.createElement('p');
            weight.classList.add('weight');
            weight.innerHTML = 'Peso (kg): ';
            weightDiv.appendChild(weight);
            let weightInput = document.createElement('input');
            weightInput.type = 'number';
            weightInput.classList.add('weightInput');
            weightDiv.appendChild(weightInput);
            calculatorBlock.appendChild(weightDiv);
        //Weight Div

        //=======================================
            let buttonDiv = document.createElement('div');
            buttonDiv.classList.add('buttonDiv');
            let button = document.createElement('button');
            button.classList.add('button');
            button.innerHTML = 'Calcular IMC';
            buttonDiv.appendChild(button);
            calculatorBlock.appendChild(buttonDiv);
            button.addEventListener('click', ()=>{
                let imc = (weightInput.value / (heightInput.value * heightInput.value)).toFixed(2);
                if(nameInput.value === '' || heightInput.value === '' || weightInput.value === ''){
                    result.innerHTML = 'Por favor, preencha todos os campos.';
                } else {
                    if(imc < 18.5){
                        result.innerHTML = `${nameInput.value}, seu IMC é ${imc} (Abaixo do peso)`;
                    } else if(imc >= 18.5 && imc < 25){
                        result.innerHTML = `${nameInput.value}, seu IMC é ${imc} (Peso normal)`;
                    } else if(imc >= 25 && imc < 30){
                        result.innerHTML = `${nameInput.value}, seu IMC é ${imc} (Sobrepeso)`;
                    } else if(imc >= 30 && imc < 35){
                        result.innerHTML = `${nameInput.value}, seu IMC é ${imc} (Obesidade grau I)`;
                    }
            }
        })
        //Button Div

        //=======================================
        let resultDiv = document.createElement('div');
        resultDiv.classList.add('resultDiv');
        calculatorBlock.appendChild(resultDiv);
        let result = document.createElement('p');
        result.classList.add('result');
        resultDiv.appendChild(result);
        //Result Div

    //Calculator Block

//Principal Block