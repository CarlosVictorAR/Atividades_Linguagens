import criar from "./criar.js";
import mostrarDescriçao from "./mostrarDescricao.js";
let array = [];
class List{
    constructor(id,nome,categoria,descricao,imagem){
        this.id = id;
        this.nome = nome;
        this.categoria = categoria;
        this.descricao = descricao;
        this.imagem = imagem;
    }
}

array.push(new List(1,"Opa","Carro","Uma simples saudação para iniciar algo novo.","saudacaoLSW.jpg"));
array.push(new List(2,"Teste","Carro","Um simples teste para ver se está funcionando.","testeLSWimagem.png"));
array.push(new List(3, "Carlos", "Pessoa", "Um nome comum", "pessoaLSW.jpg"));
array.push(new List(4, "Bicicleta", "Carro", "Um meio de transporte ecológico", "bicicletaLSW.png"));
array.push(new List(5, "Casa", "Carro", "Um local para morar", "casaLSW.jpg"));
array.forEach((item)=>{
    let divWithContentOfItem = criar(item.id,item.nome,item.categoria,item.descricao,item.imagem);
    divWithContentOfItem.dataset.id = `${item.id}`;
    let button = document.createElement('button');
    button.classList.add('descriptionButton');
    button.textContent = 'Ver Descrição';
    button.addEventListener('click',()=>{
        mostrarDescriçao(item.descricao,item.id);
    });
    button.dataset.id = `${item.id}`;
    divWithContentOfItem.appendChild(button);
    document.body.appendChild(divWithContentOfItem);

});

let catg = array.filter((item)=>item.categoria == "Carro");
console.log(catg);

