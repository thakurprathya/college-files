// For running the package -: use commands it will create another folder with executable files.
// - javac firstPackage.java 
// - javac -d . firstPackage.java 
// - java FirstPackage.firstPackage

package FirstPackage;

interface Animal {
    void makeSound();
}

class Dog implements Animal {
    @Override
    public void makeSound() { System.out.println("Woof!"); }
}

class Cat implements Animal {
    @Override
    public void makeSound() { System.out.println("Meow!"); }
}

public class firstPackage {
    public static void main(String[] args) {
        Animal animal1 = new Dog();
        Animal animal2 = new Cat();

        animal1.makeSound();
        animal2.makeSound();
    }
}

