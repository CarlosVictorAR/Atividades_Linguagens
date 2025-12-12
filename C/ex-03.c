#include <stdio.h>
#include <conio.h>
void main(){
    float l,a,p;

    printf("Digite o valor de um lado do quadrado\n");
    scanf("%f",&l);
    a = l * l;
    p = l * 4;
    printf("quadrado de lado %1.f tem a area de %1.f e perimetro %1.f",l,a,p);

    getch();
}