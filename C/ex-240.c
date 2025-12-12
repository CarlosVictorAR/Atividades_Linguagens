/*240. Escreva um programa que leia um número inteiro entre 1 e 10 e imprima o número  
lido por extenso. Esta tarefa deve ser realizada através de um subprograma*/
#include <stdio.h>
void extenso(int num){
    char* ext[10] = {"Um","Dois","Tres","Quatro","Cinco","Seis","Sete","Oito","Nove","Dez"}; 
    if (num > 0 && num < 10){
        printf("%s\n",ext[num-1]);
    }
    else {
        printf("Invalido\n");
    }
}
int main(){
    int n;
    printf("Informe um numero entre 1 e 10: \n");
    scanf("%d",&n);
    extenso(n);
    return 0;
}