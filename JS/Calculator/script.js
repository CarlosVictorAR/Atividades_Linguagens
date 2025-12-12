let Body = document.body; 
let mainDiv = document.createElement('div');
mainDiv.classList.add('mainDiv');
Body.appendChild(mainDiv);
let currentInput = '0';

//Main Calculator Div

let calculatorDiv = document.createElement('div');
calculatorDiv.classList.add('calculatorDiv');
mainDiv.appendChild(calculatorDiv);

//Screen Of Calculator

let screenDiv = document.createElement('div');
screenDiv.classList.add('screenDiv');
calculatorDiv.appendChild(screenDiv);

//Buttons Div

let buttonsDiv = document.createElement('div');
buttonsDiv.classList.add('buttonsDiv');
calculatorDiv.appendChild(buttonsDiv);

let CEButton = document.createElement('button');
CEButton.classList.add('buttonsCalculator');
CEButton.classList.add('CEButton');
CEButton.addEventListener('click', clearAll);
CEButton.textContent = 'CE';
buttonsDiv.appendChild(CEButton);

let CButton = document.createElement('button');
CButton.classList.add('buttonsCalculator');
CButton.classList.add('CButton');
CButton.addEventListener('click', clearAll);
CButton.textContent = 'C';
buttonsDiv.appendChild(CButton);

let backButton = document.createElement('button');
backButton.classList.add('buttonsCalculator');
backButton.classList.add('backButton');
backButton.textContent = '<-';
buttonsDiv.appendChild(backButton);

let divideButton = document.createElement('button');
divideButton.classList.add('buttonsCalculator');
divideButton.classList.add('divideButton');
divideButton.textContent = '/';
buttonsDiv.appendChild(divideButton);

let sevenButton = document.createElement('button');
sevenButton.classList.add('buttonsCalculator');
sevenButton.classList.add('sevenButton');
sevenButton.addEventListener('click', appendNumber);
sevenButton.textContent = '7';
sevenButton.dataset.number = '7';
buttonsDiv.appendChild(sevenButton);

let eightButton = document.createElement('button');
eightButton.classList.add('buttonsCalculator');
eightButton.classList.add('eightButton');
eightButton.addEventListener('click', appendNumber);
eightButton.textContent = '8';
eightButton.dataset.number = '8';
buttonsDiv.appendChild(eightButton);

let nineButton = document.createElement('button');
nineButton.classList.add('buttonsCalculator');
nineButton.classList.add('nineButton');
nineButton.addEventListener('click', appendNumber);
nineButton.textContent = '9';
nineButton.dataset.number = '9';
buttonsDiv.appendChild(nineButton);

let multiplyButton = document.createElement('button');
multiplyButton.classList.add('buttonsCalculator');
multiplyButton.classList.add('multiplyButton');
multiplyButton.textContent = '*';
buttonsDiv.appendChild(multiplyButton);

let fourButton = document.createElement('button');
fourButton.classList.add('buttonsCalculator');
fourButton.classList.add('fourButton');
fourButton.addEventListener('click', appendNumber);
fourButton.textContent = '4';
fourButton.dataset.number = '4';
buttonsDiv.appendChild(fourButton);

let fiveButton = document.createElement('button');
fiveButton.classList.add('buttonsCalculator');
fiveButton.classList.add('fiveButton');
fiveButton.addEventListener('click', appendNumber);
fiveButton.textContent = '5';
fiveButton.dataset.number = '5';
buttonsDiv.appendChild(fiveButton);

let sixButton = document.createElement('button');
sixButton.classList.add('buttonsCalculator');
sixButton.classList.add('sixButton');
sixButton.addEventListener('click', appendNumber);
sixButton.textContent = '6';
sixButton.dataset.number = '6';
buttonsDiv.appendChild(sixButton);

let subtractButton = document.createElement('button');
subtractButton.classList.add('buttonsCalculator');
subtractButton.classList.add('subtractButton');
subtractButton.textContent = '-';
buttonsDiv.appendChild(subtractButton);

let oneButton = document.createElement('button');
oneButton.classList.add('buttonsCalculator');
oneButton.classList.add('oneButton');
oneButton.addEventListener('click', appendNumber);
oneButton.textContent = '1';
oneButton.dataset.number = '1';
buttonsDiv.appendChild(oneButton);

let twoButton = document.createElement('button');
twoButton.classList.add('buttonsCalculator');
twoButton.classList.add('twoButton');
twoButton.addEventListener('click', appendNumber);
twoButton.textContent = '2';
twoButton.dataset.number = '2';
buttonsDiv.appendChild(twoButton);

let threeButton = document.createElement('button');
threeButton.classList.add('buttonsCalculator');
threeButton.classList.add('threeButton');
threeButton.addEventListener('click', appendNumber);
threeButton.textContent = '3';
threeButton.dataset.number = '3';
buttonsDiv.appendChild(threeButton);

let addButton = document.createElement('button');
addButton.classList.add('buttonsCalculator');
addButton.classList.add('addButton');
addButton.addEventListener('click', add);
addButton.textContent = '+';
buttonsDiv.appendChild(addButton);

let changeSignButton = document.createElement('button');
changeSignButton.classList.add('buttonsCalculator');
changeSignButton.classList.add('changeSignButton');
changeSignButton.textContent = '+/-';
buttonsDiv.appendChild(changeSignButton); 

let zeroButton = document.createElement('button');
zeroButton.classList.add('buttonsCalculator');
zeroButton.classList.add('zeroButton');
zeroButton.addEventListener('click', appendNumber);
zeroButton.textContent = '0';
zeroButton.dataset.number = '0';
buttonsDiv.appendChild(zeroButton);

let decimalButton = document.createElement('button');
decimalButton.classList.add('buttonsCalculator');
decimalButton.classList.add('decimalButton');
decimalButton.addEventListener('click',decimal)
decimalButton.textContent = '.';
buttonsDiv.appendChild(decimalButton);

let equalsButton = document.createElement('button');
equalsButton.classList.add('buttonsCalculator');
equalsButton.classList.add('equalsButton');
equalsButton.addEventListener('click', equal);
equalsButton.textContent = '=';
buttonsDiv.appendChild(equalsButton);

updateScreen();
//functionality 

function updateScreen() {
    screenDiv.textContent = currentInput;
}
function waitingInput(input) {
    if (currentInput === '0' && input === '0') return;
}
function appendNumber(event){
    if (currentInput.length >= 16) return; // Limite de 16 caracteres
    if(currentInput === '0' && event.target.dataset.number === '0') return; // Evita múltiplos zeros iniciais
    if(currentInput === '0') currentInput = ''; // Remove o zero inicial se um número diferente de zero for pressionado
    let tam = currentInput.length;
    currentInput += event.target.dataset.number;
    if (currentInput[tam-1] === '+'){
        sum(currentInput.eval());
        return;
    }
    updateScreen();
}
function decimal(){
    if (currentInput.includes('.')) return; 
    currentInput += '.';
}

function equal(){
    if(currentInput === '') return;
    let tam = currentInput.length;
    if(currentInput[tam-1] === '+' || currentInput[tam-1] === '-' || currentInput[tam-1] === '*' || currentInput[tam-1] === '/' || currentInput[tam-1] === '.') return;
    updateScreen();
}

function clearAll(){
    currentInput = '0';
    updateScreen();
}

function add(){
    if(currentInput === '') return;
    let tam = currentInput.length;
    if (currentInput[tam-1] === '+' || currentInput[tam-1] === '-' || currentInput[tam-1] === '*' || currentInput[tam-1] === '/' || currentInput[tam-1] === '.') return;
    currentInput += '+';
}
function sum(value){
    alert(value);
    currentInput.pop();
    let result = value;
    alert(result);
}

