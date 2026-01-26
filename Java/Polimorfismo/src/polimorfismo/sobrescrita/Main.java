package polimorfismo.sobrescrita;

public class Main {
    public static void main(String[] args){
        BotaoTV botaoTV = new BotaoTV();
        botaoTV.ligar();
        botaoTV.desligar();

        BotaoFogao botaoFogao = new BotaoFogao();
        botaoFogao.ligar();
        botaoFogao.desligar();
    }
}
