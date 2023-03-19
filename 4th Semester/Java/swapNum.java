//Swapping two numbers using bitwise operators.
import java.util.Scanner;

public class swapNum{
    public static void main(String[] args){
        System.out.println("Enter the 2 integers whose value you want to swap: ");
        Scanner s = new Scanner(System.in);
        int x = s.nextInt(), y = s.nextInt();
        System.out.println("The value of x is " + x + " and the value of y is " + y + " (Before Swap)");
        x = x ^ y;  y = x ^ y; x = x ^ y;
        System.out.println("The value of x is " + x + " and the value of y is " + y + " (After Swap)");
    }
}