/*225. Escreva um programa que leia dois números inteiros M e N e verifique se N é  múltiplo 
de M. Esta verificação deve ser realizada através de um subprograma.*/
#include <stdio.h>
multiplo(m1,n1){
    if (m1 % n1 == 0){
        printf("\n%d eh multiplo de %d\n",n1,m1);
    }
    else {
        printf("\n%d nao eh multiplo de %d",n1,m1);
    }
}
void main (){
int m,n;
printf("Informe dois numeros: \n");
scanf("%d%d",&m,&n);
multiplo(m,n);
getchar();
}
