export default function mostrarDescriçao(descricao, id){
    const divPage = document.createElement('div');
    divPage.classList.add('divPageDescription');
    divPage.textContent = descricao;
    const close = document.createElement('button');
    close.classList.add('closeButtonDescription');
    close.textContent = 'X';
    close.addEventListener('click',()=>{
        document.body.removeChild(divPage);
        let divRemoved = document.querySelector(`div[data-id="${id}"]`);
        if (divRemoved){
            document.body.removeChild(divRemoved);
        }
        });
    divPage.appendChild(close);
    document.body.appendChild(divPage);
    }