package abstracao;

import java.util.Scanner;

public class ContaCorrente extends Conta{
    @Override
    public void consultarSaldo() {
        System.out.println("Saldo da conta corrente: R$1234");
    }

    @Override
    public void fazerPix() {
        Scanner input = new Scanner(System.in);
        System.out.println("Digite o valor que deseja transferir: ");
        int valor = input.nextInt();
        System.out.println("Você Fez um pix de R$" + valor + " com sucesso!");
    }
}
