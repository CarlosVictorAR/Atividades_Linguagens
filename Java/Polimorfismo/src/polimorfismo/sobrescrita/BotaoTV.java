package polimorfismo.sobrescrita;

public class BotaoTV extends Botao{
    @Override
    public void ligar(){
        System.out.println("Ligando a TV");
    }

    public void desligar(){
        super.desligar();
    }
}
