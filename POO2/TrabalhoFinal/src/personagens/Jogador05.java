package personagens;
import comportamentos.*;

public class Jogador05 extends Jogador {
	
	public Jogador05(){
		this.setCorrida(CorridaDevagar.getInstancia());
		this.setAtaque(AtaqueForte.getInstancia());
	}
}
