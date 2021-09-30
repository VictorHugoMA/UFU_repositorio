
public class Assistente extends Funcionario{

	
	public Assistente (String nome, String matricula, double salarioBase) {
		super(nome,matricula,salarioBase);
	}
	
	public double calcSalario() {
		return this.getSalarioBase();
	}
	
	public String mostrarDados() {
		return	"Nome : " + this.getNome() + "\nMatricula : "+ this.getMatricula() + "\nSalario : R$ " +this.calcSalario();
	}
	

}

