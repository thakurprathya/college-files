public class methodOveriding {
    public static void main(String[] args) {
        Animal animal1 = new Animal();
        Animal animal2 = new Cat();
        Animal animal3 = new Dog();

        animal1.makeSound();
        animal2.makeSound();
        animal3.makeSound();
    }
}

class Animal {
    public void makeSound(){ System.out.println("The animal makes a sound: "); }
}

class Cat extends Animal {
    public void makeSound(){ System.out.println("CAT --> Meow"); }
}

class Dog extends Animal {
    public void makeSound(){ System.out.println("DOG  --> Woof"); }
}
