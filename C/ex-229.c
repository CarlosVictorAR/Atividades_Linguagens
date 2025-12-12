/*229. Escreva um programa que leia os valores dos três lados de um triângulo e o  classifique 
como equilátero, isósceles ou escaleno. Esta verificação deve ser realizada  através de 
um subprograma. */
#include <stdio.h>
int classificar(int la1,int la2,int la3){
    if (la1 == la2 && la2 == la3){
        printf("\nEquilatero\n");
    }
    else if (la1 != la2 && la2 != la3 && la1 != la3){
        printf("\nEscaleno\n");
    }
    else {
        printf("\nIsosceles\n");
    }
}
void main(){
    int l1,l2,l3;
    printf("Informe o valor dos 3 lados do triangulo: \n");
    scanf("%d%d%d",&l1,&l2,&l3);
    classificar(l1,l2,l3);
}