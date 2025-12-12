/*249. Escreva um programa que leia quatro números reais e verifique se eles formam, na
ordem em que foram digitados, uma progressão aritmética, uma progressão
geométrica, os dois tipos de progressão ou nenhum tipo de progressão. Esta
verificação deve ser realizada através de um subprograma.*/
#include <stdio.h>
const int TAM = 4;
int progressao(int n[]){
    int difAri = n[1] - n[0];
    int difGeo = n[1] / n[0];
    int ari = 1;
    int geo = 1;
    for (int i = 0;i < TAM-1; i++){
        if (n[i+1] - n[i] != difAri){
            ari = 0;
        }
        if (n[i+1] / n[i] != difGeo){
            geo = 0;
        }
    }
    if (ari && geo){
        return 3;
    }
    else if (ari){
        return 2;
    }
    else if(geo){
        return 1;
    }
    else {
        return 0;
    }
}
int main(){
    int n[TAM];
    for (int i=0;i < TAM; i++){
        scanf("%d",&n[i]);
    }
    int prog = progressao(n);
    if (prog == 3){
        printf("Progressao Geometrica e Aritmetica\n");
    }
    else if(prog == 2){
        printf("Progressao Aritmetica\n");
    }
    else if(prog == 1){
        printf("Progressao Geometrica\n");
    }
    else {
        printf("Nenhuma das anteriores\n");
    }
    getchar();
    return 0;
}