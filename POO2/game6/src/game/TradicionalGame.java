package game;

import fabrica.*;
import personagens.*;

public class TradicionalGame extends Game {

	public Jogador criarPersonagem() {
		return AdvancedJogadorFactory.criarPersonagem();
	}
	
	public Inimigo criarInimigo(int tipo, int x, int y) {
		return SimpleInimigoFactory.criarInimigo(tipo, x, y);
	}
}
