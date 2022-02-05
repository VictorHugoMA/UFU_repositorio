package ex2;

public class EstadoDisponivel extends Estado {

	public EstadoDisponivel(Produto produto) {
		super(produto);
	}

	public void setLimites() {
		this.setLimiteInferior(11);

	}

	public void verificaAlteracaoEstado() {
		if(this.getProduto().getQuantidadeEstoque()<this.getLimiteInferior()) {
			this.getProduto().setEstado(new EstadoCritico(this.getProduto()));
			this.getProduto().getEstado().verificaAlteracaoEstado();
		}

	}

}
