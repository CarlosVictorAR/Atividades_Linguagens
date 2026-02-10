package priorityqueue;

import java.util.Comparator;

public class ComparatorQueue implements Comparator<Equipe> {

    @Override
    public int compare(Equipe equipe1, Equipe equipe2) {
        return Integer.compare(equipe2.saldoDePontos, equipe1.saldoDePontos);
    }
}
