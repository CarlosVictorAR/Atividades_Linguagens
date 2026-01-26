package polimorfismo.sobrecarga;

public class Pagamento {
    public Double pagamento (Double valor){
        return valor;
    }

    // public Double pagamento (Double valor){ return valor; }
    // erro fala q é sem sentido fazer um mesmo igual

    public Integer pagamento(Integer valorInteger, Integer parcelas){
        return valorInteger/parcelas;
    }

    public Long pagamento(Integer valorInteger, Integer parcelas, Long juros){
        return (valorInteger/parcelas) + juros;
    }

}
