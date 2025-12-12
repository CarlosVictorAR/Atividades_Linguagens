/*224. Escreva um programa que leia um número inteiro e determine o seu valor absoluto.  O 
valor absoluto deve ser calculado através de um subprograma (sem usar qualquer  
subprograma fornecido pela linguagem de programação). */
#include <stdio.h>
valorAbsoluto(n){
    if (n >= 0){
        printf("|%d| == %d\n",n,n);
    }
    else {
        printf("|%d| == %d\n",n,n * -1);
    }
}
void main(){
    int num;
    printf("Informe um numero inteiro: \n");
    scanf("%d",&num);
    valorAbsoluto(num);
}