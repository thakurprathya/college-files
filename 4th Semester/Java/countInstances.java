// Write a program that can count the number of instances created for the class.

public class countInstances {
    private static int instanceCount = 0;
    public countInstances(){ instanceCount++; }
    public static int getInstanceCount(){ return instanceCount; }
    public static void main(String[] args){
        countInstances obj1 = new countInstances();
        countInstances obj2 = new countInstances();
        countInstances obj3 = new countInstances();
        System.out.println("Number of instances created: " + countInstances.getInstanceCount());
    }
}

