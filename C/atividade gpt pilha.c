#include <stdio.h>
#include <stdlib.h>
    typedef struct no{
        int num;
        struct no *proximo;
    }No;
    No* push(No *topo,int valor){
        printf("\nNumero adicionado: %d\n",valor);
        No *novo;
        novo = malloc(sizeof(No));
        if (novo){
        novo->num = valor;
        novo ->proximo = topo;
        return novo;
        }
        else{
            printf("\nErro ao alocar novo\n");
            return NULL;
        }
    }
    void mostrar_pilha(No *topo){
        do {
            printf("%d ",topo->num);
            topo = topo->proximo;
        } while (topo != NULL);
    }
    No* pop(No **topo){
        No *proxima = *topo;
        *topo = proxima->proximo;
        return proxima;
    }

    int main (){
        No *topo = NULL,*proxima;
        int opcao,parar=0,valor;
        int contador = 0;
        do{
            printf("\n=== Menu da Pilha ===\n1. Inserir numero\n2. Remover numero\n3. Mostrar topo\n4. Mostrar pilha\n5. Sair\n");
            scanf("%d",&opcao);
            switch(opcao){
                case 1:
                    if (contador == 100){
                        printf("\nOverflow\n");
                    }
                    else {
                        printf("\nInforme o valor que deseja adicionar: \n");
                        scanf("%d",&valor);
                        contador++;
                        topo = push(topo,valor);
                    }
                break;
                case 2:
                if (topo){
                    printf("\nNumero removido: %d\n",topo->num);
                    proxima = pop(&topo);
                    free(proxima);
                }
                else {
                    printf("Pilha vazia");
                }
                    break;
                case 3:
                    if (topo){
                        printf("\nTopo: %d\n",topo->num);
                    }
                    else {
                        printf("\nPilha vazia\n");
                    }
                break;
                case 4:
                    if (topo){
                        mostrar_pilha(topo);
                    }
                    else {
                        printf("\nPilha vazia\n");
                    }
                break;
                default:
                if (opcao != 5){
                    printf("\nInvalido\n");
                }
                else {
                    parar = 1;
                }
            }
        }while (!parar);
    }