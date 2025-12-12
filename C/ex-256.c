/*256. Escreva um subprograma recursivo que receba como entrada uma matriz quadrada
de ordem 5 de números reais e um número inteiro N (entre 1 e 5) e imprima os N
primeiros números da diagonal principal.
*/
#include <stdio.h>
const int TAM = 5;
void printar(int matriz[][TAM],int n){
    if (n == 0){
        printf("%d ",matriz[n][n]);
        return;
    }
    printar(matriz,n-1);
    printf("%d ",matriz[n][n]);
    return;
}
int main(){
    int matriz[TAM][TAM],n;
    for (int i = 0 ; i < TAM; i++){
        for (int j = 0; j < TAM; j++){
            scanf("%d",&matriz[i][j]);
        }
    }
    for (int i = 0 ; i < TAM; i++){
        for (int j = 0; j < TAM; j++){
            printf("%d ",matriz[i][j]);
        }
        printf("\n");
    }
    printf("Informe a quantidade de termos que deseja imprimir(1 a 5):\n");
    scanf("%d",&n);
    printar(matriz,n-1);

}