package abstracao;

public class Banco{
    public static void main(String[] args){
        ContaCorrente conta1 = new ContaCorrente();
        conta1.consultarSaldo();
        conta1.fazerPix();
        ContaPoupanca conta2 = new ContaPoupanca();
        conta2.consultarSaldo();
        conta2.fazerPix();
    }
}
