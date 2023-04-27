//Write a program to accept name and age of a person from the command prompt(passed as arguments when you execute the class) and ensure that the age entered is >=15 and < 60.Display proper error messages. The program must exit gracefully after displaying the error message in case the arguments passed are not proper. (Hint : Create a user defined exception class for handling errors.)
//to execute the program need to pass arguments from terminal.
public class Lab7_1 {
    public static void main(String[] args) {
        try {
            String name = args[0];
            int age = Integer.parseInt(args[1]);
            if (age < 15 || age >= 60) {
                throw new InvalidAgeException("Invalid age! Age must be between 15 and 59.");
            }
            System.out.println("Name: " + name + ", Age: " + age);
        } catch (ArrayIndexOutOfBoundsException e) {
            System.out.println("Please provide name and age as command line arguments.");
        } catch (NumberFormatException e) {
            System.out.println("Invalid age! Age must be a valid integer.");
        } catch (InvalidAgeException e) {
            System.out.println(e.getMessage());
        }
    }
}

class InvalidAgeException extends Exception {
    public InvalidAgeException(String message) {
        super(message);
    }
}
