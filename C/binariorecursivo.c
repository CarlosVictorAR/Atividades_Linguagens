#include <stdio.h>
#include <math.h>
long long teste(int num){
    long long valor;
    if (num == 1){
        return 1;
    }
    valor = teste(num/2);
    if (num % 2){
        int c = log10(valor);
        int n = valor / pow(10,c);
        if (n > 1){
            valor -= n * pow(10,c);
            valor = valor + pow(10,n);
        }
        else {
            valor += pow(10,c+1);
        }
    }
    else {
        valor += pow(10,(int)log10(valor));
    }
    return valor;

}
int main(){
    int num;
    scanf("%d",&num);
    long long test = teste(num);
    int n = test / pow(10,(int)log10(test));
    if (n > 1){
        test -= n * pow(10,(int)log10(test));
        printf("%ld",test);
        for (int i=0; i < n; i++){
            printf("0");
        }
    }
    else {
        if (num % 2){
            printf("%ld\n",test);
        }
        else {
            printf("%ld\n",test);
        }
    }

}