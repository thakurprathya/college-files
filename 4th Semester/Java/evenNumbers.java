//Write a program to print even numbers between 23 and 57. Each number should be printed in  a separate row.

public class evenNumbers {
    public static void main(String[] args) {
        for (int i = 24; i < 57; i++){
            if (i % 2 == 0){ System.out.println(i); }
        }
    }
}
