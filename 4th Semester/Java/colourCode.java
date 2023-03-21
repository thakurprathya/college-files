package Lab2;

import java.util.Scanner;

public class colourCode {

    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        System.out.println("Enter a colour code");

        char colour = s.next().charAt(0);

        if (colour ==  'r' || colour == 'R'){
            System.out.println("Red");
        }
        else if (colour ==  'g' || colour == 'G'){
            System.out.println("Green");
        }
        else if (colour ==  'b' || colour == 'B'){
            System.out.println("Blue");
        } else if (colour ==  'v' || colour == 'V') {
            System.out.println("Violet");
        }
        else if(colour ==  'p' || colour == 'P'){
            System.out.println("Pink");
        }
        else if(colour ==  'y' || colour == 'Y'){
            System.out.println("Yellow");
        }
        else if(colour ==  'o' || colour == 'O'){
            System.out.println("Orange");
        }

    }

}
