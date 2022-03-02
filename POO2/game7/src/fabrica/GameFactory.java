package fabrica;

import personagens.*;

public interface GameFactory {
	public Personagem createPersonagem();
	public Inimigo createInimigo(int x, int y);
}
