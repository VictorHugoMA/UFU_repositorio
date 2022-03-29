package controle;

import java.util.ArrayList;

import personagens.Inimigo;
import personagens.Personagem;

public class Atacar2D implements Command {
	private Personagem personagem;
	private ArrayList<Inimigo> inimigos= new ArrayList<Inimigo>();

	public Atacar2D(Personagem personagem, ArrayList<Inimigo> inimigos) {
		this.setPersonagem(personagem);
		this.setInimigos(inimigos);
	}
	
	public void execute() {
		for (int i = 0; i < inimigos.size(); i++) {
		      this.getPersonagem().atacar2D(inimigos.get(i));
		    }
	}

	
	public Personagem getPersonagem() {
		return personagem;
	}

	public void setPersonagem(Personagem personagem) {
		this.personagem = personagem;
	}

	public ArrayList<Inimigo> getInimigos() {
		return inimigos;
	}

	public void setInimigos(ArrayList<Inimigo> inimigos) {
		this.inimigos = inimigos;
	}

	
	
	
	
}
