package ex2;

public class Loja {

	public static void main(String[] args) {
		Produto p1 = new Produto();
		
		System.out.println(p1.getEstado().getClass().getName());
		
		p1.compra(2);
		p1.compra(10);
		
		p1.venda(1);
		p1.venda(5);
		p1.venda(2);
		p1.venda(10);
		p1.venda(4);
		
		p1.compra(20);
		

	}

}
