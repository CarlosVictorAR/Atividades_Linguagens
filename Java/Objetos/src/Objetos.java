
public class Objetos {
    public static void main(String[] args) {
        Estudante Carlos = new Estudante();
        Carlos.setNome("Carlos");
        Carlos.setStack("Java e Spring");
        for (int i = 0; i < 10; i++){
            if (i == 2){
                System.out.println(Carlos.getNome());
            }
            else if (i == 4) {
                System.out.println(Carlos.getStack());
            }
            else if (i == 6){
                System.out.println(Carlos.estudar());
            }
            else if (i == 8){
                Carlos.dormir();
            }
            else {
                System.out.println(i);
            }
        }
    }
}