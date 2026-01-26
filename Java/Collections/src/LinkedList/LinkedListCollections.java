package LinkedList;

import java.util.LinkedList;
import static LinkedList.FunctionsLinkedList.*;
public class LinkedListCollections {
    public static void main(String args[]){
        LinkedList <Integer> list = new LinkedList <>();

        addLinkedList(list, 10);
        printLinkedList(list);

        System.out.println(list.clone());
        System.out.println(list.size());
        System.out.println(list.pollLast());
        printLinkedList(list);
        System.out.println(list.contains(16));
        System.out.println(list.contains(4));


    }
}
