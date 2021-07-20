
public class ProjetoBiblioteca {

	public static void main(String[] args) {
		Pessoa[] p = new Pessoa[2];
		Livro[] l = new Livro [2];
		
		p[0] = new Pessoa("Victor", 19, "Masc");
		
		
		l[0]= new Livro("Homo Deus", "Yuval Harari", 464, p[0]);
		
		l[0].abrir();
		l[0].folhear(200);
		l[0].voltarPag();
		
		System.out.println(l[0].detalhes());
	}

}
