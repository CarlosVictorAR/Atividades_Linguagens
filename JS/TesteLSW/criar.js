export default function criar(id,nome,categoria,descricao,imagem){
    let divWithContentOfItens = document.createElement('div');
    let img = document.createElement('img');
    img.src = imagem;
    img.classList.add('img');
    let h2 = document.createElement('h2');
    h2.textContent = nome;
    let category = document.createElement('p');
    category.textContent = `Categoria: ${categoria}`;
    divWithContentOfItens.classList.add('itemList');
    divWithContentOfItens.appendChild(h2);
    divWithContentOfItens.appendChild(img);
    divWithContentOfItens.appendChild(category);

    return divWithContentOfItens;
}