#include <math.h>
#include <stdio.h>
#include <conio.h>
void main(){
  int n,d,t,q,c;
    float r;
    //numero
    printf("Digite um número:\n");
    scanf("%d",&n);
    //calculos
    d = n * 2;
    t = n * 3;
    q = pow(n,2);
    c = pow(n,3);   
    r = (float) pow(n,0.5);
    printf("Dobro: %d\n",d);
      printf("Triplo: %d\n",t);
      printf("Quadrado: %d\n",q);
      printf("Cubica: %d\n",c);
      printf("Raiz Quadrada: %.1f\n",r); 
      getch();



}