
public class Exame {
	private String nome;
	
	public Exame(String nome) {
		this.setNome(nome);
	}

	public String getNome() {
		return nome;
	}

	public boolean setNome(String nome) {
		if(nome.length()>0) {
			this.nome = nome;
			return true;
		}
		else {
			return false;
		}
	}

	@Override
	public String toString() {
		return "Exame:" + this.getNome();
	}
	
	
	
	
}
