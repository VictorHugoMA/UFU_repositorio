package ex3;

public abstract class FormaGeometrica {
	private String descricao;
	
	public String desenhar() {
		return this.getDescricao();
	}

	public String getDescricao() {
		return descricao;
	}

	public void setDescricao(String descricao) {
		this.descricao = descricao;
	}
	
	
}
