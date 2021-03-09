import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

public class MyGui extends JFrame implements ActionListener {
	JFrame frame;
	JLabel label2;
	JButton press, me;
	JTextField text;
	
	public MyGui() {
		frame = new JFrame("My First GUI");
	       frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
	       frame.setSize(400,400);
	       
	       JPanel panel = new JPanel();
	       JPanel panel2 = new JPanel();
	       
	       label2 = new JLabel("The Panel Is Here");
	       panel2.setBackground(Color.red);
	       panel2.add(label2);
	       
	       panel2.addMouseListener(new MouseListener() {
	    	   
	            @Override
	 	       public void mouseClicked(MouseEvent e) 
	       	    { 
	        			JDialog d = new JDialog(frame, "dialog Box"); 
	        			d.setSize(100, 100);
	    	    		JLabel l = new JLabel("you clicked!"); 	  
	    	   			d.add(l); 		   
	    	   			d.setVisible(true);  
	       	    } 

	            @Override
	            public void mousePressed(MouseEvent e) {
	                if (SwingUtilities.isLeftMouseButton(e)) {
	                    System.out.println("Mouse left clicked the panel");
	                    JOptionPane.showMessageDialog(null, "left click");
	                }
	                if (SwingUtilities.isRightMouseButton(e)) {
	                    System.out.println("right click");
	                    JOptionPane.showMessageDialog(null, "Mouse right clicked the panel");
	                }
	            }

	            @Override
	            public void mouseReleased(MouseEvent e) {
	                System.out.println("Mouse released the panel");
	            }

	            @Override
	            public void mouseEntered(MouseEvent e) {
	                System.out.println("Mouse entered the panel");
	                JOptionPane.showMessageDialog(null, "Mouse entered the panel");
	            }

	            @Override
	            public void mouseExited(MouseEvent e) {
	                System.out.println("Mouse left the panel");
	                JOptionPane.showMessageDialog(null, "Mouse exited the panel");
	            }
	        });
	       
	       press = new JButton("Press");
	       me = new JButton("Me");
	       
	       JLabel label = new JLabel("This is a Label");
	       
	       JCheckBox c1 = new JCheckBox("checkbox 1"); 
	       JCheckBox c2 = new JCheckBox("checkbox 2");
	       
	       JMenuBar menu = new JMenuBar();
	       JMenu parent = new JMenu("Parent");
	       JMenuItem child = new JMenuItem("Child");
	       
	       text = new JTextField("Name", 15);
	       
	       menu.add(parent);
	       parent.add(child);
	       
	       text.addActionListener(this);
	       press.addActionListener(this);
	       me.addActionListener(this);
	       
	       panel.add(press);
	       panel.add(me); 
	       panel.add(label);
	       panel.add(c1);
	       panel.add(c2);
	       panel.add(text);
	       
	       text.setToolTipText("This is the text field, and it takes input");
	       press.setToolTipText("This is the press button, and it displays a message when clicked");
	       me.setToolTipText("This is the me button, and it displays a message when clicked");
	       
	       frame.setVisible(true);
	       
	       frame.getContentPane().add(BorderLayout.NORTH, menu);
	       frame.getContentPane().add(panel, "Center");
	       frame.getContentPane().add(panel2, "South");
	}

	public static void main(String[] args) {

	}
	
	

	public void actionPerformed(ActionEvent e) {
		// TODO Auto-generated method stub
		JDialog d = new JDialog(frame, "dialog Box"); 
		d.setSize(300, 100);
		if (e.getSource() == press) {
			JLabel l = new JLabel("you pressed Press!"); 	  
			d.add(l); 		   
			d.setVisible(true); 
		} else if(e.getSource() == me) {
			JLabel l = new JLabel("you pressed Me!"); 	  
			d.add(l); 
			d.setVisible(true); 
		} else if(e.getSource() == text) {
			String entry = "You entered: " + text.getText();
			JLabel l = new JLabel(entry);
			d.add(l); 
			d.setVisible(true);
		}
		
	}}
