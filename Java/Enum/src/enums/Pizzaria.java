package enums;
public class Pizzaria {

    public enum TamanhoPizza {
        PEQUENA(10), MEDIA(20), GRANDE(30), FAMILIA(40);
        public int valor;

        TamanhoPizza(int valor) {
            this.valor = valor;
        }

        public int getValor() {
            return valor;
        }
    }

    public static void main(String[] args) {
        TamanhoPizza tamanho = TamanhoPizza.PEQUENA;
        switch (tamanho) {
            case PEQUENA:
                System.out.println("Pedido PEQUENA" +
                        "\nPreco: R$" + tamanho.getValor());
                break;
            case MEDIA:
                System.out.println("Pedido MEDIA" +
                        "\nPreco: R$" + tamanho.getValor());
                break;
            case GRANDE:
                System.out.println("Pedido GRANDE" +
                        "\nPreco: R$" + tamanho.getValor());
                break;
            case FAMILIA:
                System.out.println("Pedido FAMILIA" +
                        "\nPreco: R$" + tamanho.getValor());
                break;
            default:
                System.out.println("Falhou");
        }
    }


}
