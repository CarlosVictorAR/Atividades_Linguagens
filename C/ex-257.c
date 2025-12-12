/*257. Escreva um subprograma recursivo que receba como entrada dois números inteiros
correspondentes aos valores da base e do expoente e calcule o valor da potenciação.
Você pode supor que o expoente é um valor não negativo e que o caso 0
0 é tratado
no programa principal (ou seja, não precisa ser tratado dentro do subprograma).
*/
#include <stdio.h>
int expoente(int b, int e){
    int resultado;
    if (e == 1){
        return b;
    }
    resultado = expoente(b,e-1);
    return resultado * b;
}
int main(){
    int b,e,resultado;
    scanf("%d%d",&b,&e);
    if (e == 0){
        printf("\n1");
    }
    else {
        resultado = expoente(b,e);
    }
    printf("\n%d",resultado);
    getchar();
    return 0;

}