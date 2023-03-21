package Lab2;

import java.util.Scanner;

public class twoCharVar {

    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        String input = s.nextLine();
        if (input.length() != 2)
        {
            System.out.println("Enter 2 char variable");
        }

        char a = input.charAt(0);
        char b = input.charAt(1);

        if (a > b){
            System.out.println(b + "" + a);
        }
        else{
            System.out.println(input);
        }

    }

}
