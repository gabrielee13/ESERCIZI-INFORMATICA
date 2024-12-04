import java.util.Scanner;

public class App {
    public static void main(String[] args) throws Exception {
        Scanner leggi=new Scanner (System.in); //per leggere
        int n;
        float f;
        String s;

        System.out.println("Inserire il numero intero: ");
        n=leggi.nextInt();

        System.out.println("Inserire il numero double: ");
        f=leggi.nextFloat();

        leggi.nextLine();
        System.out.println("Inserire la stringa: ");
        
        s=leggi.nextLine(); 
        leggi.close();

        System.out.println(s);
        System.out.println(f);
        System.out.println(n);
    }
}
