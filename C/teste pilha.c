#include <stdio.h>
#include <stdlib.h>
#include "pilhas.h"
#include "pilhas.c"
int main(){
    No *topo = NULL;
    int parada = 0,resposta;
    do {
        printf("\n[1] Adicionar pilha\n[2] Remover pilha\n[3] Imprimir topo\n[4] Imprimir pilha\n[5] Parar\n");
        scanf("%d",&resposta);
        switch (resposta){
            case 1:
                adicionar(&topo);
                break;
            case 2:
                remover(&topo);
                break;
            case 3:
                print_top(topo);
                break;
            case 4:
                print_stack(topo);
                break;
            default:
                parada = 1;
        }

    } while (!parada);
    printf("\nFim");

}
