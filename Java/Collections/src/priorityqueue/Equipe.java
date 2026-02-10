package priorityqueue;

import java.util.Objects;

public class Equipe {
    protected String nome;
    protected int saldoDePontos;

    public Equipe(String nome, int saldoDePontos) {
        this.nome = nome;
        this.saldoDePontos = saldoDePontos;
    }

    public String toString(){
        return "Equipe " + nome + " com " + saldoDePontos + " pontos";
    }
}
