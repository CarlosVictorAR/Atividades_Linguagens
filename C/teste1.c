/*127. Escreva um programa que leia várias palavras e, para cada palavra lida, determine o  
seu número de letras. O processamento deverá ser encerrado quando forem lidas duas  
palavras de cinco letras. */
#include <math.h>
#include <stdio.h>
#include <string.h>
void main (){
	char palavra1[20];
	char palavra2[20];
	int stop = 1;
	int tamanho1,tamanho2;
		while (stop){
			printf("Digite uma palavra:\n");
			gets(palavra1);
			tamanho1 = strlen(palavra1);
			printf("Tamanho1: %d",tamanho1);
			
			printf("Digite outra palavra:\n");
			gets(palavra2);
			tamanho2 = strlen(palavra2);
			printf("Tamanho2 : %d",tamanho2);
			
			printf("%s tem %d letras e %s tem %d letras.\n",palavra1,tamanho1,palavra2,tamanho2);
			if (tamanho1 == tamanho2 && tamanho1 == 5){
				stop = 0;
			}
		}
} 