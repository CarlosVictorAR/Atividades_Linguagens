/*39. Escreva um programa que leia o tamanho de um arquivo em MB e a taxa de  
transmissão da rede em KB/s e calcule o tempo aproximado necessário para a  
transmissão do arquivo. A resposta deve ser dada através de uma mensagem na forma  
X horas, Y minutos e Z segundos.  */

#include <stdio.h>
#include <conio.h>
#include <math.h>

void main (){
	/*MB convertido pra KB, cada segundo roda certa quantidade de kb entao pra calcular o tempo é dividir o total 
	por quanto kb ele passa por segundo, o resultado é os segundos total, e usa a formula das horas minutos e segundos 
	transformar*/
	/* kbtotal = mb * 1000*/
	
	float mb;
	
		printf("Digite quantos MB tem o arquivo: \n");
		scanf("%f",&mb);
	
	float conv;
		
		printf("Digite a taxa de transmissao da rede (KB/s): \n");
		scanf("%f",&conv);
	
	float kbt = mb * 1000;//kb total
	float segt = kbt / conv;//segundos total
	
	float hrs = segt / 3600;
	float min = (segt % 3600) / 60;
	float seg = (segt % 3600) % 60;
	
	printf("\n");
	printf("%.0f horas, %.0f minutos e %.0f segundos.",hrs,min,seg);
	
	getch();
	
	
	
	
		
}