package Static;


import static Static.StaticPedidos.*;

public class StaticMain {
    public static void main (String[] args) {
       StaticPedidos p1 = new StaticPedidos("123");
       StaticPedidos p2 = new StaticPedidos("456");

       completarPedido();

    }
}
