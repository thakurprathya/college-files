//Write a program to reverse the elements of a given 2*2 array. Four integer numbers need to be passed as Command-Line arguments.
import java.util.Scanner;

public class reverse2Darray {
	public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int[][] arr = new int[2][2];
        System.out.println("Please enter 4 integer numbers to populate the array:");
        for (int i = 0; i < arr.length; i++) {
            for (int j = 0; j < arr[i].length; j++) {
                arr[i][j] = scanner.nextInt();
            }
        }
        System.out.println("Original array:");
        printArray(arr);
        reverseArray(arr);
        System.out.println("Reversed array:");
        printArray(arr);
    }
    public static void reverseArray(int[][] array) {
        int temp = array[0][0];
        array[0][0] = array[1][1];
        array[1][1] = temp;
        temp = array[0][1];
        array[0][1] = array[1][0];
        array[1][0] = temp;
    }
    public static void printArray(int[][] array) {
        for (int i = 0; i < array.length; i++) {
            for (int j = 0; j < array[i].length; j++) {
                System.out.print(array[i][j] + " ");
            }
            System.out.println();
        }
    }
}
