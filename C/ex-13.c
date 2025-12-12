/* Escreva um programa que leia um valor em KB e calcule o seu valor correspondente  
em bits, bytes, MB e GB.  */
#include <conio.h>
#include <stdio.h>
void main () {
    float bits,kb,b,mb,gb;

    printf("Digite o valor em kb: \n");
    scanf("%f",&kb);
    
    b = (kb * 1024);
    bits = b * 8;
    mb = kb / 1024;
    gb = kb / (1024 * 1024);

    printf("Resultados: \n");
    printf("Bits: %f\n",bits);
    printf("Bytes: %f\n",b);
    printf("Kilobytes: %f\n",kb);
    printf("Megabytes: %f\n",mb);
    printf("Gigabytes: %f\n",gb);

    getch();

}