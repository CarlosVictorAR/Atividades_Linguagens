#include <stdio.h>
int main(){
    int N,K,U;
    scanf("%d",&N);//numero de cartelas
    scanf("%d",&K);//quantidade de numeros de cada cartela
    scanf("%d",&U);//quantos numeros vao ser sorteados, nao podem ser maior que U
    int cartelas[N][K],k=0;
    int pos[U+1],melhor=U+1,vetor[N];
    for (int i = 0;i<N;i++){
        for (int j=0;j<K;j++){
            scanf("%d",&cartelas[i][j]);
        }
    }
    for (int i = 0, x;i<U;i++){
        scanf("%d",&x);
        pos[x]=i;
    }
    for (int i=0;i<N;i++){
        int tempo = 0;
        for(int j=0;j<K;j++){
            if (tempo < pos[cartelas[i][j]]){
                tempo = pos[cartelas[i][j]];
            }
            if(tempo > melhor){
                break;
            }
        }
        if (tempo < melhor){
            k = 0;
            vetor[k++] = i + 1;
            melhor = tempo;
        }
        else if (tempo == melhor){
            vetor[k++] = i + 1; 
        }
    }
    for (int i = 0;i<k;i++){
        printf(" %d",vetor[i]);
    }
}