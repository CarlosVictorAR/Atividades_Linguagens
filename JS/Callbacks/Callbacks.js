let chamar = callback => {
    let value = 30;
    callback(value);
}

function imprimir(valor){
    console.log("O valor é: " + valor);
}

chamar(imprimir);