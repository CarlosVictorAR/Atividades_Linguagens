/*2. Escreva um programa que leia um vetor de 10 números inteiros e, após terminar a
leitura, leia um número inteiro N e imprima todas as posições em que o número N
aparece dentro do vetor.*/
#include <stdio.h>
const int TAM =  10;
int main (){
    int vetor[TAM];
    for (int i = 0; i < TAM; i++){
        printf("Informe o %d numero: ",i+1);
        scanf("%d",&vetor[i]);
    }
    int n;
    printf("Informe o numero que deseja buscar: ");
    scanf("%d",&n);
    printf("Posicoes que o numero '%d' aparece: ",n);
    for (int i = 0; i < TAM; i++){
        if (vetor[i] == n){
            printf("%d ",i+1);
        }
    }
    getchar();
    return 0;
}