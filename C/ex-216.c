/*216. Escreva um programa que leia o valor de uma distância em metros e calcule o seu  
valor correspondente em quilômetros, hectômetros, decâmetros, centímetros,  
decímetros e milímetros. O programa deve ter um subprograma para converter para  
cada unidade de medida.  */
#include <stdio.h>
float printar(float d){
    printf("\nQuilometros: %.1f\nhectrometros: %.1f\ndecametros: %.1f\ncentimetros: %.1f\ndecimetros: %.1f\nmilimetros: %.1f\n",d / 1000,d / 100,d / 10,d * 100,d * 10,d*1000);
}
void main(){
    float distancia;
    printf("Informe a distancia\n");
    scanf("%f",&distancia);
    printar(distancia);
}