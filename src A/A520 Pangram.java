import java.util.ArrayList;
import java.util.Scanner;

/**
 * @author Rowad
 */
public class Competitive {

    public static void main(String[] args) {
        String pangram;
        int n;
        Scanner myScanner = new Scanner(System.in);
        n = myScanner.nextInt();
        pangram = myScanner.next();
        ArrayList myArrayList = new ArrayList();
        
        for (int i = 0; i < n; i++) {
            if(!myArrayList.contains(Character.toLowerCase(pangram.charAt(i)))){
                myArrayList.add(Character.toLowerCase(pangram.charAt(i)));
                //System.out.print(pangram.charAt(i) + " ");
            }
        }
        if(myArrayList.size() == 26)System.out.println("YES");
        else System.out.println("NO");
        
    }
    
}