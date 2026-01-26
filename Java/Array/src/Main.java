import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import java.util.Locale;

public class Main {
    public static void main(String[] args){
        int[] arrayDeInt;

        int arrayDeInt2[];

        //inicializando um array caso ja sabia o numero de elementos
        int[] arrayDeInt3 = new int[20];

        //preenchendo o array
        Integer[] arrayDeInt4 = {1,2,3,4,5,6,7,8,9,10,11};

        //descobrindo o tamanho do array
        int arraySize = arrayDeInt4.length;
        System.out.println(arraySize);


        //percorrendo o array
        List<Integer> itens = Arrays.asList(arrayDeInt4);
     //   itens.forEach(System.out::println);

        //copiando um array - copyOfRange
        String[] treinamento = new String[]{
                "Treinando",
                "para",
                "escrever",
                "apenas",
                "o",
                "valor",
                "Carlos"
        };
        String[] treinamentoNome = Arrays.copyOfRange(treinamento, 3, 7);
        List<String> treinamentoCompleto = List.of(treinamento);
        List<String> treinamentoNomeList = List.of(treinamentoNome);
        treinamentoNomeList.forEach(System.out::println);

        System.out.println("-----------------------------");

        treinamentoCompleto.forEach(System.out::println);

        System.out.println("----------------------------");
        List<String> treino = new ArrayList<>(List.of(treinamento));
        treino.forEach(System.out::println);
        System.out.println("---------------------------");
        treino.add("arara");
        treino.forEach(System.out::println);





    }
}