/*219. Escreva um programa que leia o valor total que um cliente consumiu em um  
restaurante e determine o valor final da sua conta, considerando que o restaurante  
cobra uma taxa de serviço de 10 % e uma taxa de couvert artístico de R$ 10,00. A  
conta deve ser calculada através de um subprograma. */
float printar(float n){
    printf("Valor final: R$%.2f",n * 1.1 + 10);
}
void main (){
    float valor;
    printf("Informe o valor consumido pelo cliente\n");
    scanf("%f",&valor);
    printar(valor);
}