#include <stdio.h>
int main (){
    float raiz,result;
   float cont = 0;
    printf("Digite qual raiz você deseja (exata): \n");
    scanf("%f",&raiz);
   
    while (result <= raiz){
        
        result = cont * cont;
        cont++;



    }
    
    printf("A raiz de %f é %f",raiz,cont-1);

}