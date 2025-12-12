#include <stdio.h>
#include <stdlib.h>
typedef struct no{
    int resultado;
    int valor;
    struct no *proximo;
}No;

void empilhar(No **topo,int *num){
    No *temp = malloc(sizeof(No));

    if (temp){
        temp->valor = (*num)++;
        temp->proximo = *topo;
        *topo = temp;
    }
    else {
        printf("Erro ao alocar memoria");
    }
}
void desempilhar(No **topo){
    (*topo)->resultado = (*topo)->resultado * (*topo)->valor; 
    No *temp = *topo;
    *topo = (*topo)->proximo;
    if(*topo){
        (*topo)->resultado = temp->resultado;
    }
    free(temp);
}

int main (){
    No *topo = NULL;
    int valor, num = 1;
    printf("Informe o valor que deseja fatorial: \n");
    scanf("%d",&valor);
    while (num <= valor){
        empilhar(&topo,&num);
    }
    topo->resultado = 1;
    while (topo ->proximo != NULL){
        desempilhar(&topo);
    }
    printf("Fatorial: %d",topo->resultado);
    free(topo);
    return 0;
}