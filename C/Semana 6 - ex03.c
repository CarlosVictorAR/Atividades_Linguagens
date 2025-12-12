#include <stdio.h>
const int TAM = 10;
/*3. Escreva um programa que leia um vetor de dez caracteres e verifique se o vetor é ou
não um palíndromo.*/
int main(){
    int vetor[TAM];
    int palindromo = 1;
    for(int i = 0;i < TAM; i++){
        printf("Informe o %d caracter: ", i+1);
        scanf("%d", &vetor[i]);
    }
    for (int i = 0 ; i < TAM/2 ; i++){
        if (vetor[i] == vetor[TAM - 1 - i]){
            continue;
        } else {
            palindromo = 0;
            break;
        }
    }
    getchar();
    if (palindromo){
        printf("O vetor eh um palindromo.\n");
    } else {
        printf("O vetor nao eh um palindromo.\n");
    }
}