#include <stdio.h>
int valor(int n){
    int o;
    if (n == 1){
        printf(" %d %d ",n,o);
        o = 1;
        return o+n;
    }
    o = valor(n-1);
    printf(" %d-%d ",n,o);
    return o+n;

}
int main(){
    int n;
    scanf("%d",&n);
    int j = valor(n);
    return 0;
}