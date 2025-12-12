#include <stdio.h>
int main(){
    int dia;
    printf("Escolha um número de 1 a 7: \n");
    scanf("%d",&dia);

    switch (dia) {
        case 1:
            printf("Segunda");
        break;
        case 2:
            printf("Terca");
        break;
        case 3: 
            printf("Quarta");
        break;
        case 4:
            printf("Quinta");
        break;
        case 5:
            printf("Sexta");
        break;
        case 6:
            printf("Sábado");
        break;
        case 7:
            printf("Domingo");
        break;
        default:
            printf("OUTRO"); 
        break;
    }
}