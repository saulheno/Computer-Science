import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
import java.util.Random;

public class RandomGame extends JFrame implements ActionListener {
	JFrame frame;
	JLabel label2;
	JButton Generate, Check;
	JTextField Guess;
	int count;
	int randomNumber;
	int guess;
	String Entry, Out;
	
	public RandomGame(String title) {
		super(title);
		setSize(300,300);
	    setLayout(new GridLayout(3, 1));
	    
	    JPanel panel = new JPanel();
        JPanel panel2 = new JPanel();
        JPanel panel3 = new JPanel();
        
        Generate = new JButton("Generate!");
        panel.add(Generate);
        
        
        label2 = new JLabel("Guess :");
        Guess = new JTextField("Enter your guess",3);
        
        Guess.addFocusListener(new FocusListener() {
            @Override
            public void focusGained(FocusEvent e) {
                Guess.setText(""); // when text field is selected, removes the "Enter your guess"
            }

            @Override
            public void focusLost(FocusEvent e) {
                Guess.setText("Enter your guess"); // adds this back in if no entry is made into the text field
            }
            });
        panel2.add(label2);
        panel2.add(Guess);
        
        Check = new JButton("Check!");
        panel3.add(Check);
     
        
        Guess.addActionListener(this);
        Generate.addActionListener(this);
        Check.addActionListener(this);
	       
        setVisible(true);
	    add(panel, "North");
	    add(panel2, "Centre");
	    add(panel3, "South");
	}


public void actionPerformed(ActionEvent e) {
	JDialog d = new JDialog(frame, "dialog Box"); 
	d.setSize(300, 100);
	
	
	if (e.getSource() == Generate) {
		Random rand = new Random();
		int maximum = 100;
        randomNumber = rand.nextInt(maximum);
		count = 0;
		System.out.println(randomNumber);
		JLabel l = new JLabel("Number Generated!"); 	  
		d.add(l); 		   
		d.setVisible(true);
		
		
	} else if(e.getSource() == Check) {
		if(guess == randomNumber){
			count = count + 1;
            System.out.println("Correct");
            Out = "you Guessed correctly with " + count +" attempts!";
			JLabel l = new JLabel(Out); 	  
			d.add(l); 
			d.setVisible(true);
		}else if(guess < randomNumber) {
			 count = count + 1;
             System.out.println("Incorrect");
 			 JLabel l = new JLabel("You are too low!"); 	  
 			 d.add(l); 
 			 d.setVisible(true);
		}else if(guess > randomNumber) {
			 count = count + 1;
             System.out.println("Incorrect");
 			 JLabel l = new JLabel("You are too High!"); 	  
 			 d.add(l); 
 			 d.setVisible(true);
		} 
		
	} else if(e.getSource() == Guess) {
		Entry = Guess.getText();
        try {
            guess = Integer.parseInt(Entry);
        } catch (NumberFormatException exception) {
            JOptionPane.showMessageDialog(null, "Invalid guess"); // do this whenever anything that isn't an int is detected
            return;
        }
		
	}
	
}}