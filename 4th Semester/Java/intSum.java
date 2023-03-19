// Write a program to take two integers as inputs and print their sum.
import java.util.Scanner;

public class intSum {
    public static void main(String[] args) {
        System.out.println("Enter the 2 Integers whose sum you want to calculate: ");
        Scanner s = new Scanner(System.in);
        int a = s.nextInt();
        int b = s.nextInt();
        a = a+b;
        System.out.println("The sum of both the integers is :" + a);
    }
}
