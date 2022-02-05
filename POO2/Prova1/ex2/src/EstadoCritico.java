package ex2;

public class EstadoCritico extends Estado {

	public EstadoCritico(Produto produto) {
		super(produto);
	}

	public void setLimites() {
		this.setLimiteInferior(1);
		this.setLimiteSuperior(10);
	}

	public void verificaAlteracaoEstado() {
		if(this.getProduto().getQuantidadeEstoque()<this.getLimiteInferior()) {
			this.getProduto().setEstado(new EstadoIndisponivel(this.getProduto()));
		}
		else if(this.getProduto().getQuantidadeEstoque()>this.getLimiteSuperior()) {
			this.getProduto().setEstado(new EstadoDisponivel(this.getProduto()));
		}

	}
	
	public boolean venda(int qtd) {
		System.out.println("Necessario Reposicao");
		if(this.getProduto().getQuantidadeEstoque()-qtd>=0) {
			this.getProduto().setQuantidadeEstoque(this.getProduto().getQuantidadeEstoque()-qtd);
			this.getProduto().getEstado().verificaAlteracaoEstado();
			return true;
		}
		else {
			return false;
		}
	}

}
