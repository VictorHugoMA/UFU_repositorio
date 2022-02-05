package ex2;

public class Produto {
	private Estado estado;
	private int quantidadeEstoque;
	
	public Produto() {
		this.setQuantidadeEstoque(0);
		this.setEstado(new EstadoIndisponivel(this));
	}
	
	public void compra(int qtd) {
		this.getEstado().compra(qtd);
		System.out.println("Comprou: "+ qtd);
		System.out.println("Estoque: "+ this.getQuantidadeEstoque());
		System.out.println("Estado: "+ this.getEstado().getClass().getName());
		System.out.println("----------------------------------------");
	}
	
	public boolean venda(int qtd) {
		if(this.getEstado().venda(qtd)) {
			System.out.println("Vendeu: "+ qtd);
			System.out.println("Estoque: "+ this.getQuantidadeEstoque());
			System.out.println("Estado: "+ this.getEstado().getClass().getName());
			System.out.println("----------------------------------------");
			return true;
		}
		else {
			System.out.println("Impossivel fazer a venda");
			System.out.println("----------------------------------------");
			return false;
		}
	}
	
	public Estado getEstado() {
		return estado;
	}
	public void setEstado(Estado estado) {
		this.estado = estado;
	}
	public int getQuantidadeEstoque() {
		return quantidadeEstoque;
	}
	public void setQuantidadeEstoque(int quantidadeEstoque) {
		this.quantidadeEstoque = quantidadeEstoque;
	}
	
	
}
