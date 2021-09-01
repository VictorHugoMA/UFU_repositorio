
public class DemaisFunc extends Funcionario {
	private float salarioBase;
	private String cargo;
	private int numConsTot;
	private int limite;
	private static float valorGrat=1500f;
	
	
	public float getSalarioBase() {
		return salarioBase;
	}
	public void setSalarioBase(float salarioBase) {
		this.salarioBase = salarioBase;
	}
	public String getCargo() {
		return cargo;
	}
	public void setCargo(String cargo) {
		this.cargo = cargo;
	}
	public int getNumConsTot() {
		return numConsTot;
	}
	public void setNumConsTot(int numConsTot) {
		this.numConsTot = numConsTot;
	}
	
	public float calcSalario() {
		if(this.numConsTot>this.limite) {
			return salarioBase+valorGrat; 
		}
		else {
			return salarioBase;
		}
	}
	
	

}
