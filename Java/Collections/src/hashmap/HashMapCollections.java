package hashmap;

import java.util.HashMap;

import static hashmap.FunctionsHashMap.*;

public class HashMapCollections {
    public static void main(String[] args) {
        HashMap<String, Double> notas = new HashMap<String, Double>();
        addHash(notas);
        addHash(notas);
        removeHash(notas);
        printHash(notas);
    }
}
