/*259. Escreva um subprograma recursivo que receba como entrada um valor em decimal e
imprima o seu valor correspondente em hexadecimal.
*/
#include <stdio.h>
void hexa(int n){
    char texto[16] = "0123456789ABCDEF";
    if (n == 0){
        return;
    }
    hexa(n/16);
    printf("%c",texto[n%16]);
    return;
}
int main(){
    int n;
    scanf("%d",&n);
    hexa(n);
    getchar();
    return 0;
}