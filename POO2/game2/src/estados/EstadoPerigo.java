package estados;
import comportamentos.AtaqueFraco;
import comportamentos.CorridaDevagar;
import personagens.*;

public class EstadoPerigo extends Estado {
	
	public EstadoPerigo(Personagem personagem) {
		super(personagem);
		this.getPersonagem().setAtaque(new AtaqueFraco());
		this.getPersonagem().setCorrida(new CorridaDevagar());
	}

	protected void setLimites() {
		this.setLimiteInferior(1);
		this.setLimiteSuperior(29);
		
	}
	
	protected void verificaAlteracaoEstado() {
		if(this.getPersonagem().getLife()<this.getLimiteInferior()) {
			this.getPersonagem().setEstado(new EstadoMorto(this.getPersonagem()));
		}
		else if(this.getPersonagem().getLife()>this.getLimiteSuperior()) {
			this.getPersonagem().setEstado(new EstadoNormal(this.getPersonagem()));
			this.getPersonagem().getEstado().verificaAlteracaoEstado();
		}

	}

	

}
