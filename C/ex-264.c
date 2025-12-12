/*264. Escreva um subprograma recursivo em pascal que receba como parâmetro de entrada
três números inteiros positivos e calcule o MMC destes três números. Para isto, você
deve usar a função chamada menorDivisor, mostrada abaixo, que recebe como
entrada três números inteiros positivos e calcula qual o menor número inteiro maior
ou igual a 2 que divide pelo menos um dos três números recebidos.*/
#include <stdio.h>
int menorDivisor(int x,int y,int z){
    int contador = 2;
    while (x % contador != 0 && y % contador != 0 && z % contador != 0){
        contador++;
    }
    return contador;
}
int MMC(int x, int y, int z){
    int mmc;
    if (x==1 && y == 1 && z == 1){
        return 1;
    }
    int menor = menorDivisor(x,y,z);

    if (x % menor == 0 && y % menor == 0 && z % menor == 0){
        mmc = MMC (x/menor,y/menor,z/menor);
    }
    else if(x % menor == 0 && y % menor == 0){
        mmc = MMC (x/menor,y/menor,z);
    }
    else if (x % menor == 0 && z % menor == 0){
        mmc = MMC (x/menor,y,z/menor);
    }
    else if (y % menor == 0 && z % menor == 0){
        mmc = MMC (x,y/menor,z/menor);
    }
    else if (x % menor == 0){
        mmc = MMC (x/menor,y,z);
    }
    else if(y % menor == 0){
        mmc = MMC (x,y/menor,z);
    }
    else {
        mmc = MMC (x,y,z/menor);
    }
    return mmc * menor;

}
int main(){
    int x,y,z;
    scanf("%d%d%d",&x,&y,&z);
    int mmc = MMC(x,y,z);
    printf("%d",mmc);
    getchar();
    return 0;
}