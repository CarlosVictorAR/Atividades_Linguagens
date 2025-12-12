/*214. Em um determinado concurso público, para cada questão que um candidato acerta  ele 
ganha 5 pontos, para cada questão que ele erra ele perde 3 pontos e para cada  
questão que ele deixa em branco ele não ganha e nem perde pontos. Escreva um  
programa que leia o número de questões que um candidato acertou, o número de  
questões que ele errou e o número de questões que ele deixou em branco e  
determine a sua pontuação final. A pontuação deve ser calculada através de um  
subprograma, que deve receber como entrada o número de questões certas, o  
número de questões erradas e o número de questões em branco.  */
#include <stdio.h>
const int ponto_acerto = 5;
const int ponto_erro = -3;
const int ponto_branco = 0;
int pontos(ac,er,br){
    return (ac * ponto_acerto) + (er * ponto_erro) + (br * ponto_branco); 
}
void main (){
    int acertos,erros,brancos;
    printf("Informe a quantidade de acertos: \n");
    scanf("%d",&acertos);
    printf("Informe a quantidade de erros: \n");
    scanf("%d",&erros);
    printf("Informe a quantidade de brancos: \n");
    scanf("%d",&brancos);
    printf("Total: %d",pontos(acertos,erros,brancos));
}