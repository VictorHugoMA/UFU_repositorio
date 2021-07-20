
public class Livro implements Publicacao {
	private String titulo, autor;
	private int totalPag, atualPag;
	private boolean aberto;
	private Pessoa leitor;
	
	
	
	
	public Livro(String titulo, String autor, int totalPag, Pessoa leitor) {
		this.titulo = titulo;
		this.autor = autor;
		this.totalPag = totalPag;
		this.leitor = leitor;
		this.setAberto(false);
		this.setAtualPag(0);
	}


	public String detalhes() {
		return "Livro\nTitulo: " + titulo + "\nAutor: " + autor + "\nTotalPag: " + totalPag + 
				"\nPagina Atual: " + atualPag + "\nAberto: " + aberto + "\nLeitor: " + leitor.getNome() + 
				", Idade: " + leitor.getIdade() + ", Sexo: " + leitor.getSexo();
	}




	public String getTitulo() {
		return titulo;
	}


	public void setTitulo(String titulo) {
		this.titulo = titulo;
	}


	public String getAutor() {
		return autor;
	}


	public void setAutor(String autor) {
		this.autor = autor;
	}


	public int getTotalPag() {
		return totalPag;
	}


	public void setTotalPag(int totalPag) {
		this.totalPag = totalPag;
	}


	public int getAtualPag() {
		return atualPag;
	}


	public void setAtualPag(int atualPag) {
		this.atualPag = atualPag;
	}


	public boolean isAberto() {
		return aberto;
	}


	public void setAberto(boolean aberto) {
		this.aberto = aberto;
	}


	public Pessoa getLeitor() {
		return leitor;
	}


	public void setLeitor(Pessoa leitor) {
		this.leitor = leitor;
	}


	@Override
	public void abrir() {
		this.setAberto(true);
		
	}


	@Override
	public void fechar() {
		this.setAberto(false);
		
	}


	@Override
	public void folhear(int p) {
		if(p>this.getTotalPag()) {
			this.setAtualPag(0);
		}
		else
			this.setAtualPag(p);
		
	}


	@Override
	public void avancarPag() {
		this.setAtualPag(this.getAtualPag()+1);
		
	}


	@Override
	public void voltarPag() {
		this.setAtualPag(this.getAtualPag()-1);
		
	}
	
}
