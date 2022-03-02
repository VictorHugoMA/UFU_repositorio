package estados;
import personagens.Personagem;

public class EstadoMorto extends Estado {

	public EstadoMorto(Personagem personagem) {
		super(personagem);
	}
	
	protected void setLimites() {
		this.setLimiteInferior(0);
		this.setLimiteSuperior(0);

	}

	
	protected void verificaAlteracaoEstado() {

	}

}
