//Write a Java program to find whether the given no. is palindrome or not.
import java.util.Scanner;

public class pallindrome {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        System.out.println("Enter a number to be checked for palindrome: ");
        String str = s.next();

        int i = 0, j = str.length() - 1;
        while (j > i){
            if (str.charAt(i) == str.charAt(j)){ i++; j--; }
            else {
                System.out.println("Not a pallindrome");
                return;
            }
        }
        System.out.println("Pallindrome");
    }
}