package controle;

import personagens.Personagem;

public class MoverEsquerda implements Command {
	private Personagem personagem;

	public MoverEsquerda(Personagem personagem) {
		this.setPersonagem(personagem);
	}
	
	public void execute() {
		this.getPersonagem().moverEsquerda();
	}

	
	public Personagem getPersonagem() {
		return personagem;
	}

	public void setPersonagem(Personagem personagem) {
		this.personagem = personagem;
	}
	
}