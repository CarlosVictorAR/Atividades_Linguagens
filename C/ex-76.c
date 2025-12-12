/*76. Escreva um programa que leia as coordenadas x e y de um ponto e verifique a qual 
quadrante este ponto pertence. Você pode supor que o ponto digitado pelo usuário  
pertence a apenas um quadrante.  */
#include <stdio.h>
#include <conio.h>
#include <math.h>
void main (){
	
	int x;
		printf("Digite a coordenada x: \n");
		scanf("%d",&x);
		
	int y;
		printf("Digite a coordenada y: \n");
		scanf("%d",&y);
		
	if (x != 0 && y != 0){//se for zero tem dois quadrantes
		if (x > 0 && y > 0){
			printf("\nPrimeiro quadrante\n");
		}
			else {
				if (x < 0 && y > 0){
					printf("\nSegundo quadrante\n");
				}
					else {
						if (x < 0 && y < 0){
							printf("\nTerceiro quadrante\n");
						}
							else {
								printf("\nQuarto quadrante\n");
							}
					}
			}
		
	}//else do primeiro if
		else {
			printf("\nInvalido, X e Y precisam ter valores diferentes de 0\n");
		}
		getch();
}