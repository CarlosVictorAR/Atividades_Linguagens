#include <stdio.h>
#include <string.h>
#include <ctype.h>

const int tamanho = 20;

int letrascomum(char str1[tamanho], char str2[tamanho]) {
    int letras1[26] = {0};
    int letras2[26] = {0};
    int i, comum = 0;

    for (i = 0; str1[i] != '\0'; i++) {
    
            letras1[str1[i] - 'a']++;
        
    }

 
    for (i = 0; str2[i] != '\0'; i++) {
       
            letras2[str2[i] - 'a']++;
        
    }

    for (i = 0; i < 26; i++) {
        if (letras1[i] && letras2[i]) {
            comum++;
        }
    }

    return comum;
}

int main() {
    char string1[tamanho], string2[tamanho];
    char string3[tamanho], string4[tamanho];

    printf("Informe a primeira string: ");
    scanf("%s", string1);

    printf("Informe a segunda string: ");
    scanf("%s", string2);

   
    for (int i = 0; i <= strlen(string1); i++) {
        string3[i] = tolower(string1[i]);
    }

    for (int i = 0; i <= strlen(string2); i++) {
        string4[i] = tolower(string2[i]);
    }

    int resultado = letrascomum(string3, string4);
    printf("as strings %s e %s têm %d letras em comum.\n", string1, string2,resultado);

}