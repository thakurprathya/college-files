// Display the digital watch in swing tutorial in java
import javax.swing.*;
import java.awt.*;
import java.text.SimpleDateFormat;
import java.util.Date;

public class Lab11_3 extends JFrame {

    private JLabel timeLabel;

    public Lab11_3() {
        setTitle("Digital Watch");
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setSize(300, 100);
        setResizable(false);
        setLocationRelativeTo(null);

        // Create a label to display the time
        timeLabel = new JLabel();
        timeLabel.setHorizontalAlignment(SwingConstants.CENTER);
        timeLabel.setFont(new Font("Arial", Font.BOLD, 36));

        // Add the label to the frame
        add(timeLabel);

        // Start a thread to update the time continuously
        Thread timeThread = new Thread(() -> {
            while (true) {
                updateTime();
                try {
                    Thread.sleep(1000); // Update every second
                } catch (InterruptedException e) {
                    e.printStackTrace();
                }
            }
        });
        timeThread.start();

        setVisible(true);
    }

    private void updateTime() {
        // Get the current time
        Date now = new Date();
        SimpleDateFormat sdf = new SimpleDateFormat("HH:mm:ss");

        // Update the time label
        timeLabel.setText(sdf.format(now));
    }

    public static void main(String[] args) {
        SwingUtilities.invokeLater(Lab11_3::new);
    }
}
