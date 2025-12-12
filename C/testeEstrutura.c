#include <stdio.h>

int l,c,tam;
typedef struct{
	int cidade;
	int entradas;
}Maior;
//struct para guarda qual cidade tem mais entradas
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
void transporMatriz(int *matriz, int *matriz2){
	for (int i = 1; i <= l; i++){
		for (int j = 1; j <= c; j++){
			adicionarElemento(matriz,buscarElemento(matriz2, j, i),i,j);
		}
	}
}
//faz a multiplicação e soma da linha por linha(coluna transposta)
int somarLinha(int *matriz1,int *matriz2, int linha, int linha2){
	int somaTotal = 0;
	for (int j = 1; j <= c; j++){
		somaTotal += buscarElemento(matriz1, linha, j) * buscarElemento(matriz2, linha2, j);
	}
	return somaTotal;
}
//faz soma da linhas para fazer a multiplicação
void produtoMatriz(int *matriz, int *matriz2, int *matriz3){
	int temp[tam];
	//tranpor matriz para facilitar o calculo
	transporMatriz(temp,matriz2);
	for (int i = 1; i <= l; i++){
		for (int j = 1; j <= c; j++){
		 	adicionarElemento(matriz3, somarLinha(matriz,temp,i,j),i,j);
		}
	}
} 
int descobrirCidades(int *matriz, int cidade){
	for (int i = 1; i <= l; i++){
		if (buscarElemento(matriz,i,cidade) && i != cidade){
			return 0;
		}
	}
	for (int j = 1; j <= c; j++){
		if (buscarElemento(matriz,cidade,j) && j != cidade){
			return 0;
		}
	}
	return 1;
}
//Descobre qual cidades são isoladas
void cidadeIsolada (int *matriz){
	printf("\nIsoladas:");
	for (int i = 1; i <= l; i++){
		if(descobrirCidades(matriz,i)){
			printf("%d ",i-1);
		}
	}
}
//testa se tem saida e entrada
int testarSaidas(int *matriz, int i){
	for (int j = 1; j <= c; j++){
		if (buscarElemento(matriz,i,j) && i != j){
			return 1;
		}
	}
	return 0;
}
int testarEntradas(int *matriz, int i){
	for (int j = 1; j <= c; j++){
		if (buscarElemento(matriz,j,i) && i != j){
			return 1;
		}
	}
	return 0;
}
//descobre qual tem só saida e só entrada
void apenasEntrada(int *matriz){
	printf("\nApenas entradas: ");
	for (int i = 1; i <= c; i++){
		if (!testarSaidas(matriz,i) && testarEntradas(matriz,i)){
			printf("%d ", i-1);
		}
	}
}
void apenasSaida(int *matriz){
	printf("\nApenas saida: ");
	for (int i = 1; i <= c; i++){
		if (testarSaidas(matriz,i) && !testarEntradas(matriz,i)){
			printf("%d ", i-1);
		}
	}
}
//descobre quantas Entradas tem
int totalDeEntradas(int *matriz, int i){
	int total = 0;
	for (int j = 1; j <= c; j++){
		if (buscarElemento(matriz,j,i) && i != j){
			total++;
		}
	}
	return total;
}
void maiorNumeroDeEstradas(int *matriz){
	Maior Cidade;
	Cidade.cidade = 1;
	Cidade.entradas = totalDeEntradas(matriz,1);
	printf("\nQual das cidades chega o maior numero de estradas?:");
	for (int i = 2; i <= c; i++){
		int total = totalDeEntradas(matriz,i);
		if (total > Cidade.entradas){
			Cidade.cidade = i;
			Cidade.entradas = total;
		}
	}
	printf(" %d\n",Cidade.cidade);
	//depois arrumar para printar mais de uma
}
void descobrirK(int *matriz, int i){
	for (int j = 1; j <= c; j++){
		if (buscarElemento(matriz,j,i) && i != j){
			printf(" %d",j-1);
		}
	}
}
void saidasParaK(int *matriz, int i){
	int temp[tam];
	zerarMatriz(temp);
	printf("\nQual cidades que possuem saidas diretas para a cidade %d: ", i);
	descobrirK(matriz, i+1);
	
}
int roteiroPossivel(int *matriz, int m, int *sequencia){
	int i;
	for (i = 1; i < m; i++){
		int origem = *(sequencia + (i - 1));
		int destino = *(sequencia + i);
		
		if (buscarElemento(matriz, origem + 1, destino + 1) == 0){
			return 0;
		}
	}
	return 1;
}
int main (){
    //Dimensiona a matriz
    dimensionar(3,3);
    
    //Criei a matriz
    
    int vet[tam];

    //Zera a matriz
    zerarMatriz(vet);
    
    //adiciona
    adicionarElemento(vet,1,1,1);
    adicionarElemento(vet,1,2,2);
    adicionarElemento(vet,1,3,3);
    adicionarElemento(vet,1,1,2);
    adicionarElemento(vet,1,2,3);
    imprimirMatriz(vet);
    cidadeIsolada(vet);
    apenasEntrada(vet);
    apenasSaida(vet);
    maiorNumeroDeEstradas(vet);
    //mande a cidade que nem a questão 0 a n-1;
    saidasParaK(vet, 2);

	

    

}