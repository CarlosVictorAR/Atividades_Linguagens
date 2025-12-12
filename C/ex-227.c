/*227. Escreva um programa que leia a idade de uma pessoa e verifique se ela é criança (0- 12 
anos), adolescente (13-17 anos), adulta (18-59) ou idosa (acima de 60 anos). Esta  
verificação deve ser realizada através de um subprograma. */
#include <stdio.h>
int idd(int n){
    if (n <= 12){
        printf("\nCrianca\n");
    }
    else if (n <= 17){
        printf("\nAdolescente\n");
    }
    else if (n <= 59){
        printf("\nAdulta\n");
    }
    else {
        printf("\nIdosa\n");
        
    }
}
void main(){
    int idade;
    printf("Informe a idade da pessoa: \n");
    scanf("%d",&idade);
    idd(idade);
}