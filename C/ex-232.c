/*232. Escreva um programa que leia três números distintos e identifique o número que não  
é nem o menor e nem o maior número. Esta verificação deve ser realizada através de  
um subprograma. */
#include <stdio.h>
const int TAM = 3;
int meio(int a[],int b){
    int maior = a[0],menor = a[0];
    for (int i=0;i<b;i++){
        if (a[i] > maior){
            maior = a[i];
        }
        else {
            if (a[i] < menor){
                menor = a[i];
            }
        }
    }
    for (int i=0;i<b;i++){
        if (a[i] != maior && a[i] != menor){
            printf("Meio: %d\n",a[i]);
        }
    }
}
void main (){
    int n[TAM];
    for (int i = 0;i<TAM;i++){
        printf("Informe o valor %d\n",i+1);
        scanf("%d",&n[i]);
    }
    meio(n,TAM);
}