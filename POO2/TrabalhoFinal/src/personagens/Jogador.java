package personagens;

import java.util.Observable;
import java.util.Observer;
import java.util.Random;

import equipamentos.Escudo;

public class Jogador extends Personagem {
	
	public Jogador(int x, int y) {
		super(x,y);
	}
	public Jogador(int x, int y , boolean escudo) {
		super(x,y, escudo);
	}
	public Jogador() {
		
	}

}
