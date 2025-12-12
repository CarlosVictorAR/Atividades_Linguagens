#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <ctype.h>

void main (){
    char letra[100];
    int tamanho = 0;

    do {
        printf("Digite uma letra minuscula: \n");
        scanf("%s",letra);

        tamanho = strlen(letra);

        if (islower(letra[0]) && tamanho == 1){
            printf("O maiusculo de %c eh %c",letra[0],toupper(letra[0]));
        } else {
            printf("Voce digitou uma letra invalida\n");
        }
        

    } while (tamanho != 1 || !islower(letra[0]));
    getch();
}