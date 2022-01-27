package game;
import java.awt.Color;
import java.awt.Graphics;
import java.awt.Graphics2D;
import java.awt.RenderingHints;
import java.awt.event.*;
import java.awt.image.BufferedImage;
import java.util.Observer;
import javax.imageio.ImageIO;
import javax.swing.JFrame;
import javax.swing.JPanel;

import personagens.*;

public class Game extends JPanel {

    private Jogador jogador;
    private Inimigo01 inimigo01;
    private Inimigo02 inimigo02;
    private Inimigo03 inimigo03;
    private BufferedImage imagemJogador ,imagemInimigo1, imagemInimigo2, imagemInimigo3;
    private int atacouFlag = 0;

    public Game() {
        KeyListener listener = new MyKeyListener();
        addKeyListener(listener);
        setFocusable(true);
        try {
        	imagemJogador = ImageIO.read(getClass().getResourceAsStream("/Jogador.png"));
        	imagemInimigo1 = ImageIO.read(getClass().getResourceAsStream("/inimigoVortex.png"));
        	imagemInimigo2 = ImageIO.read(getClass().getResourceAsStream("/inimigoRoxo.png"));
        	imagemInimigo3 = ImageIO.read(getClass().getResourceAsStream("/inimigoVermelho.png"));
        }
        catch (Exception e) {
			e.printStackTrace();
		}
    }       
    
    public class MyKeyListener implements KeyListener {
        @Override
        public void keyTyped(KeyEvent e) {
        	
        }

        @Override
        public void keyPressed(KeyEvent e) {               
            if (e.getKeyCode() == KeyEvent.VK_SPACE) {
            	jogador.atacar2D(inimigo01);        
            	jogador.atacar2D(inimigo02);        
            	jogador.atacar2D(inimigo03);
            	atacouFlag =1;
            }
        }

        @Override
        public void keyReleased(KeyEvent e) {
        	 if (e.getKeyCode() == KeyEvent.VK_SPACE) {
        		 atacouFlag = 0;
        	 }
        }
        
    }
    
    
    public void paint(Graphics g) {
        super.paint(g);

        Graphics2D g2d = (Graphics2D) g;

        g2d.setRenderingHint(RenderingHints.KEY_ANTIALIASING, RenderingHints.VALUE_ANTIALIAS_ON);
        
        g2d.setColor(Color.LIGHT_GRAY);
        g2d.fillRect(0, 0, 2000, 2000);
        g2d.drawImage(imagemJogador, jogador.getX(), jogador.getY(), 50, 50, null);
        g2d.drawImage(imagemInimigo1, inimigo01.getX(), inimigo01.getY(), 30, 30, null);
        g2d.drawImage(imagemInimigo2, inimigo02.getX(), inimigo02.getY(), 30, 30, null);
        g2d.drawImage(imagemInimigo3, inimigo03.getX(), inimigo03.getY(), 30, 30, null);

        g2d.setColor(Color.BLACK);
        g2d.drawString("Life Jogador: "+ jogador.getLife(), 20, 20);
        g2d.drawString("Inimigos restantes: "+ jogador.countObservers(), 20, 35);
        
        if(atacouFlag==1) {
        	g2d.drawString("Atacou", 20, 55);
        }
        else {
        	g2d.drawString("", 20, 55);
        }
        
        if(jogador.countObservers()==0) {
        	g2d.drawString("VITORIA", 300, 300);        	
        }
        if(jogador.getLife()==0) {
        	g2d.drawString("GAME OVER", 300, 300);
        }
        

        
    }

    public void jogar(Game game) throws InterruptedException {
        
        JFrame frame = new JFrame("Game");
        frame.add(game);
        frame.setSize(700, 700);
        frame.setVisible(true);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);        
        
        jogador = new Jogador(250,250, true);
        inimigo01 = new Inimigo01(10,450);
        inimigo02 = new Inimigo02(300,50);
        inimigo03 = new Inimigo03(450,250);

        
        jogador.addObserver(inimigo01);
        jogador.addObserver(inimigo02);
        jogador.addObserver(inimigo03);
      
        
        while (jogador.getLife()!=0) {
        	jogador.show();           
            game.repaint();
            Thread.sleep(50);
        }
    }
}

