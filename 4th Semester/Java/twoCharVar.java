//Initialize two character variable in a Program & display the character in alphabetical order.
import java.util.Scanner;

public class twoCharVar {
    public static void main(String[] args) {
        System.out.println("Enter 2 character variable: ");
        Scanner s = new Scanner(System.in);
        String input = s.nextLine();
        if (input.length() != 2){ System.out.println("Invalid Input!!"); return; }

        char a = input.charAt(0);
        char b = input.charAt(1);
        if (a > b){ System.out.println("sorted order: "+ b + "" + a); }
        else{ System.out.println("sorted order: "+ input); }
    }

}
