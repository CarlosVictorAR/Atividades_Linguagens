/* Escreva um programa que leia o preço de produção de um determinado produto e a  
margem de lucro desejada pelo fabricante e calcule qual deve ser o seu preço de  
venda. */
#include <stdio.h>
#include <conio.h>

void main (){
	float preco,lucro;
	
	printf("Digite qual o preco de producao do produto: \n");
	scanf("%f",&preco);
	
	printf("Digite qual a marge de lucro que voce deseja(%%)? \n");
	scanf("%f",&lucro);
	
	float venda = preco + (preco * (lucro/100));
	
	printf("O lucro de %.0f%% sobre o produto de preco R$%.1f fica como preco final: R$%.1f",lucro,preco,venda);
	
	getch();
}