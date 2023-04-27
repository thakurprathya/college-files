//Write an Applet that displays “Hello World” (Background color-black, text color-blue and your name in the status window.)
//just run the program
import java.applet.Applet;
import java.awt.*;

public class Lab7_3 extends Applet {

    public void init() {
        setBackground(Color.black);
        setForeground(Color.blue);
        Label lbl = new Label("Hello World");
        add(lbl);
    }

    public static void main(String[] args) {
        Lab7_3 applet = new Lab7_3();
        Frame frame = new Frame("Hello World Applet");
        frame.add(applet);
        frame.setSize(400, 300);
        applet.init();
        applet.start();
        frame.setVisible(true);
    }
}
