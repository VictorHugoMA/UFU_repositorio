package personagens;

import fases.Fase;
import fases.FimGame;
import fases.Mundo;
import game.*;

public class Main_V9 {

	public static void main(String[] args) throws Exception {
		Game g = new TradicionalGame();
		g.jogarFases(g);
        
	}

}
