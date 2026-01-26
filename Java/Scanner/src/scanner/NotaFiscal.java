package scanner;

import java.io.IOException;
import java.nio.file.Path;
import java.nio.file.Paths;
import java.nio.file.Files;
import java.io.File;

public class NotaFiscal {
    //arrayDeInformacoes [0 = codigo, 1 = quantidade, 2 = preço]
    public static void main(String[] args) throws IOException {
        Integer[] arrayDeInformacoes = new Integer[3];
        PedidoScanner pedido = new PedidoScanner();
        pedido.Pedido(arrayDeInformacoes);
        Path fileName = Path.of("C:\\Users\\carlo\\OneDrive\\Documentos\\Languages\\Java\\Scanner\\nota-fiscal-" + arrayDeInformacoes[0] + ".txt");
        System.out.println("Imprimindo nota fiscal");
        String text = "Código do produto: " + arrayDeInformacoes[0] + "\nQuantidade: " + arrayDeInformacoes[1] + "\nValor do produto: " + arrayDeInformacoes[2] + "\n" + "Total da" +
                " compra: " + arrayDeInformacoes[1] * arrayDeInformacoes[2];
        Files.writeString(fileName, text);
        ValidadorNotaFiscal validador = new ValidadorNotaFiscal();
        validador.validarNotaFiscal(fileName);

    }
}
