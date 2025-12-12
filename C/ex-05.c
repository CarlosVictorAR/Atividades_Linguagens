#include <stdio.h>
#include <math.h>
#include <conio.h>
//Escreva um programa que leia o valor do raio de uma circunferência e calcule a sua  área e o seu comprimento.
void main () {
    float raio,pi,area,com;
    pi = 3.1;
    printf("Digite o raio da sua circunferencia\n");
    scanf("%f",&raio);
    //calculos
    area = pi * pow(raio, 2);
    com = 2 * pi * raio;
    printf("A area do seu circulo de raio %.0f e igual a %.0f\nO comprimento e igual a %.0f  ",raio,area,com);
    getch();
}