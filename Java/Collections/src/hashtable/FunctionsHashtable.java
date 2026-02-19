package hashtable;

import java.util.Hashtable;

public class FunctionsHashtable {

    protected static void printHash(Hashtable<String,Double> notas){
        System.out.println(notas);
        System.out.println("Nota de banco de dados: "+notas.getOrDefault("Banco de Dados",0.0));
        System.out.println("Nota de portugues: "+notas.getOrDefault("portugues",0.0));
        System.out.println(notas.values());
        System.out.println(notas.replace("Banco de Dados", 10.0));
        System.out.println(notas.putIfAbsent("Portugues", 10.0));
        System.out.println(notas.putIfAbsent("Portugues", 10.0));
        System.out.println(notas.replace("Banco de Dados", 8.3));
        System.out.println(notas.containsValue(3.4));
        System.out.println(notas.containsValue(10.0));
        System.out.println(notas);




    }
    protected static void addHash(Hashtable<String,Double> notas){
        notas.put("Algoritmo e Lógica de Programação",9.8);
        notas.put("Programação Orientada a Objetos", 7.4);
        notas.put("Banco de Dados", 8.6);
    }
    protected static void removeHash(Hashtable<String,Double> notas){
        notas.remove("Algoritmo e Lógica de Programação");
    }
}
