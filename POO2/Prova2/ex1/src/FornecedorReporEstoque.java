package ex1;

public class FornecedorReporEstoque implements Command {
	private Estoque estoque;
	
	
	public FornecedorReporEstoque(Estoque estoque) {
		this.setEstoque(estoque);
	}



	public void execute() {
		this.getEstoque().reporEstoque();
	}


	public Estoque getEstoque() {
		return estoque;
	}

	public void setEstoque(Estoque estoque) {
		this.estoque = estoque;
	}
	
}
