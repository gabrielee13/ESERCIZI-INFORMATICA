import java.util.Scanner;

public class App {
    public static void main(String[] args) throws Exception {
        Scanner leggi=new Scanner(System.in);
        System.out.println("Inserire una frase: ");
        String stringa=leggi.nextLine();
        String[] parole=stringa.split(" "); // lo spazio e' il separatore

        System.out.println("La prima parola e': " + parole[0]);

        leggi.close();

    }
}
