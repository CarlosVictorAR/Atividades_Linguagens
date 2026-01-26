public class Pessoa{
    public static void main (String[] args){
        PessoaDesenvolvedoraBackend back = new PessoaDesenvolvedoraBackend("Carlos","Java",132.4);
        PessoaDesenvolvedoraFrontend front = new PessoaDesenvolvedoraFrontend("Joao","JS",12.3);
        System.out.println("Pessoa desenvolvedora backend");
        System.out.println("Nome: " + back.getNome());
        System.out.println("Stack: " + back.getStack());
        System.out.println("Salario: R$" + back.getSalario());
        System.out.println("Pessoa desenvolvedora frontend");
        System.out.println("Nome: " + front.getNome());
        System.out.println("Stack: " + front.getStack());
        System.out.println("Salario: R$" + front.getSalario());
        back.codar();
        front.codar();
    }
}