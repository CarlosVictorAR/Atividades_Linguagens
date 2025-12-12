/*. Escreva um subprograma recursivo que receba como entrada um número inteiro e
calcule a sua quantidade de algarismos.
*/
#include <stdio.h>
int contador (int n){
    int quantidade;
    if (n / 10 == 0){
        return 1;
    }
    quantidade = contador(n/10);
    return quantidade + 1;
}
int main(){
    int n;
    scanf("%d",&n);
    int quantidade = contador(n);
    printf("%d",quantidade);
    getchar();
    return 0;
}