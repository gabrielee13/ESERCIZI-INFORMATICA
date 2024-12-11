import java.util.Scanner;

public class App {
    public static void main(String[] args) throws Exception {
        Scanner leggi=new Scanner(System.in);

        String stringa1;
        String stringa2;
        String stringa3;

        System.out.println("Inserire la prima stringa: ");
        stringa1=leggi.nextLine();

        System.out.println("Inserire la seconda stringa: ");
        stringa2=leggi.nextLine();

        System.out.println("Inserire la terza stringa: ");
        stringa3=leggi.nextLine();

        String stringaConcatenata;

        stringaConcatenata= stringa1+stringa2+stringa3;

        System.out.println("La stringa concatenata e': " + stringaConcatenata + " e la sua lunghezza e': " + stringaConcatenata.length());

        







        





        leggi.close();
    }
}
