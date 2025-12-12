#include "pilhas.h"
#include <stdio.h>
Pessoa ler_pessoa(){
    Pessoa pessoa;
    printf("Digite dia mes ano e nome da pessoa\n");
    scanf("%d%d%d",&pessoa.data.dia,&pessoa.data.mes,&pessoa.data.ano);
    fgets(pessoa.nome,48,stdin);
    return pessoa;
}
void adicionar(No **topo){
    Pessoa dado = ler_pessoa();
    No *temp;
    temp = malloc(sizeof(No)*1);
    if(temp){
        temp->pessoa = dado;
        temp->proximo = *topo;
        *topo = temp;
    }
    else {
        printf("\nErro ao alocar\n");
    }
}
void remover(No **topo){
    if (*topo){
        No *remover = *topo;
        *topo = remover->proximo;
    }
    else {
        printf("\nFim, Impossivel remover\n");
    }
}
void print_top(No *topo){
    if (topo){
        printf("Topo: Nome: %s\nData: %2d/%2d/%4d\n",topo->pessoa.nome,topo->pessoa.data.dia,topo->pessoa.data.mes,topo->pessoa.data.ano);
    }
    else {
        printf("\nSem topo\n");
    }
}
void print_stack(No *topo){
    while (topo){
        printf("\nNome: %s\nData: %2d/%2d/%4d\n",topo->pessoa.nome,topo->pessoa.data.dia,topo->pessoa.data.mes,topo->pessoa.data.ano);
        topo = topo->proximo;
    }
}
