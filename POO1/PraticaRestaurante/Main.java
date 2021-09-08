import java.text.ParseException;

public class Main {

	public static void main(String[] args) throws ParseException {
		Pedido p1 = new Pedido("15635558674", "02/09/2021");
		Pedido p2 = new Pedido("88858413687", "03/09/2021");
		
		p1.setNomeCliente("Victor");
		p2.setNomeCliente("Alisson");
		
		Pizza pi = new Pizza(30f, 40f, 30, "Vermelho", "Calabresa", "Catupity");
		Pizza pi2 = new Pizza(25f, 35f, 30, "Branco", "Franco", "Cheddar");
		Sanduiche sa = new Sanduiche(7f, 15f, 10, "Branco", "Hamburguer", "Alface");
		Sanduiche sa2 = new Sanduiche();
		
		sa2.setCustoAss(10f);
		sa2.setPrecoVenda(20f);
		sa2.setTempoPrep(15);
		sa2.setPao("Integral");
		sa2.setCarne("Frango");
		sa2.setSalada("Tomate");
		
		
		p1.addPizza(pi);
		p1.addPizza(pi2);
		p1.addSanduiche(sa);
				
		p1.calcTotPr();
		p1.calcTaxaServ();
		p1.calcTotPed();
		
		
		p2.addSanduiche(sa);
		p2.addSanduiche(sa2);
		p2.addPizza(pi2);

		p2.calcTotPr();
		p2.calcTaxaServ();
		p2.calcTotPed();
		
		System.out.println(p1.toString());
		System.out.println(p2.toString());

	}

}
