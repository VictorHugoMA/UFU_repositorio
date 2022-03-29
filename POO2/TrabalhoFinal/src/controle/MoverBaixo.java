package controle;

import personagens.Personagem;

public class MoverBaixo implements Command {
	private Personagem personagem;

	public MoverBaixo(Personagem personagem) {
		this.setPersonagem(personagem);
	}
	
	public void execute() {
		this.getPersonagem().moverBaixo();
	}

	
	public Personagem getPersonagem() {
		return personagem;
	}

	public void setPersonagem(Personagem personagem) {
		this.personagem = personagem;
	}
	
}