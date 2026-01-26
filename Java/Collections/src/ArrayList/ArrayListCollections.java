package ArrayList;

import java.util.ArrayList;
import static ArrayList.FunctionsArrayList.*;
public class ArrayListCollections {
    public static void main (String args[]){
        ArrayList<Integer> meuArrayList = new ArrayList<>();
        addArrayList(meuArrayList, 10);

        printArrayList(meuArrayList);

        meuArrayList.clear();
        addArrayList(meuArrayList, 20);
        printArrayList(meuArrayList);

        meuArrayList.remove(5);
        printArrayList(meuArrayList);

        System.out.println(meuArrayList.contains(5));
        System.out.println(meuArrayList.clone());
        System.out.println(meuArrayList.size());
        System.out.println(meuArrayList.contains(40));
        System.out.println(meuArrayList.indexOf(3));
        System.out.println(meuArrayList.isEmpty());
        meuArrayList.clear();
        System.out.println(meuArrayList.isEmpty());



    }
}
