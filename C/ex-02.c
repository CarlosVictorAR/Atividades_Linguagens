#include <stdio.h>
#include <conio.h>
void main(){
    float n1,n2,n3,media,soma,p1,p2,p3;

    printf("Digite a primeira nota: \n");
    scanf("%f",&n1);
    printf("Digite o primeiro peso: \n");
    scanf("%f",&p1);
    printf("Digite a segunda nota: \n");
    scanf("%f",&n2);
    printf("Digite o segundo peso: \n");
    scanf("%f",&p2);
    printf("Digite a terceira nota: \n");
    scanf("%f",&n3);
    printf("Digite o terceiro peso: \n");
    scanf("%f",&p3);

    soma = (n1 * p1) + (n2 * p2) + (n3 * p3);
    media = soma / (p1+p2+p3);
    printf("A média ponderada das notas %.1f, %.1f, %.1f,"
         " com os respectivos pesos: %.1f, %.1f, %.1f, é: %.1f",n1,n2,n3,p1,p2,p3,media);

        

}