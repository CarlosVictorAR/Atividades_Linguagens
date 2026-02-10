package hashset;
import static hashset.FunctionsHashSet.*;
import java.util.HashSet;
public class HashSetCollections {
    public static void main(String[] args) {
        HashSet <String> linguagens =  new HashSet<>();
        linguagens.add("JavaScript");
        linguagens.add("Ruby");
        linguagens.add("Java");
        linguagens.add("C#");
        linguagens.add("Kotlin");
        linguagens.add("Kotlin");
        linguagens.add("Kotlin");
        linguagens.add("C++");
        printHash(linguagens);
        System.out.println(linguagens.size());
        System.out.println(linguagens.contains("Java"));
        System.out.println(linguagens.contains("Rubi"));
        System.out.println(linguagens.remove("Java"));
        printHash(linguagens);
        System.out.println(linguagens.size());
    }
}
