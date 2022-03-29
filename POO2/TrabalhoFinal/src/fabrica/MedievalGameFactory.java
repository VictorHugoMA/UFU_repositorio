package fabrica;

import estados.EstadoNormal;
import personagens.Inimigo;
import personagens.Jogador;
import personagens.Personagem;
import poderes.ArcoFlecha;

public class MedievalGameFactory implements GameFactory {
	private static MedievalGameFactory instancia = null;

	 private MedievalGameFactory() {
		 super();
	 }
	 
	 public static synchronized MedievalGameFactory getInstancia() {
		 if (instancia == null) {
			 instancia = new MedievalGameFactory();			 
		 }
		 return instancia;
	 }
	
	public Personagem createPersonagem() {
		Jogador jogador = new Jogador(250,250, true);
		jogador.setAtaque(new ArcoFlecha(jogador.getAtaque()));
		
		return jogador;
		
	}

	public Inimigo createInimigo(int x, int y) {
		Inimigo inimigo =  new Inimigo(x, y);
		inimigo.setLife(70);
		inimigo.setEstado(new EstadoNormal(inimigo));
		inimigo.setAtaque(new ArcoFlecha(inimigo.getAtaque()));
		
		return inimigo;
	}

}
