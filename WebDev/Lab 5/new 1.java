   panel4.addMouseListener(new MouseListener() {
            @Override
            public void mouseClicked(MouseEvent e) {
                System.out.println("Mouse clicked the panel");
            }

            @Override
            public void mousePressed(MouseEvent e) {
                if (SwingUtilities.isLeftMouseButton(e)) {
                    System.out.println("Mouse left clicked the panel");
                    JOptionPane.showMessageDialog(null, "Mouse left clicked the panel");
                }
                if (SwingUtilities.isRightMouseButton(e)) {
                    System.out.println("Mouse right clicked the panel");
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
                System.out.println("Mouse exited the panel");
                JOptionPane.showMessageDialog(null, "Mouse exited the panel");
            }
        });