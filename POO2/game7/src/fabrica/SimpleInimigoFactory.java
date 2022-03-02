package fabrica;

import personagens.*;

public class SimpleInimigoFactory {
	public static Inimigo criarInimigo(int tipo, int x, int y) {
		if(tipo==1) {
			return new InimigoArauto(x, y);
		}
		else if(tipo==2) {
			return new InimigoBeholder(x, y);
		}
		else if(tipo==3) {
			return new InimigoEstirge(x, y);
		}
		else {
			return new Inimigo(x, y);
		}
			
	}
}
