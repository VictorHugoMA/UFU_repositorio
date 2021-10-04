

public class Cliente {
	private String nome, cpf, rg, ultDest;
	
	
	
	public Cliente(String nome, String cpf, String rg) {
		this.setNome(nome);
		this.setCpf(cpf);
		this.setRg(rg);
	}
	
	public Cliente(String nome, String cpf, String rg, String dest) {
		this.setNome(nome);
		this.setCpf(cpf);
		this.setRg(rg);
		this.setUltDest(dest);
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

	public String getRg() {
		return rg;
	}

	public boolean setRg(String rg) {
		if(rg.length()>0) {
			this.rg = rg;
			return true;
		}
		else {
			return false;
		}
	}

	public String getUltDest() {
		return ultDest;
	}

	public boolean setUltDest(String ultDest) {
		if(ultDest.length()>0) {
			this.ultDest = ultDest;
			return true;
		}
		else {
			return false;
		}
	}

	public String retornaDados() {
		return "Nome: " + this.getNome() + ", CPF: " + this.getCpf() + ", RG: " + this.getRg() + ", Ultimo Destino: " + this.getUltDest();
	}
	
	
	
	
}
