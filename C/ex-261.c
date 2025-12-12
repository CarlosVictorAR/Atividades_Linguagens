/*261. Escreva um subprograma recursivo que receba como entrada um número inteiro e
calcule a soma de todos os seus algarismos.
*/
#include <stdio.h>
int soma(int n){
    int somar = n % 10;
    if (n == 0){
        return 0;
    }
    int resultado = soma(n / 10);
    return somar + resultado;
}
int main(){
    int n;
    scanf("%d",&n);
    int resultado = soma(n);
    printf("%d \n",resultado);
    getchar();
    return 0;
}