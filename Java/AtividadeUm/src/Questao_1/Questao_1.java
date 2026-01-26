package Questao_1;

//Escreva um programa que leia o nome de um aluno e suas três notas, sendo a
//terceira nota com peso 2. Calcule e exiba a média ponderada, com duas casas
//decimais. Depois, exiba se o aluno está "Aprovado" (média ≥ 7) ou "Reprovado".

import java.text.DecimalFormat;
import java.util.Scanner;

public class Questao_1 {
    public static void main(String[] args) {
        int peso_1 = 1;
        int peso_2 = 1;
        int peso_3 = 2;

        System.out.println("Digite o nome do aluno:");
        Scanner input = new Scanner(System.in);
        String nome = input.nextLine();

        System.out.println("Digite a primeira nota de " + nome + ":");
        double nota_1 = input.nextDouble();
        nota_1 *= peso_1;

        System.out.println("Digite a segunda nota de " + nome + ":");
        double nota_2 = input.nextDouble();
        nota_2 *= peso_2;

        System.out.println("Digite a terceira nota de " + nome + ":");
        double nota_3 = input.nextDouble();
        nota_3 *= peso_3;

        DecimalFormat df = new DecimalFormat("0.00");
        double mediaFinal = (nota_1 + nota_2 + nota_3) / (peso_1 + peso_2 + peso_3);
        System.out.println("Nota final: " + df.format(mediaFinal));
    }
}
