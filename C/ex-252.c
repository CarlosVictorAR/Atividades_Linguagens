/*Escreva um subprograma recursivo que receba como parâmetros de entrada dois
números inteiros M e N e calcule a soma de todos os números do intervalo [M, N].*/
#include <stdio.h>
int somatorio(int m, int n){
    int soma;
    if (m == n){
        return m;
    }
    soma = somatorio(m-1,n);
    return soma + m;
}

int main(){
    int m,n;
    printf("Informe M e N:\n");
    scanf("%d%d",&m,&n);
    int soma = somatorio(m,n);
    printf("%d",soma);
    getchar();
    return 0;
}