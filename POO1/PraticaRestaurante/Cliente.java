
public class Cliente {
	private String nome;
	private String cpf;
	
	
	public Cliente(String nome, String cpf) {
		this.setNome(nome);
		this.setCpf(cpf);
	}
	public Cliente() {
		
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
	
	
	public String getCpf() {
		return ValidaCPF.imprimeCPF(cpf);
	}
	
	public boolean setCpf(String cpf) {
		if(ValidaCPF.isCPF(cpf)==true) {
			this.cpf = cpf;
			return true;
		}
		else {
			return false;
		}
	}
	
}
