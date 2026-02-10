package priorityqueue;

import java.util.Comparator;
import java.util.PriorityQueue;

import static priorityqueue.FunctionsPriorityQueue.*;

public class PriorityQueueCollections {

    public static void main (String[] args) {
        Equipe equipe1 = new Equipe("equipe1",100);
        Equipe equipe2 = new Equipe("equipe2",500);
        Equipe equipe3 = new Equipe("equipe3",300);
        Equipe equipe4 = new Equipe("equipe4",400);

        PriorityQueue<Equipe> PriorityQueue = new PriorityQueue<Equipe>(4, new ComparatorQueue());
        PriorityQueue.add(equipe2);
        PriorityQueue.add(equipe3);
        PriorityQueue.add(equipe1);
        PriorityQueue.add(equipe4);
        //FunctionsPriorityQueue function = new FunctionsPriorityQueue();
        printQueue(PriorityQueue);

    }

}
