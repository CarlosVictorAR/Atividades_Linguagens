package Questao_4;

import java.util.Scanner;

public class Questao_4 {

    //Uma aplicação interessante dos computadores é exibir diagramas e gráficos de
    //barras. Escreva um aplicativo que leia cinco números entre 1 e 30. Para cada
    //número que é lido, seu programa deve exibir o mesmo número de asteriscos
    //adjacentes. Por exemplo, se seu programa lê o número 7, ele deve exibir *******.
    //Exiba as barras dos asteriscos depois de ler os cinco números.

    static void criadorDeAsteriscos(Integer[] valores){
        for(Integer valor : valores){
            for (int i = 1; i <= valor; i++) {
                System.out.print("*");
            }
            System.out.println();
        }
    }
    public static void main(String[] args) {
        final int TAMANHO = 5;
        Integer[] valores = new Integer[TAMANHO];
        Scanner in = new Scanner(System.in);
        System.out.println("Digite " + TAMANHO + " valores inteiros:");
        for (int i = 0; i < TAMANHO; i++){
           valores[i] = in.nextInt();
           if (valores[i] > 30){
               i--;
               System.out.println("Informe um valor entre 1 e 30");
           }
        }
        criadorDeAsteriscos(valores);
    }

}
