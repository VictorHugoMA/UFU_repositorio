package personagens;
import comportamentos.*;

public class Jogador02 extends Jogador {

	public Jogador02(){
		this.setCorrida(new CorridaRapida());
		this.setAtaque(new AtaqueMedio());
	}
}
