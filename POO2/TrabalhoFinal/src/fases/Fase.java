package fases;

import game.Game;
import personagens.Personagem;

public class Fase implements Mundo {
	private Mundo caminho1, caminho2;
	private int qtdInimigo, velocidadeInimigo;
	private String nomeFase;
	
	
	public Fase(int qtdInimigo, int velocidadeInimigo, String nomeFase, Mundo caminho1, Mundo caminho2) {
		this.setQtdInimigo(qtdInimigo);
		this.setVelocidadeInimigo(velocidadeInimigo);
		this.setNomeFase(nomeFase);
		this.setCaminho1(caminho1);
		this.setCaminho2(caminho2);
	}
	

	public void progredir(Game g) throws Exception {
		double valor = Math.random();
			
		g.jogar(g);
		

        if (valor < 0.5) {
            System.out.println("Personagem pegou caminho 1"); 
            caminho1.progredir(g);
        }
        else {

            System.out.println("Personagem pegou caminho 2");   
            caminho2.progredir(g);

        }
	}
		
	
	public Mundo getCaminho1() {
		return caminho1;
	}
	public void setCaminho1(Mundo caminho1) {
		this.caminho1 = caminho1;
	}
	public Mundo getCaminho2() {
		return caminho2;
	}
	public void setCaminho2(Mundo caminho2) {
		this.caminho2 = caminho2;
	}
	public int getQtdInimigo() {
		return qtdInimigo;
	}
	public void setQtdInimigo(int qtdInimigo) {
		this.qtdInimigo = qtdInimigo;
	}
	public int getVelocidadeInimigo() {
		return velocidadeInimigo;
	}
	public void setVelocidadeInimigo(int velocidadeInimigo) {
		this.velocidadeInimigo = velocidadeInimigo;
	}
	public String getNomeFase() {
		return nomeFase;
	}
	public void setNomeFase(String nomeFase) {
		this.nomeFase = nomeFase;
	}


	
	
}
