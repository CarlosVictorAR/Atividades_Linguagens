package linkedlist;

import java.util.LinkedList;

public class FunctionsLinkedList {
    static void printLinkedList(LinkedList<Integer> array){
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

    static void addLinkedList(LinkedList<Integer> array, int numero){
        for (int i = 1; i <= numero; i++){
            array.add(i);
        }
    }
}
