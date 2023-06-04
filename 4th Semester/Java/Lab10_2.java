//Convert the content of a given file into the uppercase content of the same file. JDBC (Database connectivity with MS- Access)
/*
Set up the necessary dependencies:
Download and install the JDBC driver for MS Access. You can find the driver JAR file from the Microsoft website or other reliable sources.
Add the JDBC driver JAR file to your Java project's classpath.
 */
import java.io.*;
import java.sql.*;

public class Lab10_2 {
    public static void main(String[] args) {
        String filePath = "lab10_1_input.txt";
        String connectionUrl = "jdbc:ucanaccess://path/to/your/database.accdb";  //replace with connection url
        try {
            // Load the JDBC driver
            Class.forName("net.ucanaccess.jdbc.UcanaccessDriver");
            // Create a connection to the MS Access database
            Connection conn = DriverManager.getConnection(connectionUrl);
            // Read the file content
            String content = readFileContent(filePath);
            // Convert the content to uppercase
            String updatedContent = content.toUpperCase();
            // Update the file content in the database
            updateFileContent(conn, filePath, updatedContent);
            // Close the database connection
            conn.close();
            System.out.println("File content converted to uppercase and updated successfully.");
        } catch (Exception e) {  e.printStackTrace(); }
    }

    // Method to read file content
    private static String readFileContent(String filePath) throws IOException {
        StringBuilder content = new StringBuilder();
        BufferedReader reader = new BufferedReader(new FileReader(filePath));
        String line;
        while ((line = reader.readLine()) != null) { content.append(line).append("\n"); }
        reader.close();
        return content.toString();
    }

    // Method to update file content in the database
    private static void updateFileContent(Connection conn, String filePath, String updatedContent) throws SQLException {
        String updateQuery = "UPDATE YourTableName SET FileContent = ? WHERE FilePath = ?";
        PreparedStatement pstmt = conn.prepareStatement(updateQuery);
        pstmt.setString(1, updatedContent);
        pstmt.setString(2, filePath);
        pstmt.executeUpdate();
        pstmt.close();
    }
}
/*
Make sure your MS Access database has a table with the required columns to store the file path and its content. Adjust the table name and column names in the updateFileContent method as per your database structure.
Run the FileToUpperJDBC class, and it will read the content of the specified file, convert it to uppercase, and update the corresponding file content in the MS Access database.
 */
