/*233. Escreva um programa que leia os valores dos três ângulos internos de um triângulo e  
verifique se o mesmo é um triângulo retângulo. Esta verificação deve ser realizada  
através de um subprograma.  */
#include <stdio.h>
const int TAM = 3;
int retangulo (int a[],int b){
    int reto = 0;
    for (int i = 0;i<b;i++){
        if (a[i] == 90){
            reto = 1;
        }
    }
    if (reto){
        printf("Retangulo\n");
    }
    else {
        printf("Nao retangulo\n");
    }
}
void main (){
    int n[TAM];
    for (int i = 0;i<TAM;i++){
        printf("Informe o valor %d: ",i+1);
        scanf("%d",&n[i]);
    }
    retangulo(n,TAM);
}