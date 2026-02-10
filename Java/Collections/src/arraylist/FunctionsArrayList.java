package arraylist;

import java.util.ArrayList;

public class FunctionsArrayList {
    static void printArrayList(ArrayList<Integer> array){
        for (int i = 1; i<=array.size(); i++){
            if (i == array.size()){
                System.out.print(i);

            }
            else {
                System.out.print(i + ", ");

            }
        }
        System.out.println();
    }

    static void addArrayList(ArrayList<Integer> array, int numero){
        for (int i = 1; i <= numero; i++){
            array.add(i);
        }
    }
}
