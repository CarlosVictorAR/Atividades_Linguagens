package javaEncapsulamento;

public class CachorroMain {
    public static void main(String[] args) {
        Cachorro dog = new Cachorro();
        dog.idadePublic = 3;
        dog.pesoPublic = 3.5;
        dog.idadeProtected = 4;
        dog.pesoProtected = 4.5;
        System.out.println(dog.idadePublic);
        System.out.println(dog.pesoPublic);
        System.out.println(dog.idadeProtected);
        System.out.println(dog.pesoProtected);
        System.out.println(dog.dormir());
        System.out.println(dog.aliviar());
    }
}
