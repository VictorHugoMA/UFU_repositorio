package estados;
import personagens.Personagem;
import comportamentos.AtaqueForte;
import comportamentos.CorridaRapida;

public class EstadoForte extends Estado {
	
	public EstadoForte(Personagem personagem) {
		super(personagem);
		this.getPersonagem().setAtaque(new AtaqueForte());
		this.getPersonagem().setCorrida(new CorridaRapida());
	}

	
	protected void setLimites() {
		this.setLimiteInferior(71);
		this.setLimiteSuperior(100);

	}

	
	protected void verificaAlteracaoEstado() {
		if(this.getPersonagem().getLife()<this.getLimiteInferior()) {
			this.getPersonagem().setEstado(new EstadoNormal(this.getPersonagem()));
			this.getPersonagem().getEstado().verificaAlteracaoEstado();
		}

	}

}
