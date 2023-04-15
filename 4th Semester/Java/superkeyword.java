public class superkeyword {
    public static void main(String[] args) {
        Child child = new Child();
        child.printMessage();
    }
}

class Parent {
    private String message = "Hello from Parent class";
    public void printMessage() {  System.out.println(message); }
}

class Child extends Parent {
    private String message = "Hello from Child class";
    public void printMessage() {
        super.printMessage();
        System.out.println(message);
    }
}

