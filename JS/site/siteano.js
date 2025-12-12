const img = document.querySelector(".img");
function testaImg(){
    let masculino = document.querySelector(".masculino");
    let feminino = document.querySelector(".feminino");
    const radios = document.querySelector(".masculino");
const anoAtual = new Date().getFullYear();

    let ano = document.querySelector(".numero").value;
    img.style.height = "200";
    img.style.width = "200";
    if (ano > anoAtual){
        alert("Muito grande, insira outro valor");
    }
    else {
        if (ano >= anoAtual - 21 && ano <= anoAtual && feminino.checked){
            img.src="adolescentefeminino.jpeg";
           
        }
        else if (ano >= anoAtual - 21 && ano <= anoAtual && masculino.checked){
            img.src="adolescentemasculino.jpeg";
           
        }
        else if (ano >= anoAtual - 50 && masculino.checked){
            img.src="adultomasculino.jpeg";
          
        }
        else if (ano >= anoAtual - 50 && feminino.checked){
            img.src="adultafeminino.jpeg";
          
        }
        else if (ano < anoAtual - 50 && masculino.checked){
            img.src="velhomasculino.jpeg";
            
        }
        else if (ano < anoAtual - 50 && feminino.checked){
            img.src="velhafeminino.jpeg";
            
        }
    }
    
    }