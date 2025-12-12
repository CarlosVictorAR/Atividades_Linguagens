/* Escreva um programa que leia um valor em polegadas e o converta para centímetros,  
considerando que uma polegada equivale a 2.54 cm.*/
#include <conio.h>
#include <stdio.h>
int main()
{
  float pol,cm;

  printf("Quantas polegadas voce deseja converter para centimetros? \n");
  scanf("%f",&pol);

  cm = pol * 2.54;

  printf("Voce tera %.1f cm",cm);
  getch();
  
}