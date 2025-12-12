let div = document.createElement('div');
div.classList.add('container');
let game = document.createElement('div');
game.classList.add('game');
div.appendChild(game);
document.body.appendChild(div);
let cells = [];
let contador = 0;
var contadorVitoria = 0;
function countBomb(event){
    let id = parseInt(event.target.dataset.id);
    let count = 0;
    for (let i = id - 10; i <= id + 10; i+=10){
        for (let j = -1; j <= 1; j++){
            if (i+j >= 0 && i+j < 100 && cells[i+j] && cells[i+j].dataset.value === 'X' && (j !== -1 || i % 10 !== 0) && (j !== 1 || i % 10 !== 9)){
                count++;
            }
        }
    }
    return count;
}

function slotClick(event){
    if (event.target.dataset.value === 'X'){
        event.target.style.backgroundColor = 'red';
        alert('Game Over!');
        location.reload();
    }
    else {
        event.target.style.backgroundColor = 'white';
        contadorVitoria++;
        event.target.removeEventListener('click', slotClick);
        event.target.style.cursor = 'default';
        event.target.dataset.type = 'clicked';
        event.target.textContent = countBomb(event);
        if (contadorVitoria === 100 - contador){
            alert('You Win!');
            location.reload();
        }
    }
}
for (let i = 0; i < 100; i++){
    let cell = document.createElement('div');
    cell.classList.add('cell');
    cell.style.backgroundColor = 'lightgray';
    cell.style.border = '1px solid black';
    cell.style.width = '30px';
    cell.style.height = '30px';
    cell.style.display = 'flex';
    cell.style.justifyContent = 'center';
    cell.style.alignItems = 'center';
    cell.style.fontSize = '20px';
    cell.style.cursor = 'pointer';
    if (Math.random() < 0.2 && contador < 20){
        cell.dataset.value = 'X';
        contador++;
    }
    else {
        cell.dataset.value = 'O';
    }
    cell.dataset.id = i;
    cell.dataset.type = 'unclicked';
    cell.dataset.mark = 'false';
    cells.push(cell);
    game.appendChild(cell);


    cell.addEventListener('click', slotClick);
}
function markSafe(event){
    if (event.target.dataset.type === 'unclicked' && event.target.dataset.mark === 'false'){
        event.target.textContent = '🚩';
        event.target.dataset.mark = 'true';
    }
    else if (event.target.dataset.mark === 'true' && event.target.dataset.type === 'unclicked'){
        event.target.textContent = '';
        event.target.dataset.mark = 'false';
    }
}
function outSafeClick(){
    button.textContent = '🚩';
    button.removeEventListener('click', outSafeClick);
    button.addEventListener('click', safeClick);
    cells.forEach(cell => {
        cell.removeEventListener('click', markSafe);
        if (cell.dataset.type === 'unclicked'){
            cell.addEventListener('click', slotClick);
        }    
    });
    
}
function safeClick(){
    button.removeEventListener('click', safeClick);
    button.addEventListener('click', outSafeClick);
    button.textContent = '❌';
    cells.forEach(cell => {
        cell.removeEventListener('click', slotClick);
        cell.addEventListener('click',markSafe);
    });
}
let button = document.createElement('button');
button.textContent = '🚩';
button.classList.add('button');
button.style.marginTop = '20px';
button.style.padding = '0px 20px';
button.style.fontSize = '20px';
button.style.cursor = 'pointer';
button.addEventListener('click', safeClick);
div.appendChild(button);

