/*226. Escreva um programa que leia um número inteiro e verifique se ele é positivo,  
negativo ou neutro. Esta verificação deve ser realizada através de um subprograma.  */
#include <stdio.h>
int testador (int num){
    if (num>0){
        printf("Positivo\n");
    }
    else if (num == 0){
        printf("Neutro\n");
    }
    else {
        printf("Negativo\n");
    }
}
void main (){
    int n;
    printf("Informe um numero inteiro: \n");
    scanf("%d",&n);
    testador(n);
}