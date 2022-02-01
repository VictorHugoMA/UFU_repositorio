package estados;
import personagens.Personagem;
import comportamentos.AtaqueMedio;
import comportamentos.CorridaMedia;

public class EstadoNormal extends Estado {
	
	public EstadoNormal(Personagem personagem) {
		super(personagem);
		this.getPersonagem().setAtaque(new AtaqueMedio());
		this.getPersonagem().setCorrida(new CorridaMedia());
	}

	
	protected void setLimites() {
		this.setLimiteInferior(30);
		this.setLimiteSuperior(70);

	}

	
	protected void verificaAlteracaoEstado() {
		if(this.getPersonagem().getLife()<this.getLimiteInferior()) {
			this.getPersonagem().setEstado(new EstadoPerigo(this.getPersonagem()));
			this.getPersonagem().getEstado().verificaAlteracaoEstado();
		}
		else if(this.getPersonagem().getLife()>this.getLimiteSuperior()) {
			this.getPersonagem().setEstado(new EstadoForte(this.getPersonagem()));
		}

	}

}
