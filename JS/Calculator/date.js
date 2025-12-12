const lista = [{email: "carlosvictor@gmail.com", nome: "Carlos Victor"},
{email: "cadqlwr@gold.com", nome: "Cadqlwr"},
{email: "kdwkdkw@.com", nome: "Kdwkdkw"}
];

const regex = /^[a-zA-Z0-9.!#$%&'*+/=?^_`{|}~-]+@[a-zA-Z0-9](?:[a-zA-Z0-9-]{0,61}[a-zA-Z0-9])?(?:\.[a-zA-Z0-9](?:[a-zA-Z0-9-]{0,61}[a-zA-Z0-9])?)*$/;
validarEmail(lista, regex);
function validarEmail(testar, REGEX) {
    lista = testar.forEach((usuario) => {
     if (REGEX.test(usuario.email)){
        console.log("\n"+usuario.email);
     }
     else {
        console.log("\ninvalido");
     }
    });
}
