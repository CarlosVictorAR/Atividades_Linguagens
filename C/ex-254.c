/**254. Escreva um subprograma recursivo que receba como entrada dois números inteiros x
e y e calcule o valor do produto de x por y.
 */
#include <stdio.h>
int produto(int m, int n){
    int resultado;
    if (n == 1){
        return m;
    }
    resultado = produto(m,n-1);
    return resultado + m;

}
int main(){
    int m,n;
    scanf("%d%d",&m,&n);
    int resultado = produto(m,n);
    printf("Resultado: %d",resultado);
    getchar();
    return 0;

}