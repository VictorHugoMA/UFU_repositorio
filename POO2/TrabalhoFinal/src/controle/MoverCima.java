package controle;

import personagens.Personagem;

public class MoverCima implements Command {
	private Personagem personagem;

	public MoverCima(Personagem personagem) {
		this.setPersonagem(personagem);
	}
	
	public void execute() {
		this.getPersonagem().moverCima();
	}

	
	public Personagem getPersonagem() {
		return personagem;
	}

	public void setPersonagem(Personagem personagem) {
		this.personagem = personagem;
	}
	
}
