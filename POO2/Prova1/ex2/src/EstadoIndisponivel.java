package ex2;

public class EstadoIndisponivel extends Estado{
	
	public EstadoIndisponivel(Produto produto) {
		super(produto);
	
	}

	public void setLimites() {
		this.setLimiteInferior(0);
		this.setLimiteSuperior(0);		
	}

	public void verificaAlteracaoEstado() {
		if(this.getProduto().getQuantidadeEstoque()>this.getLimiteSuperior()) {
			this.getProduto().setEstado(new EstadoCritico(this.getProduto()));
			this.getProduto().getEstado().verificaAlteracaoEstado();
		}
		
	}

}
