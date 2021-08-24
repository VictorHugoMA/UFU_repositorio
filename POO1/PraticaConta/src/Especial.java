
public class Especial extends Conta {
	private float limite;

	public Especial(int cpf, int numConta) {
		super(cpf, numConta);
	
	}

	public int saque(float valor) {
		if(valor>this.getSaldo()+this.getLimite()) {
			return 0;
		}
		else {
			this.setSaldo(this.getSaldo()-valor);
			return 1;
		}
		
	}
	
	public float getLimite() {
		return limite;
	}

	public void setLimite(float limite) {
		this.limite = limite;
	}
	
	
}
