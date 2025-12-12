#include <stdio.h>
#include <stdlib.h>
typedef struct no{
    int num;
    struct no *proximo;
}No;
void printar(No *topo){
    printf("%d ",topo->num);
}
void desempilhar(No *topo){
    do {
        printar(topo);
        topo = topo->proximo;
    } while (topo != NULL);
}
No* push(No *topo, int number){
    No *novo;
    if (novo){
    novo = malloc(sizeof(No));
    novo->num = number; 
    novo->proximo = topo;
    return novo;
    }
    else{
        printf("\nErro ao alocar\n");
        return NULL;
    }
}
int main(){
No *topo = NULL;
int numero;
  do {
    printf("Informe um numero: ");
    scanf("%d",&numero);
    topo = push(topo,numero);
  } while (topo->num != 0);
  topo = topo->proximo;
  desempilhar(topo); 
}