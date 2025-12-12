/*4. Escreva um programa que leia um número inteiro entre 0 e 255 e calcule o seu valor
correspondente em binário.*/
#include <stdio.h>
int main(){
    int num;
    int vetor[8];
    printf("Informe um numero entre 0 e 255:");
    scanf("%d",&num);
    int i = 0;
    while (num  > 1){
        if (num % 2 == 0){
            vetor[i++] = 0;
            num = num / 2;
        }
        else {
            vetor[i++] = 1;
            num = num / 2;
        }
    }
    for (int j = i-1; j >= 0 ; j--){
        printf("%d",vetor[j]);
    }
    getchar();
}