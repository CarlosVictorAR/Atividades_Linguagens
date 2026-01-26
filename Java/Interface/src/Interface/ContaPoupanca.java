package Interface;

public class ContaPoupanca implements Conta{
    @Override
    public void consultarSaldo() {
        System.out.println("Seu saldo da conta poupança é: R$ 0");
    }

    @Override
    public void fazerPix() {
        System.out.println("Deu ruim");
    }
}
