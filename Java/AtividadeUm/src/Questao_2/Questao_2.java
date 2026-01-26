package Questao_2;

//Peça um número ao usuário. Verifique e imprima:
//● "Múltiplo de 3", se for múltiplo de 3;
//● "Múltiplo de 5", se for múltiplo de 5;
//● "Múltiplo de ambos", se for múltiplo de 3 e 5;
//● "Não é múltiplo de 3 nem de 5", caso contrário.

import java.util.Scanner;

public class Questao_2 {
    public static void main (String[] args){
        Scanner input = new Scanner(System.in);
        System.out.println("Digite um numero: ");
        int number = input.nextInt();
        if (number % 3 == 0 && number % 5 == 0){
            System.out.println("Múltiplo de ambos");
        }
        else if (number % 3 == 0){
            System.out.println("Múltiplo de 3");
        }
        else if (number % 5 == 0){
            System.out.println("Múltiplo de 5");
        }
        else {
            System.out.println("Não é multiplo de 3 nem de 5");
        }
    }
}
