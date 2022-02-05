package ex2;

public abstract class Estado {
	private Produto produto;
	private int limiteInferior, limiteSuperior;
	
	public Estado(Produto produto) {
		this.setProduto(produto);
		this.setLimites();
	}
	
	public abstract void setLimites();
	public abstract void verificaAlteracaoEstado();
	
	
	public void compra(int qtd) {
		this.getProduto().setQuantidadeEstoque(this.getProduto().getQuantidadeEstoque()+qtd);
		this.verificaAlteracaoEstado();
	}
	
	public boolean venda(int qtd) {
		if(this.getProduto().getQuantidadeEstoque()-qtd>=0) {
			this.getProduto().setQuantidadeEstoque(this.getProduto().getQuantidadeEstoque()-qtd);
			this.verificaAlteracaoEstado();
			return true;
		}
		else {
			return false;
		}
	}
	
	
	public Produto getProduto() {
		return produto;
	}
	public void setProduto(Produto produto) {
		this.produto = produto;
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
