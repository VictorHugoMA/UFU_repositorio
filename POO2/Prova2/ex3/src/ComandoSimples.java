package ex3;

public class ComandoSimples implements AnaliseSintatica {
	private String nomeComando;
	
	
	public ComandoSimples(String nomeComando) {
		this.setNomeComando(nomeComando);
	}

	public void execute() {
		System.out.println("Comando: " + this.getNomeComando());
	}
	

	public String getNomeComando() {
		return nomeComando;
	}

	public void setNomeComando(String nomeComando) {
		this.nomeComando = nomeComando;
	}
	
}
