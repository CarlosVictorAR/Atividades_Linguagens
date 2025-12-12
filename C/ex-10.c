
#include <stdio.h>
#include <math.h>
#include <conio.h>
 void main()
{
  float cat1,cat2,hip;

  printf("Digite o valor do primeiro cateto: \n");
  scanf("%f",&cat1);

  printf("Digite o valor do segundo cateto: \n");
  scanf("%f",&cat2);

  hip = (cat1 * cat1) + (cat2 * cat2);
  hip = sqrt(hip);

  printf("O valor da hipotenusa e: %0.f",hip);
  getch();
  

  
}