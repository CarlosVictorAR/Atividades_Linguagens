/*245. Escreva um programa que leia um número inteiro entre 1 e 12 correspondente a um
mês do ano e verifique o trimestre a que este mês pertence. Esta verificação deve ser
realizada através de um subprograma.
*/
#include <stdio.h>
int trimestre(int n){
        return ((n-1) / 3)+1;
}


int main(){
    int n;
    scanf("%d",&n);
    int tri = trimestre(n);
    printf("\n%do trimestre\n",tri);
    getchar();
    return 0;
}