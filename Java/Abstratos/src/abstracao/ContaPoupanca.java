package abstracao;

import java.util.Scanner;

public class ContaPoupanca extends Conta{
    @Override
    public void consultarSaldo() {
        System.out.println("Saldo da conta Poupança: 0 ");
    }

    @Override
    public void fazerPix() {
        System.out.println("Deu ruim");
    }
}
