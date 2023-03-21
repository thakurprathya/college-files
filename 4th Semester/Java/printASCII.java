//Program to find ASCII code of a character
import java.util.Scanner;

public class printASCII {
    public static void main(String[] args) {
        System.out.println("Enter the Character whose ASCII you want to calculate: ");
        Scanner s = new Scanner(System.in);
        char ch = s.next().charAt(0);
        int ASCII = ch;
        System.out.println("The ASCII value of Character " + ch + " is: " + ASCII);
    }
}