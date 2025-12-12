#include <stdio.h>
#include <stdlib.h>
int n;
int *vetor;
int main(){
    printf("Informe o tamanho do vetor:\n");
    scanf("%d",&n);
    int *point = &vetor;
    point = malloc(sizeof(int) * n);
    for (int i = 0 ; i < n ; i++){
        int n;
        scanf("%d",&n);
        vetor[i] = n;
    }
    printf("VETOR:\n");
    for (int i = 0 ; i < n ; i++){
        printf("%d ",&(vetor + i));
    }
    getchar();
}