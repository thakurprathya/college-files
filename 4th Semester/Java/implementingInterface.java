interface Vehicle {
    void start(); void stop();
}

class Car implements Vehicle {
    @Override
    public void start() { System.out.println("Car started."); }

    @Override
    public void stop() { System.out.println("Car stopped."); }
}

public class implementingInterface {
    public static void main(String[] args) {
        Vehicle vehicle = new Car();
        vehicle.start(); vehicle.stop();
    }
}