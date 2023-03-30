// Create a class Box that uses a parameterized constructor to initialize the dimensions of a box. The dimensions of the Box are width, height, depth. The class should have a method that can return the volume of the box. Create an object of the Box class and test the functionalities.

public class boxVolumeMethod {
    private int width, height, depth;
    public boxVolumeMethod(int width, int height, int depth) {
        this.width = width;
        this.height = height;
        this.depth = depth;
    }
    public int volume(){ return width * height * depth; }
    public static void main(String[] args) {
        boxVolumeMethod myBox = new boxVolumeMethod(2, 3, 4);
        System.out.println("The volume of the box is: " + myBox.volume());
    }
}
