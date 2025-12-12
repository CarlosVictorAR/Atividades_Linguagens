/*32. O carro de João consegue percorrer em média 14 km consumindo 1 litro de  
combustível. Escreva um programa que leia o valor da distância que João vai percorrer  
durante uma viagem e o preço atual de um litro de combustível e calcule quanto ele  
deverá gastar com combustível durante a viagem.*/

#include <stdio.h>
#include <conio.h>
#include <math.h>

void main (){
	const float kml = 14;
	const float lat = 6.3;
	
	float dist;
	
	printf("Digite a distancia que deseja percorrer: \n");
	scanf("%f",&dist);
	
	float litro = dist / kml;
	
	float preco = litro * lat;
	
	printf("Devera gastar: R$%.2f\n",preco);
	getch();
}