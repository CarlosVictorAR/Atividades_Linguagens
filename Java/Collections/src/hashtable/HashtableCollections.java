package hashtable;

import java.util.Hashtable;

import static hashtable.FunctionsHashtable.*;

public class HashtableCollections {
    public static void main(String[] args) {
        Hashtable<String, Double> notas = new Hashtable<>();
        addHash(notas);
        addHash(notas);
        removeHash(notas);
        printHash(notas);
    }
}
