package ex1;

public class Estoque {
	private String nome;
	private int qtd;
	
	
	public Estoque(String nome, int qtd) {
		this.setNome(nome);
		this.setQtd(qtd);
	}
	
	public void reporEstoque() {
		this.setQtd(this.getQtd()+1);
	}

	public String getNome() {
		return nome;
	}
	
	public void setNome(String nome) {
		this.nome = nome;
	}
	public int getQtd() {
		return qtd;
	}
	public void setQtd(int qtd) {
		if(this.getQtd()<0) {
			this.qtd = 0;
		}
		this.qtd = qtd;
	}
	
	

}
