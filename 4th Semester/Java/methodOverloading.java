// Using the concept of method overloading Write method for calculating the area of triangle, circle and rectangle.

public class methodOverloading {
	public static void main(String[] args) {
        double triangleArea = area(3.0, 4.0);
        double circleArea = area(2.0);
        int rectangleArea = area(4, 5);
        System.out.println("Area of triangle: " + triangleArea);
        System.out.println("Area of circle: " + circleArea);
        System.out.println("Area of rectangle: " + rectangleArea);
    }
	public static double area(double base, double height){ return 0.5 * base * height; }
	public static double area(double radius){ return Math.PI * radius * radius; }
	public static int area(int length, int width){ return length * width; }
}
