package game;
import java.awt.Color;
import java.awt.Graphics;
import java.awt.Graphics2D;
import java.awt.RenderingHints;
import java.awt.event.*;
import java.awt.image.BufferedImage;
import java.util.ArrayList;

import javax.imageio.ImageIO;
import javax.swing.JFrame;
import javax.swing.JPanel;

import controle.*;
import personagens.*;
import fases.*;

public abstract class Game extends JPanel {

    private Jogador jogador;
    private Inimigo inimigoArauto;
    private Inimigo inimigoBeholder;
    private Inimigo inimigoEstirge;
    private BufferedImage imagemJogador ,imagemInimigoArauto, imagemInimigoBeholder, imagemInimigoEstirge;
    private boolean atacouFlag = false;
    private Mundo fases = new Fase(10, 1, "Fase 1", new Fase(3, 5, "Fase 3", new FimGame(), new FimGame()), new Fase(1, 10, "Fase 2", new FimGame(), new FimGame()));
    private Controle c;

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
    
    public abstract Jogador criarPersonagem();
    public abstract Inimigo criarInimigo(int tipo, int x, int y);
    
    public class MyKeyListener implements KeyListener {
        @Override
        public void keyTyped(KeyEvent e) {
        	
        }

        @Override
        public void keyPressed(KeyEvent e) {               
            if (e.getKeyCode() == KeyEvent.VK_SPACE) {
            	c.pressionar(4);
            	atacouFlag = true;
            }
            if (e.getKeyCode() == KeyEvent.VK_LEFT)
            	c.pressionar(0);
            
            if (e.getKeyCode() == KeyEvent.VK_RIGHT)
            	c.pressionar(1);

            if (e.getKeyCode() == KeyEvent.VK_UP)
            	c.pressionar(2);

            if (e.getKeyCode() == KeyEvent.VK_DOWN)
            	c.pressionar(3);
            
            if (e.getKeyCode() == KeyEvent.VK_C)
            	c.pressionar(5);

        }

        @Override
        public void keyReleased(KeyEvent e) {
        	 if (e.getKeyCode() == KeyEvent.VK_SPACE) {
        		 atacouFlag = false;
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
        
        if(atacouFlag) {
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
    
    public void jogarFases(Game game) throws Exception {
    	this.fases.progredir(game);
    }

    public void jogar(Game game) throws InterruptedException {
        
        JFrame frame = new JFrame("Game");
        frame.add(game);
        frame.setSize(700, 700);
        frame.setVisible(true);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);        
        
        jogador = this.criarPersonagem();
        inimigoArauto = this.criarInimigo(1, 10, 450);
        inimigoBeholder = this.criarInimigo(2, 300,50);
        inimigoEstirge = this.criarInimigo(3, 450,250);
        

        
        jogador.addObserver(inimigoArauto);
        jogador.addObserver(inimigoBeholder);
        jogador.addObserver(inimigoEstirge);
        
        ArrayList<Inimigo> inimigos= new ArrayList<Inimigo>();
    	inimigos.add(inimigoArauto);
    	inimigos.add(inimigoBeholder);
    	inimigos.add(inimigoEstirge);
        
        c = new Controle();
        c.setCommand(new MoverEsquerda(jogador),0);
        c.setCommand(new MoverDireita(jogador),1);
        
        c.setCommand(new MoverCima(jogador),2);
        c.setCommand(new MoverBaixo(jogador),3);
        
        c.setCommand(new Atacar2D(jogador, inimigos),4);
        
        Macro macroDashDireita = new Macro();
        macroDashDireita.add(new MoverDireita(jogador));
        macroDashDireita.add(new MoverDireita(jogador));
        macroDashDireita.add(new MoverDireita(jogador));
        macroDashDireita.add(new MoverDireita(jogador));
 
        c.setCommand(macroDashDireita, 5);
        
        boolean flag = true;
        while(flag) {
        	if(jogador.getLife()==0 || jogador.countObservers()==0) {
        		flag = false;
        	}
        	jogador.show();
            game.repaint();
            Thread.sleep(50);
        }
        c.showLog();
    }
}

