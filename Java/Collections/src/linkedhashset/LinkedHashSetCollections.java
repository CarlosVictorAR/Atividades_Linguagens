package linkedhashset;

import java.util.LinkedHashSet;

import static linkedhashset.FunctionsLinkedHashSet.*;
public class LinkedHashSetCollections {
    public static void main (String[] args){
        LinkedHashSet<String> linguagensLinked = new LinkedHashSet<String>();
        linguagensLinked.add("JavaScript");
        linguagensLinked.add("Ruby");
        linguagensLinked.add("Java");
        linguagensLinked.add("C#");
        linguagensLinked.add("Kotlin");
        linguagensLinked.add("Kotlin");
        linguagensLinked.add("Kotlin");
        linguagensLinked.add("C++");
        linguagensLinked.add("C#");

        printHash(linguagensLinked);
        System.out.println(linguagensLinked.size());
        System.out.println(linguagensLinked.contains("Java"));
        System.out.println(linguagensLinked.contains("Rubi"));
        System.out.println(linguagensLinked.remove("Java"));
        printHash(linguagensLinked);
        System.out.println(linguagensLinked.size());



    }
}
