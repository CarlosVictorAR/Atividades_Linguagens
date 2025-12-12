/*236. Escreva um programa que leia os coeficientes a, b e c de uma equação do 2º grau e  
verifique a quantidade de raízes reais da equação. O programa deve ter um  
subprograma para calcular o valor de delta e outro para determinar a quantidade de  
raízes reais.  */
#include <stdio.h>
#include <math.h>
int raizes(x){
    if (x == 0){
        printf("Duas raizes identicas\n");
    }
    else if (x > 0){
        printf("Duas raizes distintas\n");
    }
    else {
        printf("Nenhuma raiz real\n");
    }
}
int delta (int x1,int x2,int x3){
    int d = pow(x2,2) - (4 * x1 * x3);
    raizes(d);
}
void main (){
    int a,b,c;
    printf("Informe o valor dos coeficientes a b e c: \n");
    scanf("%d%d%d",&a,&b,&c);
    delta(a,b,c);
}