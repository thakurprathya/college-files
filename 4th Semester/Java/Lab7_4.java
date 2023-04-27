//Develop an analog clock using applet.
//just run the program
import java.awt.*;
import java.applet.*;
import java.util.*;
import java.text.*;

public class Lab7_4 extends Applet implements Runnable {
    Thread t = null;
    int hours = 0, minutes = 0, seconds = 0;
    String timeString = "";
    int x = 0, y = 0;

    public void init() {
        setBackground(Color.white);
    }

    public void start() {
        t = new Thread(this);
        t.start();
    }

    public void run() {
        try {
            while (true) {
                Calendar cal = Calendar.getInstance();
                hours = cal.get(Calendar.HOUR_OF_DAY);
                if (hours > 12) hours -= 12;
                minutes = cal.get(Calendar.MINUTE);
                seconds = cal.get(Calendar.SECOND);

                SimpleDateFormat formatter = new SimpleDateFormat("hh:mm:ss");
                Date date = cal.getTime();
                timeString = formatter.format(date);

                x = (int) (Math.random() * 300);
                y = (int) (Math.random() * 300);

                repaint();
                Thread.sleep(1000); // Update once per second
            }
        } catch (Exception e) {
        }
    }

    private void drawHand(double angle, int radius, Graphics g) {
        angle -= 0.5 * Math.PI;
        int x = (int) (radius * Math.cos(angle));
        int y = (int) (radius * Math.sin(angle));
        g.drawLine(getWidth() / 2, getHeight() / 2, getWidth() / 2 + x, getHeight() / 2 + y);
    }

    public void paint(Graphics g) {
        // Draw the circle
        g.setColor(Color.black);
        g.drawOval(getWidth() / 2 - 100, getHeight() / 2 - 100, 200, 200);

        // Draw the marks
        for (int i = 0; i < 12; i++) {
            int x1 = (int) (Math.cos(i * Math.PI / 6) * 80);
            int y1 = (int) (Math.sin(i * Math.PI / 6) * 80);
            int x2 = (int) (Math.cos(i * Math.PI / 6) * 90);
            int y2 = (int) (Math.sin(i * Math.PI / 6) * 90);
            g.drawLine(getWidth() / 2 + x1, getHeight() / 2 + y1, getWidth() / 2 + x2, getHeight() / 2 + y2);
        }

        // Draw the hands
        g.setColor(Color.blue);
        drawHand(hours * Math.PI / 6 + (double) minutes / 60 * Math.PI / 6, 60, g);
        g.setColor(Color.green);
        drawHand((double) minutes / 30 * Math.PI, 80, g);
        g.setColor(Color.red);
        drawHand((double) seconds / 30 * Math.PI, 90, g);

        // Draw the digital time display
        // g.setColor(Color.black);
        // g.drawString(timeString, x, y);
    }

    public static void main(String[] args) {
        Frame f = new Frame("Analog Clock");
        Lab7_4 analogClock = new Lab7_4();
        f.add(analogClock);
        analogClock.init();
        analogClock.start();
        f.setSize(300, 300);
        f.setVisible(true);
    }
}
