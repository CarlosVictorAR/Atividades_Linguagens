/*234. Escreva um programa que leia as coordenadas x e y de dez pontos e verifique a qual  
quadrante cada ponto pertence. Você pode supor que cada ponto digitado pelo  
usuário pertence a apenas um quadrante. */
#include <stdio.h>
int quadrantes(int a[],int b[], int c){
    for (int i=0;i<c;i++){
        if (a[i] == 0 || b[i] == 0){
            printf("x%d e y%d nao pertencem a nenhum quadrante\n",i+1,i+1);
        }
        else if (a[i] > 0 && b[i] > 0){
            printf("x%d e y%d pertencem ao 1 quadrante\n",i+1,i+1);
        }
        else if (a[i] < 0 && b[i] > 0){
            printf("x%d e y%d pertencem ao 2 quadrante\n",i+1,i+1);
        }
        else if (a[i] < 0 && b[i] < 0){
            printf("x%d e y%d pertencem ao 3 quadrante\n",i+1,i+1);
        }
        else{
            printf("x%d e y%d pertencem ao 4 quadrante\n",i+1,i+1);
        }
    }
}
const int TAM = 10;
void main(){
    int x[TAM],y[TAM];
    for (int i = 0;i<TAM;i++){
        printf("Informe o x%d e y%d:\n",i+1,i+1);
        scanf("%d%d",&x[i],&y[i]);
    }
    quadrantes(x,y,TAM);
}