#include <stdio.h>
#include <stdlib.h>
int fatorial(int valor,int total,int num){
    if (num <= valor){
        total = total * num++;
        total = fatorial(valor,total,num);
    }
    return total;
    

}
int main(){
    int valor,total=1,num=1;
    printf("Informe o valor do fatorial a descobrir: \n");
    scanf("%d",&valor);
    int resposta = fatorial(valor,total,num);
    printf("Fatorial: %d",resposta);
    return 0;
}