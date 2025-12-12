/*27. Escreva um programa que leia o comprimento e a largura de uma cisterna e a  
quantidade de litros que o usuário deseja armazenar na mesma e determine quantos  
metros ele deve encher a cisterna para obter a quantidade de litros desejada. */

#include <stdio.h>
#include <conio.h>
#include <math.h>

void main(){
	float comp,larg,ql;
	
	printf("Digite o comprimento da sua cisterna: \n");
	scanf("%f",&comp);
	
	printf("Digite a largura da sua cisterna: \n");
	scanf("%f",&larg);
	
	printf("Digite a quantidade de litros que voce deseja dispejar na cisterna: \n");
	scanf("%f",&ql);
	
	/* quantidade maxima = comprimento * comprimento * largura;*/
	/* quantidade deseja / comprimento * comprimento = largura*/
	
	float metro = ql / pow(comp,2);
	
	printf("A quantidade de metros para alcancar %.1f eh %.1f",ql,metro);
	getch();
}