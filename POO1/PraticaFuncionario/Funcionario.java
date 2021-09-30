public abstract class Funcionario implements Imprimivel {
	private String nome;
	private String matricula;
	private double salarioBase;
	
	public Funcionario(String nome, String matricula, double salarioBase) {
		this.setNome(nome);
		this.setMatricula(matricula);
		this.setSalarioBase(salarioBase);
	}

	public abstract double calcSalario();

	public String getNome() {
		return nome;
	}

	public void setNome(String nome) {
		this.nome = nome;
	}

	public String getMatricula() {
		return matricula;
	}

	public void setMatricula(String matricula) {
		this.matricula = matricula;
	}

	public double getSalarioBase() {
		return salarioBase;
	}

	public void setSalarioBase(double salarioBase) {
		this.salarioBase = salarioBase;
	}
	
	
}