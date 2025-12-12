/*Escreva um subprograma recursivo que receba como entrada um número inteiro N
positivo e provoque um salto de N linhas na tela do usuário.
*/
#include <stdio.h>
void linhas(int n){
    if (n == 0){
        return;
    }
    linhas(n-1);
    printf("\n");
    return;
}
int main(){
    int n;
    printf("Informe: \n");
    scanf("%d",&n);
    linhas(n);
    printf("Parada");

}