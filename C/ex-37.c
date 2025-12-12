/*Escreva um programa que leia um número positivo entre 1 e 9999 e calcule o valor da  
unidade de milhar, da centena, da dezena e da unidade. */
#include <stdio.h>
#include <conio.h>
#include <math.h>

void main (){
 float numero, unidade, dezena, centena, milhar;
 
printf("Digite um valor entre 1 e 9999: \n");
 scanf("%f",&numero);
 
 milhar = floor(numero / 1000);
 centena = floor((numero - (milhar * 1000))/100);
 dezena = floor((numero - ((milhar * 1000)+(centena * 100)))/10);
 unidade = (numero - ((milhar * 1000)+(centena * 100)+(dezena * 10)));
 
 printf("milhar: %0.f\ncentena: %0.f\ndezena: %0.f\nunidade: %0.f\n",milhar,centena,dezena,unidade);
 getch();
}