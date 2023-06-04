// Develop Scientific Calculator using Swing.
import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class Lab11_2 extends JFrame implements ActionListener {

    private JTextField displayField;

    public Lab11_2() {
        setTitle("Scientific Calculator");
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setSize(300, 400);

        // Create the display field
        displayField = new JTextField();
        displayField.setPreferredSize(new Dimension(280, 40));
        displayField.setFont(new Font("Arial", Font.PLAIN, 18));
        displayField.setHorizontalAlignment(JTextField.RIGHT);
        displayField.setEditable(false);

        // Create the buttons
        JButton btn0 = new JButton("0");
        JButton btn1 = new JButton("1");
        JButton btn2 = new JButton("2");
        JButton btn3 = new JButton("3");
        JButton btn4 = new JButton("4");
        JButton btn5 = new JButton("5");
        JButton btn6 = new JButton("6");
        JButton btn7 = new JButton("7");
        JButton btn8 = new JButton("8");
        JButton btn9 = new JButton("9");
        JButton btnPlus = new JButton("+");
        JButton btnMinus = new JButton("-");
        JButton btnMultiply = new JButton("*");
        JButton btnDivide = new JButton("/");
        JButton btnPercentage = new JButton("%");
        JButton btnExponential = new JButton("^");
        JButton btnEquals = new JButton("=");

        // Set up the layout
        setLayout(new BorderLayout());
        JPanel buttonPanel = new JPanel(new GridLayout(5, 4));
        buttonPanel.add(btn7);
        buttonPanel.add(btn8);
        buttonPanel.add(btn9);
        buttonPanel.add(btnDivide);
        buttonPanel.add(btn4);
        buttonPanel.add(btn5);
        buttonPanel.add(btn6);
        buttonPanel.add(btnMultiply);
        buttonPanel.add(btn1);
        buttonPanel.add(btn2);
        buttonPanel.add(btn3);
        buttonPanel.add(btnMinus);
        buttonPanel.add(btn0);
        buttonPanel.add(btnPercentage);
        buttonPanel.add(btnExponential);
        buttonPanel.add(btnPlus);
        buttonPanel.add(btnEquals);

        // Add components to the frame
        add(displayField, BorderLayout.NORTH);
        add(buttonPanel, BorderLayout.CENTER);

        // Add action listeners to the buttons
        btn0.addActionListener(this);
        btn1.addActionListener(this);
        btn2.addActionListener(this);
        btn3.addActionListener(this);
        btn4.addActionListener(this);
        btn5.addActionListener(this);
        btn6.addActionListener(this);
        btn7.addActionListener(this);
        btn8.addActionListener(this);
        btn9.addActionListener(this);
        btnPlus.addActionListener(this);
        btnMinus.addActionListener(this);
        btnMultiply.addActionListener(this);
        btnDivide.addActionListener(this);
        btnPercentage.addActionListener(this);
        btnExponential.addActionListener(this);
        btnEquals.addActionListener(this);

        setVisible(true);
    }

    @Override
    public void actionPerformed(ActionEvent e) {
        String command = e.getActionCommand();

        if (command.equals("=")) {
            calculateResult();
        } else {
            displayField.setText(displayField.getText() + command);
        }
    }

    private void calculateResult() {
        String input = displayField.getText();
        double result = 0;

        try {
            result = evaluateExpression(input);
            displayField.setText(Double.toString(result));
        } catch (ArithmeticException | IllegalArgumentException ex) {
            displayField.setText("Error: " + ex.getMessage());
        }
    }

    private double evaluateExpression(String input) {
        return new Object() {
            int pos = -1, ch;

            void nextChar() {
                ch = (++pos < input.length()) ? input.charAt(pos) : -1;
            }

            boolean eat(int charToEat) {
                while (ch == ' ')
                    nextChar();
                if (ch == charToEat) {
                    nextChar();
                    return true;
                }
                return false;
            }

            double parse() {
                nextChar();
                double x = parseExpression();
                if (pos < input.length())
                    throw new IllegalArgumentException("Unexpected: " + (char) ch);
                return x;
            }

            double parseExpression() {
                double x = parseTerm();
                for (;;) {
                    if (eat('+'))
                        x += parseTerm();
                    else if (eat('-'))
                        x -= parseTerm();
                    else
                        return x;
                }
            }

            double parseTerm() {
                double x = parseFactor();
                for (;;) {
                    if (eat('*'))
                        x *= parseFactor();
                    else if (eat('/'))
                        x /= parseFactor();
                    else if (eat('%'))
                        x %= parseFactor();
                    else if (eat('^'))
                        x = Math.pow(x, parseFactor());
                    else
                        return x;
                }
            }

            double parseFactor() {
                if (eat('+'))
                    return parseFactor();
                if (eat('-'))
                    return -parseFactor();

                double x;
                int startPos = this.pos;
                if (eat('(')) {
                    x = parseExpression();
                    eat(')');
                } else if ((ch >= '0' && ch <= '9') || ch == '.') {
                    while ((ch >= '0' && ch <= '9') || ch == '.')
                        nextChar();
                    x = Double.parseDouble(input.substring(startPos, this.pos));
                } else {
                    throw new IllegalArgumentException("Unexpected: " + (char) ch);
                }

                if (eat('!')) {
                    if (x < 0)
                        throw new IllegalArgumentException("Factorial of a negative number is undefined.");
                    x = factorial((int) x);
                }

                return x;
            }

            double factorial(int n) {
                if (n <= 1)
                    return 1;
                else
                    return n * factorial(n - 1);
            }
        }.parse();
    }

    public static void main(String[] args) {
        SwingUtilities.invokeLater(new Runnable() {
            public void run() {
                new Lab11_2();
            }
        });
    }
}
