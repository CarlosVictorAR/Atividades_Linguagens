#include <stdio.h>
#include <math.h>
const int TAM = 2;
float distancia(float a[],float b[]){
    float somaa=0;
    float somab=0;
    for (int i = 0;i<TAM;i++){
        somaa+=a[i];
        somab+=b[i];
    }
    return sqrt(pow(somaa,2)+pow(somab,2));
}
void main(){
    float x[TAM],y[TAM];
    for (int i=0;i<TAM;i++){
        printf("Informe o valor x%d\n",i+1);
        scanf("%f",&x[i]);
        printf("Informe o valor de y%d\n",i+1);
        scanf("%f",&y[i]);
    }
    printf("\nDistancia: %.2f",distancia(x,y));

}