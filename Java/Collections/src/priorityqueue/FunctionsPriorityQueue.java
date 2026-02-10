package priorityqueue;

import java.util.PriorityQueue;

public class FunctionsPriorityQueue {
    public static void printQueue(PriorityQueue<Equipe> equipe){
        PriorityQueue<Equipe> clone = new PriorityQueue<>();
        clone = equipe;
        while(!clone.isEmpty()){
            System.out.println(clone.poll());
        }
    }
}
