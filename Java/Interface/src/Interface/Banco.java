package Interface;

public class Banco {
    public static void main(String[] args){
        ContaPoupanca cpCarlos = new ContaPoupanca();
        cpCarlos.consultarSaldo();
        cpCarlos.fazerPix();

        ContaCorrente ccCarlos = new ContaCorrente();
        ccCarlos.consultarSaldo();
        ccCarlos.fazerPix();

    }
}
