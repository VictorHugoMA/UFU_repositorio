package personagens;
import java.util.Observable;

import comportamentos.*;
import estados.*;

public class Personagem extends Observable {
	private Corrida corrida;
	private Ataque ataque;
	private Estado estado;
	private int life;
	private int x, y;
	
	public Personagem() {
		this.setLife(70);
		this.setEstado(new EstadoNormal(this));
	}
	public Personagem(int x, int y) {
		this.setLife(70);
		this.setEstado(new EstadoNormal(this));
		this.setPosicao(x, y);
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
		this.getEstado().perderLife(life);
		System.out.println(this.toString());
		System.out.println("Perdeu: " + life);
		System.out.println("Life: " + this.getLife());
		System.out.println("Estado: " + this.getEstado().getClass().getName());
		System.out.println("----------------------------------------");
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
	
}
