/*255. Escreva um subprograma recursivo que receba como entrada o termo inicial e a razão
de uma progressão aritmética e um número inteiro positivo N e calcule o enésimo
termo da progressão.
*/
#include <stdio.h>
int progressao(int in, int ra, int n){ 
    int soma;
    if (n == 1){
        return in + ra;
    }
    soma = progressao(in,ra,n-1);
    return soma + ra;
}
int main(){
    int in,ra,n;
    scanf("%d%d%d",&in,&ra,&n);
    int enesimo = progressao(in,ra,n);
    printf("\n%d",enesimo);
    getchar();
    return 0;
}