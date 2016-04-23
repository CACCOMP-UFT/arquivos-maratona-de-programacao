import java.io.*;
import java.util.Scanner;

public class Problema1 {

    public static void main(String[] args) {
        String str, c;
        Scanner scan = new Scanner(System.in);

        while(true) {
            c = scan.next();
            str = scan.next();

            if(c.equals("0") && str.equals("0"))
                break;

            str = str.replaceAll(c, "");
            str = str.replaceFirst("^0+(?!$)", "");
            
            if(str.isEmpty()) System.out.println("0");
            else if(str.matches("0"))
                System.out.println("0");
            else
                System.out.println(str);
        }
    }
}
