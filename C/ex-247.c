/*247. Escreva um programa em que leia um número inteiro entre 1000 e 9999 e verifique se
o número lido é ou não um palíndromo. Esta verificação deve ser realizada através de
um subprograma.
*/
#include <stdio.h>
int palindromo(int n){
    if (((int)(n / 1000) == (int)(n % 10)) && ((int)(n % 1000 / 100) == (int)((n % 100) / 10))){
        return 1;
    }
    else {
        return 0;
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int palin = palindromo(n);
    if (palin){
        printf("\nPalindromo\n");
    }
    else{
        printf("\nNao eh palindromo\n");
    }
    getchar();
    return 0;
}