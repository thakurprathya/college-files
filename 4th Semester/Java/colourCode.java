//Write a program to recieve color code from the user(single character).
import java.util.Scanner;

public class colourCode {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        System.out.println("Enter a colour code: ");

        String colorCode = s.next();
        switch(colorCode){
            case "#000000":
            	System.out.println("Code refers to: Black");
                break;
        	case "#ff0000":
            	System.out.println("Code refers to: Red");
                break;
        	case "#ffff00":
            	System.out.println("Code refers to: Yellow");
                break;
        	case "#ffffff":
            	System.out.println("Code refers to: White");
                break;
            default:
                System.out.println("Code not present in code base\n");
                break;
        }
    }
}
