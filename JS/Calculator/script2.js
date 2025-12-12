
/*console.log("Opa Falae".split(""));
const arr = String("Opa Falae");
const arr2 = new String("Opa Falae");

console.log(`arr: ${arr}, arr2: ${arr2}`);

console.log(`arr dividida: ${arr.split("")}, arr2 dividida: ${arr2.split("")}`);

const arr2Convertido = arr2.valueOf();
const arrConvertido = arr.valueOf();

console.log(`arr convertido: ${arrConvertido}, arr2 convertido: ${arr2Convertido}`);

console.log(`arr convertido tipo: ${typeof arrConvertido}, arr2 convertido tipo: ${typeof arr2Convertido}`);*/


/*let num3 = parseInt('102');
num3 = num3.toFixed(2);
const num = Number('1');
const num2 = new Number('2');
console.log(`num: ${num}, num2: ${num2}`);
let texto = 'Ola'.toUpperCase();*/


/*const obj = {
    nome: 'Opa',
    sobrenome: 'Falae'
};
const json = JSON.stringify(obj);
const obj2 = JSON.parse(json);*/

/*const obj = {
    nome:"opa",
    array:[
        {name:"oi"},
        {name:"tchau"},
        {name:"falou"}
    ],
    funcao: ()=>{
        console.log("Opa Falae");
    }
}
const json = JSON.stringify(obj);
const obj2 = JSON.parse(json);*/


/*
function DizOla(){
    return "Ola ";
}
function Apresentacao(func,nome){
    console.log(func() + nome);
}
Apresentacao(DizOla,"Carlo");
*/


/*
function abrir(){
    return function oi(){
        console.log("Opa Falae");
    }
}

abrir()();
*/

/*
const ArrayLiteral = [1,2,3,4];
const ArrayConstrutor = new Array(1,2,3,4);
const ArrayConstrutorCall = Array(1,2,3,4);
const meuArrayConstrutorCall = Array(10);
meuArrayConstrutorCall[5] = 10;
const meuArrayFrom = Array.from(meuArrayConstrutorCall);
const meuArraySpread = [...meuArrayFrom];
const obj = {
    0: 1,
    1: `aa`,
    2: `a`,
    3: 4
}
*/


/*
const array = [1,2,3,4,5];
const array2 = new Array(...array);
array2.push(6);
const obj = {
    0: "carlos",
    1: "silva",
    2: 100
}
const obj2 = {...obj};
obj2[2] = 200;
//Spread ele copia os valores e coloca no array sem mudar o array original quando muda a copia
*/


/*
const array = [1,2,3,4,5,6,7,8,9,10];
const newArray = array.slice(array.indexOf("Developer"),1);
*/

/*
const obj1 = { a: 1, b: 2};
const obj2 = {b: 3, c: 4, teste: ()=>{ console.log("Opa Falae");}};
Object.assign(obj2,obj1);
const obj3 = JSON.stringify(obj2);
const copia = JSON.parse(obj3);
const objTotal = Object.assign(obj1,obj2,copia);
*/
/*
const str = "Para maiores informações, veja o catálogo 3.4.5.1 de produtos.";
const re = /(catálogo \d+(\.\d)*)/;
const found = str.match("3");
console.log(found);
*/

/*
const str1 = "null, undefined, NaN, Infinity, -Infinity, +Infinity, Number";
//msm coisa que o match();
console.log(str1.search(null));
console.log(str1.search(undefined));
console.log(str1.search(NaN));
console.log(str1.search(Infinity));
console.log(str1.search(-Infinity));
console.log(str1.search(+Infinity));
console.log(str1.search("Number"));
*/

setInterval(adicionarParagrafo,2000);
const divParagrafos = document.querySelector("#container");
function adicionarParagrafo(){
    divParagrafos.innerHTML += `<p class="destaque">Paragrafo Adicionado</p>`
}

const contagemP = document.querySelector("#contagemP");
const contagemClasse = document.querySelector("#contagemClasse");
function atualizarContagemP(){
    let quantidade = document.querySelectorAll("#container p");
    let quantidadeArray = Array.from(quantidade);
    contagemP.textContent = quantidadeArray.length;
    
}
function atualizarContagemClasse(){
    let quantidade = document.querySelectorAll(".destaque");
    let quantidadeArray = Array.from(quantidade);
    contagemClasse.textContent = quantidadeArray.length;
}
setInterval(atualizarContagemP,2000);

setInterval(atualizarContagemClasse,2000);