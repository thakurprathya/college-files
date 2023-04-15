public class multiLevelInheritance {
    public static void main(String[] args){
        Animal animal = new Animal();
        Cat cat = new Cat();
        PersianCat persianCat = new PersianCat();

        animal.eat(); cat.eat(); cat.meow();
        persianCat.eat(); persianCat.meow(); persianCat.purr();
    }
}

class Animal {
    public void eat(){ System.out.println("The animal is eating"); }
}

class Cat extends Animal {
    public void meow(){ System.out.println("Meow"); }
}

class PersianCat extends Cat {
    public void purr(){ System.out.println("Purr"); }
}

