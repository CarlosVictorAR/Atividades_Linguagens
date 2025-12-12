/*250. Escreva um programa que leia cinco números inteiros e determine o segundo maior
número digitado pelo usuário e a ordem em que o mesmo foi digitado. Esta
verificação deve ser realizada através de um subprograma.*/
#include <stdio.h>
const int TAM = 5;
const int repeticoesMAX = 2;
typedef struct{
    int valor;
    int pos;
}Val;
void segundo(Val n[]){
    Val aux[TAM];
    Val maior;
    Val menor;
    int repeticoes = 1;
    do{
        maior.valor = n[0].valor;
        maior.pos = n[0].pos;
        menor.valor = n[0].valor;
        menor.pos = n[0].pos;
        for (int i = 0; i < TAM; i++){
            aux[i].valor = n[i].valor;
            aux[i].pos = n[i].valor;
            if (n[i].valor > maior.valor){
                maior.valor = n[i].valor;
                maior.pos = n[i].pos;
            }
            if (n[i].valor < menor.valor){
                menor.valor = n[i].valor;
                menor.pos = n[i].pos;
            }
        }
    n[maior.pos].valor=aux[menor.pos].valor;
    repeticoes++;
    }while (repeticoes <= repeticoesMAX);
    printf("%d maior: %d",repeticoesMAX,maior.valor);
    
}
int main(){
    Val n[TAM];
    for (int i = 0;i < TAM; i++){
        scanf("%d",&n[i].valor);
        n[i].pos = i;
    }
    segundo(n);
    getchar();

}