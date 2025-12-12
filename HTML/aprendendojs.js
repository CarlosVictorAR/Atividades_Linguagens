//VARIAVEIS
/*var pessoa = {
    nome: "Carlos",
    idade: 18,
    cidade: "pombal",
    apresentar: function (){
        return "Olá, meu nome é "+this.nome+", tenho "+this.idade+" anos e moro em "+this.cidade;
    }
}
alert (pessoa.apresentar());*/
function Amarelo(){
    document.body.style.backgroundColor="yellow";
}
function Branco(){
    document.body.style.backgroundColor="white";
}
function alinharEsquerda(){
    document.body.style.textAlign="left";
}
function alinharCentro(){
    document.body.style.textAlign="center";
}
function Vermelho(){
    let div = document.querySelector('#Cor');
    div.style.backgroundColor="red";
}
function Azul(){
    let div = document.querySelector("#Cor");
    div.style.backgroundColor="blue";
}
function limpaTexto(){
    document.querySelector(".Escreva").value="";
}
function diminuirOpacidade(){
    let mudar=document.querySelector(".Escreva");
    mudar.style.opacity = "0.3";
}
function voltarOpacidade(){
    let mudar=document.querySelector(".Escreva");
    mudar.style.opacity = "1.0";
}