/*Escreva um programa que leia o valor de uma temperatura em Celsius e calcule o seu  
valor correspondente em Fahrenheit e em Kelvin.  */
#include <conio.h>
#include <stdio.h>
void main()
{

    float c,f,k;

    printf ("Digite qual a temperatura em C: \n");
    scanf ("%f",&c);

    f = (c*1.8) + 32;
    k = c + 273;

    printf("--Temperaturas-- \n");
    printf("Celsius: %.1fC\n",c);
    printf("Fahrenheit: %.1fF\n",f);
    printf("Kelvin: %.1fK",k);
    getch();
}