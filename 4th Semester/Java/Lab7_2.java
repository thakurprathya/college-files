//Create a customized exception and also make use of all the 5 exception keywords.
//to execute the program need to pass arguments from terminal.
public class Lab7_2 {

    static void validateAge(int age) throws CustomException {
        if (age < 18) {
            throw new CustomException("Age is less than 18.");
        }
    }

    public static void main(String[] args) {
        try {
            int age = Integer.parseInt(args[0]);
            validateAge(age);
            System.out.println("Age is valid.");
        } catch (NumberFormatException e) {
            System.out.println("Invalid input for age.");
        } catch (ArrayIndexOutOfBoundsException e) {
            System.out.println("Please provide age as command line argument.");
        } catch (CustomException e) {
            System.out.println(e.getMessage());
        } catch (Exception e) {
            System.out.println("Unknown error occurred.");
        }
    }

    static class CustomException extends Exception {
        public CustomException(String message) {
            super(message);
        }
    }
}
