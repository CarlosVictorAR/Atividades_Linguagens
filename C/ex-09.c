/*Escreva um programa que leia o valor de uma distância percorrida em km e o tempo  
gasto em horas e calcule a velocidade média em m/s.*/
#include <conio.h>
#include <stdio.h>
void main()
{
float dis,tem,vel;

printf("Qual a distancia percorrida em km: \n");
scanf("%f",&dis);

printf("Quanto tempo demorou para percorrer essa distancia em horas: \n");
scanf("%f",&tem);

vel = dis / tem;

printf("A velocidade media é: %0.fkm/h",vel);
getch();


}