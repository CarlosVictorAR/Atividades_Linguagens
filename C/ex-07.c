//Escreva um programa que leia o valor da base e da altura de um triângulo e calcule a  sua área.
#include <stdio.h>
#include <conio.h>

void main()
{
  enable_utf8();
  float base,altura,area;
  printf ("Escreva o valor da base do seu triângulo (m): \n");
  scanf("%f",&base);

  printf ("Escreva a altura do seu triângulo (m): \n");
  scanf("%f",&altura);

  //calculos
  area = base * altura;

  printf("A área do seu triangulo com base %1.fm e altura %1.fm é %1.fm² ",base,altura,area);
  getch();



}