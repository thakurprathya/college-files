package Lab2;

import java.util.Scanner;

public class pallindrome {

    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        System.out.println("Enter a number");
        String str = s.next();

        int i = 0;
        int j = str.length() - 1;

        while (i > j){
            if (str.charAt(i) == str.charAt(j)){
                i++;
                j--;

            }
            else {
                System.out.println("Not a pallindrome");
                return;
            }
        }
        System.out.println("Pallindrome");

    }

}
