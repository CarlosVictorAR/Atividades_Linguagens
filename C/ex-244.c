/*244. Escreva um programa que leia um número inteiro entre 1 e 999 e calcule o seu valor
correspondente em algarismos romanos. O cálculo deve ser realizado através de um
subprograma.
*/
#include <stdio.h>
int algarismo(int n){
    int valor = 0;
    valor += (int)(n / 100) * 100;
    valor += (int)((n%100) / 10) * 10;
    valor += n%10;
    return valor;
}
int main(){
    int n;
    scanf("%d",&n);
    char *centenas[] = {"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};
    char *dezenas[] = {"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
    char *unidades[] = {"","I","II","III","IV","V","VI","VII","VIII","IX"};
    int result = algarismo(n);
    printf("Resultado: %s%s%s",centenas[(int)(result/100)],dezenas[(int)((result%100)/10)],unidades[result%10]);
    getchar();
}