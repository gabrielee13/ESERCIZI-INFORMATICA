import java.util.Scanner;

public class App {
    private static Double n2;

    public static void main(String[] args) throws Exception {
        Scanner leggi=new Scanner(System.in);

        System.out.println("Inserire una frase per fare un calcolo: ");
        String frase=leggi.nextLine();

        String[] parole=frase.split(" ");

        if(parole[0].equals("somma")){
            Double n1=Double.parseDouble(parole[1]);
            Double n2 = Double.parseDouble(parole[3]); // casting

            Double risultato=n1+n2;
            System.out.println("La somma di " + n1 + " e " + n2 + " vale: " + risultato);
        }

        else if(parole[0].equals("sottrai")){
            
            Double n1=Double.parseDouble(parole[3]);
            Double n2=Double.parseDouble(parole[1]);

            Double risultato=n1-n2;
            System.out.println("La differenza tra " + n1 + " e " + n2 + " vale: " + risultato);
        }

        else if(parole[0].equals("moltiplica")){

            Double n1=Double.parseDouble(parole[1]);
            Double n2=Double.parseDouble(parole[3]);

            Double risultato=n1*n2;
            System.out.println("Il prodotto tra " + n1 + " e " + n2 + " vale: " + risultato);
        }

        else if(parole[0].equals("trovami")){
            Double numero=Double.parseDouble(parole[parole.length-1]);
            Double risultato=numero/2;

            System.out.println("La meta di " + numero + " vale: " + risultato);
        }

        else if(parole[0].equals("dimmi")){
            Double n=Double.parseDouble(parole[parole.length-1]);
            Double risultato=n*n;
            
            System.out.println("Il quadrato di " + n + " vale: " + risultato);
        }

        leggi.close();
    }
}