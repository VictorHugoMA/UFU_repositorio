package estados;
import personagens.*;

public abstract class Estado {
	private Personagem personagem;
	private int limiteInferior;
	private int limiteSuperior;
	
	public Estado(Personagem personagem) {
		this.setPersonagem(personagem);
		this.setLimites();
	}
	
	protected abstract void setLimites();
	protected abstract void verificaAlteracaoEstado();
	
	public void ganharLife(int life) {
		this.personagem.setLife(this.personagem.getLife()+life);
		if(this.personagem.getLife()>100) {
			this.personagem.setLife(100);
		}
		this.verificaAlteracaoEstado();
	}
	
	public void perderLife(int life) {
		this.personagem.setLife(this.personagem.getLife()-life);
		if(this.personagem.getLife()<0) {
			this.personagem.setLife(0);
		}
		this.verificaAlteracaoEstado();	
	}

	
	public Personagem getPersonagem() {
		return personagem;
	}

	public void setPersonagem(Personagem personagem) {
		this.personagem = personagem;
	}

	public int getLimiteInferior() {
		return limiteInferior;
	}

	public void setLimiteInferior(int limiteInferior) {
		this.limiteInferior = limiteInferior;
	}

	public int getLimiteSuperior() {
		return limiteSuperior;
	}

	public void setLimiteSuperior(int limiteSuperior) {
		this.limiteSuperior = limiteSuperior;
	}
	
	
}
