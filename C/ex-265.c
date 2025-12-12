/*265. Escreva um subprograma recursivo que receba como entrada um número inteiro N
positivo e calcule o enésimo termo da série de Fibonacci.*/
#include <stdio.h>
int fib(int primeiro, int segundo,int n){
    if (n <= 1){
        return primeiro;
    }
    int resu = fib(primeiro+segundo,primeiro,n-1);
    return resu;
}
int main (){
    int n;
    scanf("%d",&n);
    int primeiro=1, segundo=1;
    int resu = fib(primeiro,segundo,n-1);
    printf("\n%d",resu);
    getchar();
    return 0;
}