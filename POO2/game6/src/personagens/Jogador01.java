package personagens;
import comportamentos.*;

public class Jogador01 extends Jogador {
	
	public Jogador01(){
		this.setCorrida(new CorridaRapida());
		this.setAtaque(new AtaqueForte());
	}
}
