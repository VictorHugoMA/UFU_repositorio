
public class Funcionario {
	private String nome, cpf, rg, matEmpresa;
	
	public Funcionario(String nome, String cpf, String rg, String mat) {
		this.setNome(nome);
		this.setCpf(cpf);
		this.setRg(rg);
		this.setMatEmpresa(mat);
	}

	public Funcionario() {
		
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

	public String getMatEmpresa() {
		return matEmpresa;
	}

	public boolean setMatEmpresa(String matEmpresa) {
		if(matEmpresa.length()>0) {
			this.matEmpresa = matEmpresa;
			return true;
		}
		else {
			return false;
		}
	}
	

	
}
