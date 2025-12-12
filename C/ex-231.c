/*231. Escreva um programa que leia três números inteiros distintos e identifique o maior e  o 
menor número lido. O programa deve ter um subprograma para calcular o maior  
número e outro para calcular o menor número.  */
#include <stdio.h>
const int TAM = 3;
int maiorMenor(int a[],int b){
    int maior=a[0],menor=a[0];
    for (int i = 0;i<b;i++){
        if (a[i] > maior){
            maior = a[i];
        }
        else if (a[i] < menor){
            menor = a[i];
        }
    }
    printf("Maior: %d\nMenor: %d\n",maior,menor);
}

void main(){
 int n[TAM];
 for (int i = 0;i<TAM;i++){
    printf("Informe o %d numero: \n",i+1);
    scanf("%d",&n[i]);
 }
    maiorMenor(n,TAM);
}