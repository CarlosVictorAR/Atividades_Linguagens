/*262. Escreva um subprograma recursivo que receba como entrada dois números inteiros x
e y e calcule o quociente (a parte inteira) da divisão de x por y. Para isso, não deve ser
usada a função div.*/
#include <stdio.h>
int quociente(int x,int y,int temp){
    if (y > x){
        return 0;
    }
    int contagem = quociente(x,y+temp,temp);
    return contagem + 1;
}
int main(){
    int x,y;
    scanf("%d%d",&x,&y);
    int temp = y;
    int resultado = quociente(x,y,temp);
    printf("%d",resultado);
    getchar();
    return 0;
}