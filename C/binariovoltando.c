#include <stdio.h>
void teste(int num){
    if (num == 1){
        printf("1");
        return;
    }
    teste(num/2);
    if (num % 2){
        printf("1");
    }
    else{
        printf("0");
    }
    return;
}
int main(){
    int num;
    scanf("%d",&num);
    teste(num);
}