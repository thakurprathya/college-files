//Write a java program to produce the tokens from given long string.

public class tokenFromString {
	public static void main(String[] args) {
        String longString = "This is an example string";
        String[] tokens = longString.split("\\s+");
        for(String token : tokens){ System.out.println(token); }
    }
}