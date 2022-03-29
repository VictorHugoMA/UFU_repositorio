package personagens;
import comportamentos.*;

public class Jogador01 extends Jogador {
	
	public Jogador01(){
		this.setCorrida(CorridaRapida.getInstancia());
		this.setAtaque(AtaqueForte.getInstancia());
	}
}
