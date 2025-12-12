/*215. O carro de João consegue percorrer em média 14 km consumindo 1 litro de  
combustível. Escreva um programa que leia o valor da distância que João vai  
percorrer durante uma viagem e o preço atual de um litro de combustível e calcule  
quanto ele deverá gastar com combustível durante a viagem. O cálculo deve ser  
realizado através de um subprograma.*/
#include <stdio.h>
float preco(float km,float rs){
    return ((float)km/14) * rs;
}
void main(){
    float distancia,preco_litro;
    printf("Informe a distancia que joao ira viajar: \n");
    scanf("%f",&distancia);
    printf("Informe o preco atual de um litro de combustivel: \n");
    scanf("%f",&preco_litro);
    printf("Valor gasto: R$%.2f\n",preco(distancia,preco_litro));
    getchar();
}