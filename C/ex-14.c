/*Escreva um programa que leia uma palavra e calcule o seu comprimento. */
#include <stdio.h>
#include <conio.h>
#include <string.h>

void main (){
    char st[100];
    float c = 0;
    int co = 0;

    printf("Digite uma frase: ");
    scanf("%100[^\n]s",st);
    float m = strlen(st);

    while (co<=m){

        if (st[co] != ' '){
        c = c + 1;
        }
        co++;
    }
    printf("%.0f",c = c-1);
    getch();
}