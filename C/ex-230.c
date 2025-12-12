/*230. Escreva um programa que leia três números inteiros distintos e identifique o maior  
número lido. Esta verificação deve ser realizada através de um subprograma. */
#include <stdio.h>
int maior(a,b,c){
    int maior = a;
    if (b > maior){
        maior = b;
    }
    if (c > maior){
        maior = c;
    }
    printf("Maior: %d\n",maior);
}
void main(){
    int n1,n2,n3;
    printf("Informe tres valores: \n");
    scanf("%d%d%d",&n1,&n2,&n3);
    maior(n1,n2,n3);
}