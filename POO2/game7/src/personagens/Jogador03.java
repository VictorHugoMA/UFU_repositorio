package personagens;
import comportamentos.*;

public class Jogador03 extends Jogador {
	
	public Jogador03(){
		this.setCorrida(CorridaRapida.getInstancia());
		this.setAtaque(AtaqueForte.getInstancia());
	}
}
