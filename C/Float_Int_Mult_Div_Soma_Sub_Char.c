#include <stdio.h>
int main (){
    float valor1,soma,sub,div,mult;
    int valor2;
    /*
    
    Digita valor e soma dps
    
    */
    printf("digite um valor \n");
    scanf("%f",&valor1);
    printf("%.1f.\n",valor1);
    
    printf("Digite um segundo valor \n");
    scanf("%d",&valor2);
    printf("%d.\n",valor2);
/*
Calculos

*/
    soma = valor1 + valor2;
    div = valor1 / valor2;
    mult = valor1 * valor2;
    sub = valor1 - valor2;

    printf("O valor da soma e: %.1f.\n",soma);
    printf("O valor da subtracao e: %.1f.\n",sub);
    printf("O valor da multiplicacao e: %.1f.\n",mult);
    printf("O valor da divisao e: %.1f",div);





}