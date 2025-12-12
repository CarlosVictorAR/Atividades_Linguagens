/*217. Escreva um programa que leia um número positivo entre 1 e 9999 e calcule o valor  da 
unidade de milhar, da centena, da dezena e da unidade. O programa deve ter  
subprogramas para calcular cada informação solicitada.  */
#include <stdio.h>
int printar(int n){
    printf("Milhar: %d\nCentena: %d\nDezena: %d\nUnidade: %d\n",n / 1000,(n % 1000)/100,(n % 100) / 10,n % 10);
}
int valor;
void main(){
    printf("Informe o numero entre 1 e 9999: \n");
    scanf("%d",&valor);
    printar(valor);
    getchar();
}

