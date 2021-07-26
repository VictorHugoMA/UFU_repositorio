
public class Principal {

	public static void main(String[] args) {
		Mamifero m1 = new Mamifero();
		Cachorro c1 = new Cachorro();
		Reptil r1 = new Reptil();
		Peixe p1 = new Peixe();
		Arara a1 = new Arara();
		
		m1.setPeso(25);
		m1.setIdade(5);
		m1.setMembros(4);
		m1.setCorPelo("Branco");
		m1.locomover();
		m1.alimentar();
		m1.emitirSom();
		System.out.println(m1.toString());
		System.out.println();

		
		c1.setPeso(20);
		c1.setIdade(3);
		c1.setMembros(4);
		c1.setCorPelo("Preto");
		c1.locomover();
		c1.alimentar();
		c1.emitirSom();
		c1.abanarRabo();
		System.out.println(c1.toString());
		System.out.println();
		
		r1.setPeso(2);
		r1.setIdade(1);
		r1.setMembros(4);
		r1.locomover();
		r1.alimentar();
		r1.emitirSom();
		System.out.println();

		
		p1.setPeso(3.5f);
		p1.setIdade(1);
		p1.setMembros(2);
		p1.locomover();
		p1.alimentar();
		p1.emitirSom();
		System.out.println();

		
		a1.setPeso(1);
		a1.setIdade(1);
		a1.setMembros(2);
		a1.locomover();
		a1.alimentar();
		a1.emitirSom();
		
		

	}

}
