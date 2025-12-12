/*222. O Banco do Povo está realizando uma grande promoção em seus financiamentos. Ele  
financia qualquer valor em 5 prestações. O valor da primeira prestação corresponde  
à 20% do valor do empréstimo. Os valores das demais prestações correspondem ao  
valor da parcela anterior acrescido de uma taxa de juros de 7%. Escreva um  programa 
que leia o valor a ser financiado por um cliente e calcule: o valor de cada  prestação, o 
valor total que o cliente vai pagar pelo empréstimo e o total de juros  que o cliente vai 
pagar pelo empréstimo. O programa deve ter um subprograma para  calcular o valor 
de cada parcela do empréstimo. */
#include <stdio.h>
const int total_prestacoes = 5;
float prestacao(float rs){
    float prest = rs/5,total = prest;
    printf("1 prestacao: R$%.2f\n",prest);
    for (int i=2;i<=total_prestacoes;i++){
        prest *= 1.07;
        printf("%d prestacao: R$%.2f\n",i,prest);
        total += prest;
    }
    printf("\nTotal: R$%.2f",total);
}
void main(){
    int prestacoes;
    float valor;
    printf("Informe o valor que deseja financiar: \n");
    scanf("%f",&valor);
    prestacao(valor);
}