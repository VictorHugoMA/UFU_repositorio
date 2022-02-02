package chainOfResponsibility;

public class MercadoAcoes {

	public static void main(String[] args) {
		
		OrdemCompra c1 = new OrdemCompra(3, 2, 15f);
		
		OrdemVenda v1 = new OrdemVenda(1, 7, 10f);
		OrdemVenda v2 = new OrdemVenda(2, 5, 50f);
		OrdemVenda v3 = new OrdemVenda(3, 4, 7f);
		
		v1.setSucessor(v2);
		v2.setSucessor(v3);
		v3.setSucessor(null);
		
		if(!v1.processaVenda(c1)) {
			System.out.println(v1.mostraDadosOrdens());			
		}
		
		
		

	}

}
