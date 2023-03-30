// Java Program to get the cube of a given number using the static method.

public class calcCubicStaticMethod {
    public static int getCube(int num){ return num * num * num; }
    public static void main(String[] args) {
        int number = 5;
        int cube = calcCubicStaticMethod.getCube(number);
        System.out.println("Cube of " + number + " is " + cube);
    }
}