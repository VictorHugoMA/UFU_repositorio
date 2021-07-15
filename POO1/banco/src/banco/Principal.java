package banco;

public class Principal {

	public static void main(String[] args) {
		Conta c1, c2;
		c1 = new Conta();
		c2 = new Conta();
		
		c1.abrirConta("Victor Alves", "CP");
		c1.setNumConta(12011);
		
		c1.depositar(500.0f);
		System.out.println(c1.getSaldo());
		
		c1.imprimeInfo();
		
		c2.abrirConta("Pedro", "CC");
		c2.setNumConta(11040);
		
		c2.sacar(10.5f);
		
		c2.imprimeInfo();
	}

}
