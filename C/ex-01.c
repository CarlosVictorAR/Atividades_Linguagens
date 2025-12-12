/*163. O IFPB precisa de um programa que faça a correção automática das provas do seu  
teste de seleção. A prova, que é a mesma para todos os alunos, consiste de dez  
questões objetivas, cuja resposta deve ser (a, b, c, d ou e). O programa deve ler o  
gabarito da prova e, a seguir, o nome de um candidato e as opções que aparecem no 
seu cartão de respostas. Para cada candidato, o programa deve imprimir o seu  
percentual de acertos. O processamento deve ser encerrado quando for encontrado  
um candidato com o nome ´fim’, que não deve ser processado. O programa deve  
imprimir também a pontuação média dos candidatos.  */
#include <stdio.h>
#include <string.h>
const int tamanho_gabarito = 5;

void main(){
	char gabarito[tamanho_gabarito],nome[100],resposta[tamanho_gabarito],texto[4] = {"fim"};
	int diferenca = 'a' - 'A',acertos,i;
	for (i=0;i<tamanho_gabarito;i++){
		printf("Digite a %d resposta do gabarito: ",i+1);
		scanf("%c",&gabarito[i]);
		fflush(stdin);
		if (gabarito[i] >= 'A' && gabarito[i] <= 'Z'){//if para deixar todas as resposta minuscula
			gabarito[i] += diferenca;
		}
	}
	do {
		for (i=0;i<tamanho_gabarito;i++){
			printf("Digite a %d resposta do aluno: ",i+1);
			scanf("%c",&resposta[i]);
			fflush(stdin);
			if (resposta[i] >= 'A' && resposta[i] <= 'Z'){//if para deixar todas as respostas em minusculo
				resposta[i]+= diferenca;
			}
		}
		printf("Digite o nome do aluno: \n");
		fgets(nome,99,stdin);
		nome[strlen(nome)-1] = '\0';
		fflush(stdin);
		for (i=0;i<strlen(nome);i++){//for para deixar nome todo minusculo
			if (nome[i] >= 'A' && nome[i] <= 'Z'){
				nome[i]+= diferenca;
			}
		}
		if (strcmp(texto,nome) != 0){
			acertos=0;
			for (i=0;i<tamanho_gabarito;i++){//teste de acertos
				if (gabarito[i] == resposta[i]){
					acertos++;
				}
			}
			printf("O percentual de acertos de %s foi: %.1f%%\n\n",nome,(float)acertos*100/tamanho_gabarito);
		}
	}while (strcmp(texto,nome)!= 0);
}