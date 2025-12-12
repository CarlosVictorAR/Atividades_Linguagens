/*263. Escreva um subprograma recursivo que receba como entrada dois números inteiros x
e y e calcule o resto da divisão de x por y. Para isso, não deve ser usada a função
mod.
*/
#include <stdio.h>
int resto(int x,int y,int temp){
    if (x < y){
        return x;
    }
    int resultado = resto(x-temp,y,temp);
    return resultado;
}
int main(){
    int x,y;
    scanf("%d%d",&x,&y);
    int temp = y;
    int resultado = resto(x,y,temp);
    printf("%d",resultado);
    getchar();
    return 0;



}