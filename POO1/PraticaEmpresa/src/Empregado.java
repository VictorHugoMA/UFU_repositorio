import java.io.Serializable;

public class Empregado implements Comparable<Empregado>, Serializable {
	private static final long serialVersionUID = 1L;
	private String cpf;
	private int anoNascimento;
	private float salario;
	
	public Empregado(String cpf, int ano) {
		this.setCpf(cpf);
		this.setAnoNascimento(ano);
	}
	
	public Empregado(String cpf, float sal) {
		this.setCpf(cpf);
		this.setSalario(sal);
	}
	
	public Empregado(String cpf, int anoNasc, float sal) {
		this.setCpf(cpf);
		this.setAnoNascimento(anoNasc);
		this.setSalario(sal);
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

	public int getAnoNascimento() {
		return anoNascimento;
	}

	public boolean setAnoNascimento(int anoNascimento) {
		if(anoNascimento>0) {
			this.anoNascimento = anoNascimento;
			return true;
		}
		else {
			return false;
		}
	}

	public float getSalario() {
		return salario;
	}

	public boolean setSalario(float salario) {
		if(salario>0) {
			this.salario = salario;
			return true;
		}
		else {
			return false;
		}
	}

	public int compareTo(Empregado o) {
		if(this.getAnoNascimento()<o.getAnoNascimento()) {
			return -1;
		}
		else if(this.getAnoNascimento()>o.getAnoNascimento()){
			return 1;
		}
		else {
			return 0;
		}
	}

	public String mostrarDados() {
		return "Empregado\nCPF: " + this.getCpf() + "\nAno de nascimento: " + this.getAnoNascimento() + "\nSalario: " + this.getSalario()+ "\n";
	}
	
	
	
	
}
