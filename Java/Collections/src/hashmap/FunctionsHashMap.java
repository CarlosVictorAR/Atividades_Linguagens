package hashmap;

import java.util.HashMap;

public class FunctionsHashMap {
    protected static void printHash(HashMap<String,Double> notas){
        System.out.println(notas);
        System.out.println("Nota de banco de dados: "+notas.getOrDefault("Banco de Dados",0.0));
        System.out.println("Nota de portugues: "+notas.getOrDefault("portugues",0.0));
    }
    protected static void addHash(HashMap<String,Double> notas){
        notas.put("Algoritmo e Lógica de Programação",9.8);
        notas.put("Programação Orientada a Objetos", 7.4);
        notas.put("Banco de Dados", 8.6);
    }
    protected static void removeHash(HashMap<String,Double> notas){
        notas.remove("Algoritmo e Lógica de Programação");
    }
}
