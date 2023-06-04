//WAP that displays your name whenever the mouse is clicked in java
import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

public class Lab9_2 extends JFrame implements MouseListener {
    private JLabel nameLabel;
    public Lab9_2() {
        setTitle("Lab 9.2");  setSize(300, 200);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        nameLabel = new JLabel("Click to display your name");
        nameLabel.setHorizontalAlignment(SwingConstants.CENTER);
        add(nameLabel); addMouseListener(this); setVisible(true);
    }

    public void mouseClicked(MouseEvent e) {
        String name = JOptionPane.showInputDialog(this, "Enter your name:");
        if (name != null && !name.isEmpty()) { nameLabel.setText("Your name: " + name); }
    }

    public void mouseEntered(MouseEvent e) {}
    public void mouseExited(MouseEvent e) {}
    public void mousePressed(MouseEvent e) {}
    public void mouseReleased(MouseEvent e) {}

    public static void main(String[] args) {
        SwingUtilities.invokeLater(() -> { new Lab9_2(); });
    }
}
