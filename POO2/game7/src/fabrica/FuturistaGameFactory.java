package fabrica;

import estados.EstadoNormal;
import personagens.Inimigo;
import personagens.Jogador;
import personagens.Personagem;
import poderes.Laser;

public class FuturistaGameFactory implements GameFactory {
	private static FuturistaGameFactory instancia = null;

	 private FuturistaGameFactory() {
		 super();
	 }
	 
	 public static synchronized FuturistaGameFactory getInstancia() {
		 if (instancia == null) {
			 instancia = new FuturistaGameFactory();			 
		 }
		 return instancia;
	 }

	
	public Personagem createPersonagem() {
		Jogador jogador = new Jogador(250,250, true);
		jogador.setAtaque(new Laser(jogador.getAtaque()));
		
		return jogador;
		
	}
	
	public Inimigo createInimigo(int x, int y) {
		Inimigo inimigo =  new Inimigo(x, y);
		inimigo.setLife(70);
		inimigo.setEstado(new EstadoNormal(inimigo));
		inimigo.setAtaque(new Laser(inimigo.getAtaque()));
		
		return inimigo;
	}

}
