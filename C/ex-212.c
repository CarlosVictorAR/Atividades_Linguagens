/*212. Escreva um programa que leia o número total de questões existentes em uma prova  e 
o número de questões que um candidato acertou e determine o seu percentual de  
acertos e o seu percentual de erros. O cálculo deve ser realizado através de um  
subprograma. */
#include <stdio.h>
int percentual(int n,int m){
	printf("Acertos:%.1f%%\n",((float)m * 100 / n));
	printf("Erros:%.1f%%\n",((float)(n-m) * 100) / n);
}
int main(){
	int total_questoes,acertos;
	printf("Informe o total de questoes que a prova tem: \n");
	scanf("%d",&total_questoes);
	printf("Informe o total de acertos: \n");
	scanf("%d",&acertos);
	percentual(total_questoes,acertos);
	
}