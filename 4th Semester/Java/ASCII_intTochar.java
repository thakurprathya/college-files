// Initialize an integer array with ASCII values and print the corresponding character values in a single row.

public class ASCII_intTochar {
	public static void main(String[] args){
    	int[] asciiArray = {65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75};
    	for (int i = 0; i < asciiArray.length; i++) {
        	char c = (char) asciiArray[i];
        	System.out.print(c + " ");
		}
	}
}
