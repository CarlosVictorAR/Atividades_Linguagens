#include <stdio.h>
#include <conio.h>
#include <string.h>
/* Escreva um programa que leia uma palavra e um número inteiro k e identifique a k 
ésima letra da palavra informada pelo usuário.*/

void main () {
    char frase[100];
   
    printf("Escreva uma frase: \n");
    scanf("%100[^\n]s",frase);
    int tamanho = strlen(frase);

    int numero = 0;
    do {

    printf("Digite um número entre 1 e %d \n",tamanho);
    scanf("%d",&numero);

    if (numero >= 1 && numero<=tamanho){
        printf("a letra de número %d e %c",numero,frase[numero-1]);

    } 
    else {
        printf("Numero invalido, escolha outro. \n");
    }

    } while (numero < 1 || numero > tamanho);

    getch();
}