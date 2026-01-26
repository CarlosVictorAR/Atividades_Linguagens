import javaEncapsulamento.Cachorro;

public class CachorroProtectedMain {
    public static void main(String[] args) {
        Cachorro dog = new Cachorro();
        dog.idadePublic = 3;
        dog.pesoPublic = 3.5;
        System.out.println(dog.idadePublic);
        System.out.println(dog.pesoPublic);
        System.out.println(dog.dormir());
    }
}
