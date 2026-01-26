package scanner;

import java.util.Scanner;

public class PedidoScanner {
    private Scanner scanner = new Scanner(System.in);
    protected void Pedido(Integer[] arrayDeInformacoes){
        System.out.println("Insira o codigo desse produto");
        arrayDeInformacoes[0] = scanner.nextInt();
        System.out.println("Insira a quantidade de itens desse produto: ");
        arrayDeInformacoes[1] = scanner.nextInt();
        System.out.println("Insira o valor desse produto: ");
        arrayDeInformacoes[2] = scanner.nextInt();

        System.out.println("Aguarde um momento.... Estamos gerando a nota fiscal para o seu produto.");
    }
}
