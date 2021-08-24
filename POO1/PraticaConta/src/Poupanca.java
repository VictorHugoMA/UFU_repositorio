
public class Poupanca extends Conta {
	private float taxaRend;
	
	public Poupanca(int cpf, int numConta) {
		super(cpf, numConta);
	}


	public float calcularNovoSaldo() {
		this.setSaldo(this.getSaldo()+this.getSaldo()*this.getTaxaRend());
		return this.getSaldo();
	}
	
	public float getTaxaRend() {
		return taxaRend;
	}

	public void setTaxaRend(float taxaRend) {
		this.taxaRend = taxaRend;
	}
	

}
