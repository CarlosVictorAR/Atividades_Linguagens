package Questao_3;

//Peça ao usuário um número inteiro positivo N. Em seguida, imprima todos os
//números primos entre 2 e N.

import java.util.Scanner;

public class Questao_3 {
    public static int verificadorPrimo (int n){
        int ehPrimo = 1;
        if (n == 2){
            return ehPrimo;
        }
        for (int i = 2; i < n; i++){
            if (n % i == 0){
                ehPrimo = 0;
            }
        }
        return ehPrimo;
    }

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.println("Digite um numero positivo:");
        int number = input.nextInt();
        for (int i = 2; i < number; i++){
            if (verificadorPrimo(i) == 1) {
                System.out.println(i);
            }
        }


    }
}
