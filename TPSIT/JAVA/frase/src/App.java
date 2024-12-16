import java.util.Scanner;

public class App {
    public static void main(String[] args) throws Exception {
        Scanner leggi = new Scanner(System.in);

        String s = leggi.nextLine();
        
        if(65 <= s.charAt(0) && s.charAt(0)<=90){
            System.out.println("Il primo carattere e' una maiuscola");
        }
        else{
            System.out.println("Il primo carattere non e' una maiuscola");   
        }

        if(s.charAt(s.length()-1) == 46){
            System.out.println("L'ultimo carattere e' un punto");
        }
        else{
            System.out.println("L'ultimo carattere non e' un punto");
        }
        

    }
}
