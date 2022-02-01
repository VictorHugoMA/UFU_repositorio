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
import poderes.*;

public class Game extends JPanel {

    private Jogador jogador;
    private InimigoArauto inimigoArauto;
    private InimigoBeholder inimigoBeholder;
    private InimigoEstirge inimigoEstirge;
    private BufferedImage imagemJogador ,imagemInimigoArauto, imagemInimigoBeholder, imagemInimigoEstirge;
    private int atacouFlag = 0;

    public Game() {
        KeyListener listener = new MyKeyListener();
        addKeyListener(listener);
        setFocusable(true);
        try {
        	imagemJogador = ImageIO.read(getClass().getResourceAsStream("/Jogador.png"));
        	imagemInimigoArauto = ImageIO.read(getClass().getResourceAsStream("/inimigoVortex.png"));
        	imagemInimigoBeholder = ImageIO.read(getClass().getResourceAsStream("/inimigoRoxo.png"));
        	imagemInimigoEstirge = ImageIO.read(getClass().getResourceAsStream("/inimigoVermelho.png"));
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
            	jogador.atacar2D(inimigoArauto);        
            	jogador.atacar2D(inimigoBeholder);        
            	jogador.atacar2D(inimigoEstirge);
            	atacouFlag =1;
            }
            if (e.getKeyCode() == KeyEvent.VK_LEFT)
            	jogador.setX(jogador.getX() - 5);
            
            if (e.getKeyCode() == KeyEvent.VK_RIGHT)
            	jogador.setX(jogador.getX() + 5);

            if (e.getKeyCode() == KeyEvent.VK_UP)
            	jogador.setY(jogador.getY() - 5);

            if (e.getKeyCode() == KeyEvent.VK_DOWN)
            	jogador.setY(jogador.getY() + 5);
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
        g2d.drawImage(imagemInimigoArauto, inimigoArauto.getX(), inimigoArauto.getY(), 30, 30, null);
        g2d.drawImage(imagemInimigoBeholder, inimigoBeholder.getX(), inimigoBeholder.getY(), 30, 30, null);
        g2d.drawImage(imagemInimigoEstirge, inimigoEstirge.getX(), inimigoEstirge.getY(), 30, 30, null);

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
        inimigoArauto = new InimigoArauto(10,450);
        inimigoBeholder = new InimigoBeholder(300,50);
        inimigoEstirge = new InimigoEstirge(450,250);

        
        jogador.addObserver(inimigoArauto);
        jogador.addObserver(inimigoBeholder);
        jogador.addObserver(inimigoEstirge);
        
        jogador.setAtaque(new Eletrico(jogador.getAtaque())); //adiciona poderes no ataque do jogador
        jogador.setAtaque(new Chamas(jogador.getAtaque()));
      
        
        while (jogador.getLife()!=0) {
        	jogador.show();           
            game.repaint();
            Thread.sleep(50);
        }
    }
}

