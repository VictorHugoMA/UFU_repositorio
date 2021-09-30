
public class Vendedor extends Funcionario{
	
	private double comissao;
	
	public Vendedor (String nome, String matricula, double salarioBase, double comissao) {
		super(nome,matricula,salarioBase);
		this.setComissao(comissao);
	}
	
	
	public double getComissao() {
		return comissao;
	}

	public void setComissao(double comissao) {
		this.comissao = comissao;
	}

	
	
	
	public double calcSalario() {
		return this.getSalarioBase() + comissao;
	}
	
	public String mostrarDados() {
		return	"Nome : " + this.getNome() + "\nMatricula : "+ this.getMatricula() + "\nComissao : R$" + this.getComissao() + "\nSalario : R$ " +this.calcSalario() ;
	}
	
}
