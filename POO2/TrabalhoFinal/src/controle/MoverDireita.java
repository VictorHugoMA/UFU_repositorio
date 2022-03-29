package controle;

import personagens.Personagem;

public class MoverDireita implements Command {
	private Personagem personagem;

	public MoverDireita(Personagem personagem) {
		this.setPersonagem(personagem);
	}
	
	public void execute() {
		this.getPersonagem().moverDireita();
	}

	
	public Personagem getPersonagem() {
		return personagem;
	}

	public void setPersonagem(Personagem personagem) {
		this.personagem = personagem;
	}
	
}