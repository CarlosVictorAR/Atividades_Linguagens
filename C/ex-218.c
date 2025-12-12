/*218. Escreva um programa que leia um valor em segundos e converta para a forma X  horas 
Y minutos e Z segundos. Por exemplo, o valor 3670 equivale a 1 hora 1 minutos  
e 10 segundos. O programa deve ter: um subprograma para calcular o valor das  
horas, um subprograma para calcular o valor dos , um subprograma para calcular o  
valor dos segundos e um subprograma para imprimir o resultado final.*/
#include <stdio.h>
int printar(int t){
    printf("%d horas, %d minutos e %d segundos",t / 3600, (t % 3600) / 60, t % 60);
}
void main(){
    int valor;   
    printf("Informe o valor: \n");
    scanf("%d",&valor);
    printar(valor);
}