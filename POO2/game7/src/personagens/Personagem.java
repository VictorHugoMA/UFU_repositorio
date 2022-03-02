package personagens;
import java.util.Observable;

import comportamentos.*;
import equipamentos.Escudo;
import equipamentos.EscudoArmadura;
import equipamentos.EscudoMao;
import estados.*;

public class Personagem extends Observable {
	private Corrida corrida;
	private Ataque ataque;
	private Estado estado;
	private int life;
	private int x, y;
	private Escudo escudo;
	
	public Personagem() {
		this.setLife(70);
		this.setEstado(new EstadoNormal(this));
	}
	public Personagem(int x, int y) {
		this.setLife(70);
		this.setEstado(new EstadoNormal(this));
		this.setPosicao(x, y);
	}
	public Personagem(int x, int y, boolean escudo) {
		this.setLife(70);
		this.setEstado(new EstadoNormal(this));
		this.setPosicao(x, y);
		if(escudo) {
			this.ganharEscudos();			
		}
	}
	
	public int correr() {
		return corrida.correr();
	}
	
	public int atacar() {
		return ataque.atacar();
	}
	
	public void ganharLife(int life) {
		this.getEstado().ganharLife(life);
		System.out.println("Ganhou: " + life);
		System.out.println("Life: " + this.getLife());
		System.out.println("Estado: " + this.getEstado().getClass().getName());
	}
	
	public void perderLife(int life) {
		System.out.println(this.toString());
		
		if(this.getEscudo()!=null) {
			int lifeSofrida = escudo.protegeAtaque(life);
			this.getEstado().perderLife(lifeSofrida);
			System.out.println("Recebeu de dano: " + life);
			System.out.println("Defendeu: " + (life-lifeSofrida));
			System.out.println("Perdeu: " + lifeSofrida);			
		}
		else {
			this.getEstado().perderLife(life);			
			System.out.println("Perdeu: " + life);
		}
		System.out.println("Life: " + this.getLife());
		System.out.println("Estado: " + this.getEstado().getClass().getName());
		System.out.println("----------------------------------------");
	}
	
	public void ganharEscudos() {
		Escudo escudoMao = new EscudoMao();
		Escudo escudoArmadura = new EscudoArmadura();
		
		escudoMao.setProximoEscudo(escudoArmadura);
		escudoArmadura.setProximoEscudo(null);
		
		this.setEscudo(escudoMao);
	}
	
	public void perderEscudos() {
		this.setEscudo(null);
	}
	
	public void setPosicao(int x, int y) {
		this.setX(x);
		this.setY(y);
		setChanged();
		notifyObservers(this);
		
	}
	
	public void show() {
		setChanged();
		notifyObservers(this);
	}
	
	public Corrida getCorrida() {
		return corrida;
	}
	public void setCorrida(Corrida corrida) {
		this.corrida = corrida;
	}
	public Ataque getAtaque() {
		return ataque;
	}

	public void setAtaque(Ataque ataque) {
		this.ataque = ataque;
	}
	
	public Estado getEstado() {
		return estado;
	}
	public void setEstado(Estado estado) {
		this.estado = estado;
	}
	public int getLife() {
		return life;
	}
	public void setLife(int life) {
		this.life = life;
	}
	
	public int getX() {
		return x;
	}

	public void setX(int x) {
		this.x = x;
	}

	public int getY() {
		return y;
	}

	public void setY(int y) {
		this.y = y;
	}
	
	public Escudo getEscudo() {
		return escudo;
	}
	
	public void setEscudo(Escudo escudo) {
		this.escudo = escudo;
	}
	
}
