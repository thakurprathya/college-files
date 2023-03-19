// WAP to accept a String as a command-line argument and print a welcome
// message as given - "Welcome yourname:

import java.util.Scanner;

public class inputString{
    public static void main(String[] args) {
        System.out.println("Enter your Username: ");
        Scanner s = new Scanner(System.in);
        String name = s.nextLine();
        System.out.println("Welcome " + name);
    }
}