/*220. Escreva um programa que leia o peso e a altura de uma pessoa e determine o seu  
índice de massa corporal, que deve ser calculado através de um subprograma. */
#include <stdio.h>
#include <math.h>
float imc(float p,float a){
    float imc = p / pow(a,2);
    printf("IMC: %.1f",imc);
}
void main(){
    float peso,altura;
    printf("Informe o peso e altura de uma pessoa: \n");
    scanf("%f%f",&peso,&altura);
    imc(peso,altura);
}