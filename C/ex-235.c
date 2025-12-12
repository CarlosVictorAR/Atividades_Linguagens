/*235. Escreva um programa que leia as coordenadas x e y de um ponto e verifique se este  
ponto pertence à reta y = 2x +1. Esta verificação deve ser realizada através de um  
subprograma.  */
#include <stdio.h>
int verificar(int a,int b){
    if (b == 2 * a + 1){
        printf("Pertence\n");
    }
    else {
        printf("Nao pertence\n");
    }
}
void main (){
    int x,y;
    printf("Informe x e y: \n");
    scanf("%d%d",&x,&y);
    verificar(x,y);
}