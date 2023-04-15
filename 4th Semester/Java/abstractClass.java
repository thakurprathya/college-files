abstract class Shape {
    protected double area;
    public abstract void calculateArea();
}

class Rectangle extends Shape {
    private double width, height;
    public Rectangle(double width, double height) { this.width = width; this.height = height; }
    public void calculateArea() { area = width * height; }
}

class Triangle extends Shape {
    private double base, height;
    public Triangle(double base, double height) { this.base = base; this.height = height; }
    public void calculateArea() { area = 0.5 * base * height; }
}

public class abstractClass {
    public static void main(String[] args) {
        Rectangle rect = new Rectangle(5.0, 3.0);
        rect.calculateArea();
        System.out.println("Area of rectangle: " + rect.area);

        Triangle tri = new Triangle(4.0, 6.0);
        tri.calculateArea();
        System.out.println("Area of triangle: " + tri.area);
    }
}

