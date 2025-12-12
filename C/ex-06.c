//Escreva um programa que leia um número inteiro e informe o seu antecessor e o seu  sucessor.
#include <stdio.h>
#include <math.h>
#include <conio.h>
void main () {
    float num,ant,suc;
   
    printf ("Informe um número:\n");
    scanf("%f",&num);
    suc = num + 1;
    ant = num - 1;
    printf("O numero %.0f tem como antecessor e sucessor\n"
        "Antecessor: %.0f\n"
        "Sucessor: %.0f",num,ant,suc);
        getch();
    
}