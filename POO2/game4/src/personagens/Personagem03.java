package personagens;
import comportamentos.*;

public class Personagem03 extends Personagem {
	
	public Personagem03(){
		this.setCorrida(new CorridaRapida());
		this.setAtaque(new AtaqueForte());
	}
}
