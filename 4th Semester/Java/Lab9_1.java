//WAP that illustrates how to process mouse click, enter, exit, press and release events. The background color changes when the mouse is entered, clicked, pressed, released or exited in java.
import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

public class Lab9_1 extends JFrame implements MouseListener {
    private JPanel panel;

    public Lab9_1() {
        setTitle("Mouse Events Example");
        setSize(300, 300);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        panel = new JPanel();
        add(panel);
        panel.addMouseListener(this);
        setVisible(true);
    }

    public void mouseClicked(MouseEvent e) { panel.setBackground(Color.YELLOW); }
    public void mouseEntered(MouseEvent e) { panel.setBackground(Color.GREEN); }
    public void mouseExited(MouseEvent e) { panel.setBackground(Color.WHITE); }
    public void mousePressed(MouseEvent e) { panel.setBackground(Color.BLUE); }
    public void mouseReleased(MouseEvent e) { panel.setBackground(Color.RED); }

    public static void main(String[] args) {
        SwingUtilities.invokeLater(() -> {
            new Lab9_1();
        });
    }
}
