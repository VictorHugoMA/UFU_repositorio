package personagens;
import comportamentos.*;

public class Jogador04 extends Jogador {
	
	public Jogador04(){
		this.setCorrida(CorridaDevagar.getInstancia());
		this.setAtaque(AtaqueFraco.getInstancia());
	}
}
