/*223. Escreva um programa que leia um número inteiro e verifique se ele é par ou ímpar. A  
verificação de ser realizada através de um subprograma.*/
#include <stdio.h>
parImpar(int p){
    if (p % 2 == 0){
        printf("\npar\n");
    }
    else {
        printf("\nimpar\n");
    }
}
void main (){
    int num;
    printf("Informe um numero inteiro: \n");
    scanf("%d",&num);
    parImpar(num);
    getchar();
}