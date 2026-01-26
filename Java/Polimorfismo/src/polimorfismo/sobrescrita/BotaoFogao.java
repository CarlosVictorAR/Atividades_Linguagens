package polimorfismo.sobrescrita;

public class BotaoFogao extends Botao{
    @Override
    public void desligar(){
        System.out.println("Mudei");
    }

    public void ligar(){
        super.ligar();
    }
}
