package fabrica;

import personagens.*;
import poderes.*;

public class AdvancedJogadorFactory {
	public static Jogador criarPersonagem() {
		Jogador jogador = new Jogador(250,250, true);
		double valor = Math.random();
		if(valor<=0.2) {
			jogador.setAtaque(new Eletrico(jogador.getAtaque()));
		}
		else if(valor<=0.4) {
			jogador.setAtaque(new Chamas(jogador.getAtaque()));
		}
		else if(valor<=0.6) {
			jogador.setAtaque(new Necrose(jogador.getAtaque()));
		}
		else if(valor<=0.8) {
			jogador.setAtaque(new Chamas(jogador.getAtaque()));
			jogador.setAtaque(new Necrose(jogador.getAtaque()));
		}
		else if(valor<=1.0) {
			jogador.setAtaque(new Necrose(jogador.getAtaque()));
			jogador.setAtaque(new Eletrico(jogador.getAtaque()));
			jogador.setAtaque(new Chamas(jogador.getAtaque()));
		}
			
		
		return jogador;
	}
}
