import javax.swing.*;
import java.awt.event.*;
import java.util.Random;

public class PasswordGenerator extends JFrame implements ActionListener {

    JLabel l1, l2;
    JTextField t1, t2;
    JButton b1;

    PasswordGenerator() {
        l1 = new JLabel("Enter Password Length:");
        l1.setBounds(50, 50, 150, 30);

        t1 = new JTextField();
        t1.setBounds(200, 50, 100, 30);

        b1 = new JButton("Generate Password");
        b1.setBounds(100, 100, 180, 30);

        l2 = new JLabel("Generated Password:");
        l2.setBounds(50, 150, 150, 30);

        t2 = new JTextField();
        t2.setBounds(200, 150, 150, 30);

        b1.addActionListener(this);

        add(l1);
        add(t1);
        add(b1);
        add(l2);
        add(t2);

        setSize(400, 300);
        setLayout(null);
        setVisible(true);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    }

    public void actionPerformed(ActionEvent e) {
        String chars = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789@#$%&*";
        Random rand = new Random();

        int length = Integer.parseInt(t1.getText());
        String password = "";

        for (int i = 0; i < length; i++) {
            password += chars.charAt(rand.nextInt(chars.length()));
        }

        t2.setText(password);
    }

    public static void main(String[] args) {
        new PasswordGenerator();
    }
}
