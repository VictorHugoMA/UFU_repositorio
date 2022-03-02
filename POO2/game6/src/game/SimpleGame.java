package game;

import fabrica.SimpleInimigoFactory;
import fabrica.SimpleJogadorFactory;
import personagens.Inimigo;
import personagens.Jogador;

public class SimpleGame extends Game {

	public Jogador criarPersonagem() {
		return SimpleJogadorFactory.criarPersonagem();
	}

	public Inimigo criarInimigo(int tipo, int x, int y) {
		return SimpleInimigoFactory.criarInimigo(tipo, x, y);
	}

}
