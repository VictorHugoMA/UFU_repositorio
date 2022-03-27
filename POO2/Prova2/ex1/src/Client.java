package ex1;

public class Client {

	public static void main(String[] args) {
		DepartamentoCompra dp = new DepartamentoCompra();
		Estoque estoque = new Estoque("Coca-Cola 1L", 5);
		
		dp.setCommand(new FornecedorReporEstoque(estoque), 0);
		
		System.out.println("Produto: " + estoque.getNome() +", Quantidade: " + estoque.getQtd());
		dp.pressionar(0);
		dp.pressionar(0);
		System.out.println("Produto: " + estoque.getNome() +", Quantidade: " + estoque.getQtd());
		
		System.out.println("\nLog");
		dp.showLog();
		
	}

}
