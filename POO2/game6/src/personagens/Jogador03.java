package personagens;
import comportamentos.*;

public class Jogador03 extends Jogador {
	
	public Jogador03(){
		this.setCorrida(new CorridaRapida());
		this.setAtaque(new AtaqueForte());
	}
}
