/*239. Escreva um programa que leia as três notas de um aluno e verifique se o mesmo está  
aprovado por média, se fará prova final ou se está reprovado por média. Caso o  aluno 
tenha que fazer a prova final, o programa deve informar quanto ele terá que  tirar na 
prova. Você pode considerar que a média mínima para a aprovação por  média é 7 e 
que a média mínima para fazer a prova final é 4. O cálculo da prova final  é calculado 
através da fórmula abaixo. O programa deve ter um subprograma para  calcular a 
média parcial, um subprograma para determinar a situação do aluno e um  
subprograma para calcular quanto um aluno terá que tirar na prova final. */
#include <stdio.h>
const int TAM = 3,min_aprovacao = 7,min_final=4;
void situacao (float m){
    if (m >= min_aprovacao){
        printf("Aprovado\n");
    }
    else if (m < min_final){
        printf("Reprovado\n");
    }
    else {
        printf("Voce tem que tirar: %.1f\n",(25 - (3*m)) / 2);

    }
}
void media(float nt[],int tam){
    float media = 0;
    for (int i = 0;i<tam;i++){
        media += nt[i];
    }
    media = media / tam;
    situacao(media);
}
void main(){
    float n[TAM];
    for (int i = 0;i<TAM;i++){
        printf("Informe a %d nota: \n",i+1);
        scanf("%f",&n[i]);
    }
    media(n,TAM);

}