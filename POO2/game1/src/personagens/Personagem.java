package personagens;
import comportamentos.*;

public abstract class Personagem {
	private Pulo pulo;
	private Corrida corrida;
	private Ataque ataque;
	
	public Pulo getPulo() {
		return pulo;
	}
	public void setPulo(Pulo pulo) {
		this.pulo = pulo;
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
	
	public void pular() {
		pulo.pular();
	}
	
	public void correr() {
		corrida.correr();
	}
	
	public void atacar() {
		ataque.atacar();
	}
	
	
}
