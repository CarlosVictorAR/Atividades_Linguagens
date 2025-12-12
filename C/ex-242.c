#include <stdio.h>
/*242. Escreva um programa que leia dois operandos inteiros e um operador (+, -, *, /) e
aplique o operador lido aos dois operandos, na ordem em que os mesmos foram
digitados. Esta verificação deve ser realizada através de um subprograma.
*/
float operation(int n1, int n2, char op){
    if (op == '*'){
        return n1 * n2;
    }
    else if (op == '/'){
        return n1 / n2;
    }
    else if (op == '+'){
        return n1 + n2;
    }
    else {
        return n1 - n2;
    }
}
int main(){
    int n1, n2;
    char op;
    printf("Informe os dois valores e o operador(*,/,+,-):\n");
    scanf("%d%d",&n1,&n2);
    getchar();
    op = getchar();
    printf("Resultado: %f\n",operation(n1,n2,op));

}