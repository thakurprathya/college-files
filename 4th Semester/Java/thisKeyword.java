// WAP to display the use of this keyword.

public class thisKeyword {
    private int id, age;
    private String name;
    public thisKeyword(int id, String name, int age){
        this.id = id;
        this.name = name;
        this.age = age;
    }
    public void display() {
        System.out.println("Student ID: " + this.id);
        System.out.println("Student Name: " + this.name);
        System.out.println("Student Age: " + this.age);
    }
    public static void main(String[] args) {
        thisKeyword s1 = new thisKeyword(1001, "Krypton", 18);
        s1.display();
    }
}
