import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

/**
 *
 * @author LT
 */
public class KDIV {
    
    public static void main(String[] args) {
            int n, m, counter = 0;
            Scanner scanner = new Scanner(System.in);
            n = scanner.nextInt();
            m = scanner.nextInt();
            for(int a = 0;a < 1000; a++)
                for(int b = 0; b < 1000; b++)
                    if((a*a + b == n) && (b*b + a == m)) counter++;
            System.out.println(counter);
    }
}