package personagens;
import comportamentos.*;

public class Personagem01 extends Personagem {
	
	public Personagem01(){
		this.setCorrida(new CorridaMedia());
		this.setAtaque(new AtaqueForte());
	}
}
