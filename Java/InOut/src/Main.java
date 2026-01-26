import java.util.Scanner;

public class Main{
    public static void main(String[] args){
        int myNumber = 0;
        Scanner input = new Scanner(System.in);
        while (myNumber != 12345){
            myNumber = input.nextInt();
            if (myNumber == 12345){
                System.out.println("Parabéns, você acertou");
            }
            else {
                System.out.println("Infelizmente você errou, tente novamente");
            }
        }
    }
}