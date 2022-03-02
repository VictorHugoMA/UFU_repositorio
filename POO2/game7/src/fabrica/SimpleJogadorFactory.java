package fabrica;

import personagens.*;

public class SimpleJogadorFactory {
	public static Jogador criarPersonagem() {
		double valor = Math.random();
		if(valor<=0.2) {
			return new Jogador01();
		}
		else if(valor<=0.4) {
			return new Jogador02();
		}
		else if(valor<=0.6) {
			return new Jogador03();
		}
		else if(valor<=0.8) {
			return new Jogador04();
		}
		else {
			return new Jogador05();
		}
			
	}
}
