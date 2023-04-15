import java.io.File;

public class CLEANUPFILE {
    public static void main(String[] args) {
        String folderPath = "/Users/prathyathakur/programming/college-files/4th Semester/Java";
        File folder = new File(folderPath);
        if (folder.isDirectory()) {
            deleteClassFiles(folder);
            System.out.println("Cleanup completed!");
        } else {
            System.out.println("Invalid folder path.");
        }
    }

    private static void deleteClassFiles(File folder) {
        File[] files = folder.listFiles();
        for (File file : files) {
            if (file.isDirectory()) {
                deleteClassFiles(file);
            } else if (file.isFile() && file.getName().endsWith(".class")) {
                file.delete();
            }
        }
    }
}
