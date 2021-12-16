package personagens;
import comportamentos.*;
import estados.*;

public class Personagem {
	private Corrida corrida;
	private Ataque ataque;
	private Estado estado;
	private int life;
	
	public Personagem() {
		this.setLife(70);
		this.setEstado(new EstadoNormal(this));
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
	
	
	public void correr() {
		corrida.correr();
	}
	
	public void atacar() {
		ataque.atacar();
	}
	
	public void ganharLife(int life) {
		this.getEstado().ganharLife(life);
		System.out.println("Ganhou: " + life);
		System.out.println("Life: " + this.getLife());
		System.out.println("Estado: " + this.getEstado().getClass().getName());
	}
	
	public void perderLife(int life) {
		this.getEstado().perderLife(life);
		System.out.println("Perdeu: " + life);
		System.out.println("Life: " + this.getLife());
		System.out.println("Estado: " + this.getEstado().getClass().getName());
	}
	
}
