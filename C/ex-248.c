/*248. Escreva um programa que leia um valor real a ser sacado pelo usuário e identifique
quantas cédulas de cada tipo devem ser usadas para que o saque seja efetuado. Você
pode supor que o caixa tem cédulas de R$ 10,00, R$ 20,00, R$ 50,00 e R$ 100,00. O
valor máximo de um saque é R$ 1000,00 e, para cada saque, deve ser dada
prioridade para as células maiores. A verificação deve ser realizada através de um
subprograma.*/
#include <stdio.h>
void saque(int *num10, int *num20, int *num50, int *num100,int valor){
    *num100 = valor / 100;
    *num50 = (valor % 100) / 50;
    *num20 = (valor % 50) / 20;
    *num10 = ((valor % 50 )% 20) / 10;
}
int main(){
    int num10=0,num20=0,num50=0,num100=0,valor;
    scanf("%d",&valor);
    saque(&num10,&num20,&num50,&num100,valor);
    printf("%d notas de 10\n%d notas de 20\n%d notas de 50\n%d notas de 100",num10,num20,num50,num100);
    getchar();
    return 0;

}
