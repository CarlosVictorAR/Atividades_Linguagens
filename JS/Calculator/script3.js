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

array.push(new List(1,"Opa","Saudação","Uma simples saudação para iniciar algo novo.","#"));
array.push(new List(2,"Teste","Teste","Um simples teste para ver se está funcionando.","#"));

array.forEach((item)=>{
    
});

function criar(id,nome,categoria,descricao,imagem){
    const divWithContentOfItens = 
    `<div class="itemList" id="${id}">
        <h2> ${nome} </h2>
        <img src="${imagem}" alt="${nome} class="img"/>
        <h3> ${categoria} </h3>
        <button class="descriptionButton" onclick = mostrarDescriçao(descricao)> Ver Descrição </button>
    </div>`

    return divWithContentOfItens
}