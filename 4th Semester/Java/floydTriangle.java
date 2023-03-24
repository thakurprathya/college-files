//Write a program to print * in Floyd's format(using for and while loop).
import java.util.Scanner;

public class floydTriangle {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        System.out.println("Enter number of rows for floyd triangle: ");
        int rows = s.nextInt();

        for (int i=0; i<rows; i++){
            for (int j=0; j<=i; j++){ System.out.print('*'); }
            System.out.println();
        }
        System.out.println();

        int i=0;
        while(i < rows){
            int j=0;
            while(j <= i){ System.out.print('*'); j++; }
            System.out.println();
            i++;
        }
    }
}