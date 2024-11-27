import java.util.Scanner;

public class App {
    public static void main(String[] args) throws Exception {
        String s="ciao";
        System.out.println(s);
        Scanner leggo=new Scanner (System.in);
        String nome=leggo.next();
        System.out.println(nome);
        leggo.close();
    }
}
