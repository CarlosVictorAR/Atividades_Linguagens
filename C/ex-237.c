/*237. Escreva um programa que leia os coeficientes a, b e c de uma equação do 2º grau e  
calcule todas as suas raízes reais. O programa deve ter um subprograma para calcular  
o valor de delta, além de subprogramas para determinar as raízes da equação.  */
#include <stdio.h>
#include <math.h>
float delta(float x1,float x2,float x3){
    float d = pow(x2,2) - (4 * x1 * x3);
    raizes(x1,x2,x3,d);
}
float raizes(float ca,float cb,float cc,float del){
    if (del == 0){
        printf("Raiz: %.2f\n",-cb /2 * ca);
    }
    else if (del < 0){
        printf("Raizes: %.2f e %.2f\n",(-cb + sqrt(del) / 2 * ca),(-cb - sqrt(del) / 2 * ca));
    }
    else {
        printf("Nenhuma raiz real\n");
    }
}
void main (){
    float a,b,c;
    printf("Informe os valores dos coeficientes a b e c:\n");
    scanf("%f%f%f",&a,&b,&c);
    delta(a,b,c);
}