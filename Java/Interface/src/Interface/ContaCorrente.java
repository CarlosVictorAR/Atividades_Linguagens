package Interface;

import java.util.Scanner;

public class ContaCorrente implements Conta{
    @Override
    public void consultarSaldo() {
        System.out.println("Seu saldo da conta corrente é: R$ 231");
    }

    @Override
    public void fazerPix() {
        Scanner input = new Scanner(System.in);
        System.out.println("Digite o valor da transferência: ");
        int valor = input.nextInt();
        System.out.println("Seu pix de R$" + valor + " foi feito com sucesso");
    }
}
