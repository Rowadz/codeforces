import java.util.Scanner;



/**
 *
 * @author LT
 */
public class JavaApplication24 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        String x;
        Scanner myScanner = new Scanner(System.in);
        x = myScanner.nextLine();
        int open = 0;
        int counter = 0;
        for (int i = 0; i < x.length(); i++) {
            if(x.charAt(i) == '(') open++;
            else if(x.charAt(i) == ')' && open >= 1){
                open--;
                counter +=2;
            }
            
        }
        System.out.println(counter);
    }
    
}