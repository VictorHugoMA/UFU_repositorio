package chainOfResponsibility;

public class OrdemCompra {
	private int codigoAcao, qtdAcao;
	private float precoAcao;
	
	
	public OrdemCompra(int cod, int qtd, float preco) {
		this.setCodigoAcao(cod);
		this.setQtdAcao(qtd);
		this.setPrecoAcao(preco);
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
