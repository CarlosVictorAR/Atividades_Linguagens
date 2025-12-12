/*35. Escreva um programa que leia o valor de uma distância em metros e calcule o seu  valor 
correspondente em quilômetros, hectômetros, decâmetros, centímetros,  decímetros e 
milímetros. */
#include <stdio.h>
#include <conio.h>
#include <math.h>

void main (){
	float m;
	
	printf("Digite a distancia em metros: \n");
	scanf("%f",&m);
	printf("\n");
	
	float km = m / 1000;
	float hm = m / 100;
	float dm = m / 10;
	float cm = m * 100;
	float dcm = m * 10;
	float mm = m * 1000;
	
	printf("Quilometros: %.1fkm\nHectametros: %.1fhm\nDecametros: %.1fdm\nCentimetros: %.1fcm\nDecimetros: %.1fdcm\nMilimetros: %.1fmm\n",km,hm,dm,cm,dcm,mm);
	getch();
}