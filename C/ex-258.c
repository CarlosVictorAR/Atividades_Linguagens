/*258. Escreva um subprograma recursivo que receba como entrada um valor em decimal e
imprima o seu valor correspondente em binário.*/
#include <stdio.h>
void binario(int n){
    if (n == 1){
        printf("1");
        return;
    }
    binario(n/2);
    if (n % 2 == 0){
        printf("0");
    }
    else {
        printf("1");
    }
    return;

}
int main(){
    int n;
    scanf("%d",&n);
    binario(n);
    getchar();
    return 0;
}