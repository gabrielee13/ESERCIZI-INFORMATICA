import java.util.Scanner;

public class App {
    public static void main(String[] args) throws Exception {
        
        Scanner leggi=new Scanner(System.in);

        System.out.println("Inserire una frase: ");
        String frase=leggi.nextLine();

        System.out.println("Inserire la parola: ");
        String parola=leggi.nextLine();

        System.out.println(frase.indexOf(parola)); //trova la posizione in cui inizia una sottostringa nella stringa main 

        leggi.close();
    }
}
