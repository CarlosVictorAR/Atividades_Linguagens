#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(){

    char filename[100];
    int valor1;
    int valor2;
    char nome[50];
    char texto1[20];
    char texto2[20];
    strcpy(filename, "employees.csv;10;20;ola;carlos");
    printf("Original: %s\n", filename);
    char S[100];
    strcpy(S, filename);
    char *token;
    token = strtok(S, ";");
    for (int i = 0; i < 5; i++){
        switch(i){
            case 0:
                strcpy(nome, token);
                break;
            case 1:
                valor1 = atoi(token);
                break;
            case 2:
                valor2 = atoi(token);
                break;
            case 3:
                strcpy(texto1, token);
                break;
            case 4:
                strcpy(texto2, token);
                break;
            }
            token = strtok(NULL, ";");
        }

        printf("\nNew string: %s\n", S);
        printf("\nDados extraidos:\n");
        printf("Nome do arquivo: %s\n", nome);
        printf("Valor 1: %d\n", valor1);
        printf("Valor 2: %d\n", valor2);
        printf("Texto 1: %s\n", texto1);
        printf("Texto 2: %s\n", texto2);
        // employees.csv
        
    }