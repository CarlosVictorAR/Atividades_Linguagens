/*26. Escreva um programa que leia o peso e a altura dos atletas das quatro duplas que vão  
participar de um torneio de vôlei de praia e calcule o peso e a altura média de cada  
dupla e o peso e a altura média de todos os jogadores do torneio. */
#include <stdio.h>
#include <conio.h>

void main (){
	float peso[10];
	float altura[10];
	float mediadp[10];
	float mediadal[10];
	
	int total,contador,contador2;
	float mediatal,mediatp,somatal,somatp;
	total = 0;
	

for (contador2=0; contador2<=3; contador2++){/*aqui é quantas duplas tem no total*/

	for (contador=0; contador<=1; contador++){/*aqui é quantos jogadores tem em cada dupla*/
		printf("Digite o valor do peso do jogador %d da dupla %d: \n",contador+1,contador2+1);
		scanf("%f",&peso[total]);/*calcula o peso do jogador 1 e 2 4 vezes, e o total marca o total de jogadores*/
		
		printf("Digite o valor da altura do jogador %d da dupla %d: \n",contador+1,contador2+1);
		scanf("%f",&altura[total]);
		somatp = somatp + peso[total];
		somatal = somatal + altura[total];/*aqui recebe a soma a cada ciclo pra fzr a total*/
        printf("\n \n");
		
		if (contador==1){
			mediadp[contador2] = (peso[total] + peso[total-1])/2;
			mediadal[contador2] = (altura[total] + altura[total-1])/2;
			printf("Media de peso dupla %d: %.1f\n",contador2+1,mediadp[contador2]);
			printf("Media de altura dupla %d: %.1f\n",contador2+1,mediadal[contador2]);/*aqui vai fzr as medias e imprimir em cada ciclo de dupla completo*/
            printf("\n \n");
        }
		total++;
	}
	
	}
	mediatal = somatal / total;
	mediatp = somatp / total; /*aqui ele faz a media total do peso e altura quando pegar todos os 8 valores*/
	
	printf("A media total de peso e: %.1f\n",mediatp);
	printf("A media total de altura e: %.1f\n",mediatal);
	
	getch();
}