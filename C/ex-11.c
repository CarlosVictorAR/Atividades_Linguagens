#include <conio.h>
#include <stdio.h>
void main()
{
  /*Escreva um programa que leia um valor em real, a cotação atual do dólar e calcule o  
valor informado pelo usuário em dólares.*/
  float real,cot,dol;

  printf("Digite quantos reais você deseja converver: \n");
  scanf("%f",&real);

  printf("Digite a cotação atual do dolar: \n");
  scanf("%f",&cot);

  dol = real / cot;

  printf("Você tem atualmente: %.1f$",dol);
  getch();
}