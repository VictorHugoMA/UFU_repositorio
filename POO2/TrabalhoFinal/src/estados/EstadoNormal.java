package estados;
import personagens.Personagem;
import comportamentos.AtaqueMedio;
import comportamentos.CorridaMedia;

public class EstadoNormal extends Estado {
	
	public EstadoNormal(Personagem personagem) {
		super(personagem);
		this.getPersonagem().setAtaque(AtaqueMedio.getInstancia());
		this.getPersonagem().setCorrida(CorridaMedia.getInstancia());
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
