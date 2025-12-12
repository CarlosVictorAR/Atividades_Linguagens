#include <stdio.h>
const int TAM = 10;
int main (){
    /*1. Escreva um programa que leia dez números inteiros e, após finalizar a leitura, leia um
número inteiro N (entre 1 e 10) e imprima qual foi o enésimo número digitado pelo
usuário.*/
int num [TAM];
    for (int i  = 0; i < TAM; i++){
        printf("Informe o %d numero: ",i + 1);
        scanf("%d",&num[i]);
    }
    int N;
    printf("Informe o numero N:");
    scanf("%d",&N);
    printf("%d numero: %d\n", N, num[N-1]);
    getchar();
}