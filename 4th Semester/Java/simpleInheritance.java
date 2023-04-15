public class simpleInheritance {
    public static void main(String[] args) {
        Animal animal = new Animal();
        Cat cat = new Cat();

        animal.eat();
        cat.eat();
        cat.meow();
    }
}

class Animal {
    public void eat(){  System.out.println("The animal is eating"); }
}

class Cat extends Animal {
    public void meow(){ System.out.println("Meow"); }
}
