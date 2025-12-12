/*243. Escreva um programa que leia um caractere e verifique se o mesmo é uma letra
maiúscula, uma letra minúscula, um numeral ou nenhum dos tipos anteriores. Esta
verificação deve ser realizada através de um subprograma.
*/
#include <stdio.h>
int verificador(char c){
    if (c >= 'A' && c <= 'Z'){
        return 2;
    }
    else if(c >= 'a' && c <= 'z'){
        return 1;
    }
    else if(c >= '0' && c <= '9'){
        return 0;
    }
    else {
        return -1;
    }


}
int main(){
    char c;
    c = getchar();
    int teste = verificador(c);
    if (teste == 2){
        printf("Maiuscula\n");
    }
    else if (teste == 1){
        printf("Minuscula\n");
    }
    else if(teste == 0){
        printf("Numeral\n");
    }
    else{
        printf("Nenhuma das anteriores\n");
    }
}