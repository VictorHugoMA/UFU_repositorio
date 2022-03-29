package personagens;
import comportamentos.*;

public class Jogador02 extends Jogador {

	public Jogador02(){
		this.setCorrida(CorridaRapida.getInstancia());
		this.setAtaque(AtaqueMedio.getInstancia());
	}
}
