/*251. Escreva um subprograma recursivo que receba como entrada um número inteiro não
negativo e calcule o seu fatorial.
*/
#include <stdio.h>
int recursivo(int n){
    int resultado;
    if (n <= 1){
        resultado = 1;
        return resultado * n;
    }
    else {
        resultado = recursivo(n-1);
    }
    return resultado * n;

}
int main(){
    int n;
    scanf("%d",&n);
    int resultado = recursivo(n);
    printf("\n%d",resultado);
    getchar();
    return 0;
}