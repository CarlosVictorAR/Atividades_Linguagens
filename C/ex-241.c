/*241. Escreva um programa que leia o peso e a altura de uma pessoa e verifique se ela está  
dentro da faixa de peso adequada, ou se está abaixo ou acima do peso. Caso a  
pessoa esteja fora do peso adequado o programa deve informar quantos Kg ela deve  
ganhar ou perder para ficar dentro da faixa adequada. Para resolver este programa,  
considere que o IMC ideal para uma pessoa deve estar entre 18 e 25. O programa  
deve ter um subprograma para calcular o IMC, um subprograma para verificar a  
situação da pessoa, um subprograma para calcular quantos quilos ela precisa perder  
e um subprograma para calcular quantos quilos ela precisa ganhar.   */
#include <stdio.h>
#include <math.h>
int situ(int IMC){
    if (IMC > 25){
        return 1;
    }
    else if (IMC < 18){
         return -1;
    }
    else {
        return 0;
    }
}
int imc(float peso, float altura){
    int IMC = peso / (altura * altura);
    int teste = situ(IMC);
    if (teste == 1){
        return 1;
    }
    else if(teste == -1){
        return -1;
    }
    else {
        return 0;
    }
}
float perder(float peso, float altura){
    return peso - (25 * (altura * altura));
}
float ganhar(float peso, float altura){
    return (18 * (altura * altura)) - peso;
}
int main (){
    float peso,altura;
    scanf("%f%f",&peso,&altura);
    int situ = imc(peso,altura);
    if (situ == 1){
        printf("Precisa perder %f\n",perder(peso,altura));
    }
    else if (situ == -1){
        printf("Precisa ganhar %f\n",ganhar(peso,altura));

    }
    else {
        printf("Peso Ideal");
    }
}