#include <stdio.h>

int l,c,tam;
void adicionarElemento(int *matriz, int valor, int linha, int coluna){
    matriz[((linha - 1) * c) + (coluna - 1)] = valor;
}
void zerarMatriz(int *matriz){
    for (int i = 1; i <= l; i++){
        for (int j = 1; j <= c; j++){
            adicionarElemento(matriz, 0, i, j);
        }
    }
}
int buscarElemento(int *matriz, int linha, int coluna){
    return matriz[((linha - 1) * c) + (coluna - 1)];
}
void imprimirMatriz(int *matriz){
    for (int i = 1; i <= l; i++){
        for (int j = 1; j <= c; j++){
            printf("%d ", buscarElemento(matriz, i, j));
        }
        printf("\n");
    }
    printf("\n");
}
void dimensionar(int linha, int coluna){
    l = linha;
    c = coluna;
    tam = l * c;
}
void somaMatriz(int *matriz, int *matriz2, int *matriz3){
    for (int i = 1; i <= l; i++){
        for (int j = 1; j <= c; j++){
            int valor1 = buscarElemento(matriz, i, j);
            int valor2 = buscarElemento(matriz2, i, j);
            int total = valor1 + valor2;
            adicionarElemento(matriz3, total, i, j);
        }
    }
}
int main (){
    //Dimensiona a matriz
    dimensionar(3,3);
    
    //Criei a matriz
    int vet[tam];
    int vet2[tam];
    int vet3[tam];

    //Zera as matrizes
    zerarMatriz(vet);
    zerarMatriz(vet2);
    zerarMatriz(vet3);

    //Imprime as matrizes
    printf("Matriz 1 Zerada:\n");
    imprimirMatriz(vet);
    printf("Matriz 2 Zerada:\n");
    imprimirMatriz(vet2);


    //Adiciona elementos na matriz
    adicionarElemento(vet, 5, 1, 1);
    adicionarElemento(vet, 10, 2, 2);
    adicionarElemento(vet, 15, 3, 3);
    adicionarElemento(vet2, 2, 1, 1);
    adicionarElemento(vet2, 4, 2, 2);
    adicionarElemento(vet2, 6, 3, 3);

    //Imprime a matriz
    printf("Matriz 1:\n");
    imprimirMatriz(vet);
    printf("Matriz 2:\n");
    imprimirMatriz(vet2);

    //Soma as matrizes
    somaMatriz(vet, vet2, vet3);

    //Imprime a matriz resultante
    printf("Matriz Resultante da Soma:\n");
    imprimirMatriz(vet3);



    

}