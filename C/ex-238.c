/*238. Escreva um programa que leia os valores das coordenadas x e y do centro de uma  
circunferência e o valor do seu raio e, a seguir, leia as coordenadas x e y de dez  
pontos e verifique se cada ponto está ou não localizado dentro da circunferência. O  
programa deve ter um subprograma para calcular a distância e outro para  determinar 
se um ponto está dentro ou fora da circunferência.  */
#include <stdio.h>
#include <math.h>
const int TAM = 10;
void dentroFora(float d,float circ){
    if (d < circ){
        printf("Dentro\n");
    }
    else if (d > circ){
        printf("Fora\n");
    }
    else {
        printf("Sob a circunferencia\n");
    }
}
void distancia(float a[],float b[],int c,float r,float centrox,float centroy){
    for (int i=0;i<c;i++){
        float dist = sqrt(pow(a[i]-centrox,2) + pow(b[i]-centroy,2));
        dentroFora(dist,r);
    }
}
void main(){
    float x[TAM],y[TAM],raio,xc,yc;
    printf("Informe o valor do raio da circunferencia: \n");
    scanf("%f",&raio);
    printf("Informe o valor x e y do centro da circunferencia: \n");
    scanf("%f%f",&xc,&yc);
    for (int i = 0;i < TAM;i++){
        printf("Informe o valor de x%d e y%d: \n",i+1,i+1);
        scanf("%f%f",&x[i],&y[i]);
    }
    distancia(x,y,TAM,raio,xc,yc);
}