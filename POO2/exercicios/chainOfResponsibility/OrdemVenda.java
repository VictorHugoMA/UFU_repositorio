package chainOfResponsibility;
public class OrdemVenda {
	private OrdemVenda sucessor;
	
	private int codigoAcao, qtdAcao;
	private float precoAcao;
	
	public OrdemVenda(int cod, int qtd, float preco) {
		this.setCodigoAcao(cod);
		this.setQtdAcao(qtd);
		this.setPrecoAcao(preco);
	}
	
	public boolean processaVenda(OrdemCompra compra) {
		if(compra.getCodigoAcao() == this.getCodigoAcao() && compra.getQtdAcao()<=this.getQtdAcao() && compra.getPrecoAcao() >= this.getPrecoAcao()) {
			this.setQtdAcao(this.getQtdAcao()-compra.getQtdAcao());
			System.out.println("Acao Vendida");
			return true;
		}
		else if(this.getSucessor()!=null) {
			return this.getSucessor().processaVenda(compra);
		}
		else {
			System.out.println("Sem acoes compativeis");
			return false;
		}
	}
	
	public String mostraDadosOrdens() {
		if(this.getSucessor()!=null) {
			return this.toString() + this.getSucessor().mostraDadosOrdens();
		}
		else {
			return this.toString();
		}
		
	}
	
	@Override
	public String toString() {
		return 	"OrdemVenda (Codigo Acao: " + this.getCodigoAcao() +
				", Quantidade Acoes: " + this.getQtdAcao() + ", Preco Acao: " + this.getPrecoAcao() + ")\n";
	}

	public OrdemVenda getSucessor() {
		return sucessor;
	}

	public void setSucessor(OrdemVenda sucessor) {
		this.sucessor = sucessor;
	}

	public int getCodigoAcao() {
		return codigoAcao;
	}


	public void setCodigoAcao(int codigoAcao) {
		this.codigoAcao = codigoAcao;
	}


	public int getQtdAcao() {
		return qtdAcao;
	}


	public void setQtdAcao(int qtdAcao) {
		this.qtdAcao = qtdAcao;
	}


	public float getPrecoAcao() {
		return precoAcao;
	}


	public void setPrecoAcao(float precoAcao) {
		this.precoAcao = precoAcao;
	}
	
	
}
