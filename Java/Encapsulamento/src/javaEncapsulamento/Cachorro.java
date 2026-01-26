package javaEncapsulamento;

public class Cachorro {

    //só dentro da classe
    private Double peso;
    private Integer idade;

    //todo o projeto tem acesso
    public Double pesoPublic;
    public Integer idadePublic;

    //Só dentro do pacote
    protected Double pesoProtected;
    protected Integer idadeProtected;

    private String latir(){
        return "Au Au Au";
    }

    public String dormir(){
        return "ZzZzZzZzZz";
    }

    protected String aliviar(){
        return "Urinando";
    }
}
