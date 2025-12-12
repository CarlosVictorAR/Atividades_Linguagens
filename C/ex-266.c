/*266. Escreva um subprograma recursivo que receba como entrada um vetor de 10
números inteiros e um número inteiro N entre 1 e 10 e calcule a soma de todos os
elementos do vetor a partir da posição N.
*/
#include <stdio.h>
const int TAM = 10;
int soma(int vetor[],int n){
    if (n == TAM-1){
        return vetor[n];
    }
    return soma(vetor,n+1) + vetor[n];
}
int main(){
    int vetor[TAM],n;
    for (int i = 0; i < TAM; i++){
        scanf("%d",&vetor[i]);
    }
    printf("Informe o numero que deseja descobrir(1 a 10): ");
    scanf("%d",&n);
    printf("A soma das posiçoes dos vetores a partir da %d eh: %d",n,soma(vetor,n-1));
    getchar();
    return 0;
}