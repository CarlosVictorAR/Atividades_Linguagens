#ifdef _WIN32
  #include <windows.h>
#endif 

void enable_utf8()
{
  #ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
  #endif
}
#include<stdio.h>
int main()
{
  enable_utf8();
  //variaveis
  float nota;
  
  printf("Digite sua nota: \n");
  scanf("%f",&nota);

  if (nota==7) {
    printf("APROVADO");

  }
  if (nota<7) {
    printf("REPROVADO");
  }
  if (nota>7 && nota<8 || nota>=8 && nota<=10)
  {
    printf("%.1f",nota);

  }

  
}