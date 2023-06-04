import java.io.*;

public class Lab10_1 {
    public static void main(String[] args) {
        String inputFile = "lab10_1_input.txt";
        String outputFile = "lab10_1_output.txt";

        try {
            // Read from the input file
            FileReader fileReader = new FileReader(inputFile);
            BufferedReader bufferedReader = new BufferedReader(fileReader);

            // Write to the output file
            FileWriter fileWriter = new FileWriter(outputFile);
            BufferedWriter bufferedWriter = new BufferedWriter(fileWriter);

            String line;
            while ((line = bufferedReader.readLine()) != null) {
                // Process each line and write to the output file
                bufferedWriter.write(line);
                bufferedWriter.newLine();
            }

            // Close the resources
            bufferedReader.close();
            bufferedWriter.close();

            System.out.println("File read and write completed.");
        } catch (IOException e) { e.printStackTrace(); }
    }
}
