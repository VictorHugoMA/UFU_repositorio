
public class Conta {
	private int cpf, numConta;
	private float saldo;
	
	public Conta(int cpf, int numConta) {
		this.setCpf(cpf);
		this.setNumConta(numConta);
		this.setSaldo(0f);
	}
	
	public int saque(float valor) {
		if(this.saldo<valor) {
			return 0;
		}
		else {
			this.setSaldo(this.getSaldo()-valor);
			return 1;
		}
	}
	
	public void deposito(float valor) {
		this.setSaldo(this.getSaldo()+valor);
	}
	
	public int getCpf() {
		return cpf;
	}
	public void setCpf(int cpf) {
		this.cpf = cpf;
	}
	public int getNumConta() {
		return numConta;
	}
	public void setNumConta(int numConta) {
		this.numConta = numConta;
	}
	public float getSaldo() {
		return saldo;
	}
	public void setSaldo(float saldo) {
		this.saldo = saldo;
	}
	
	
}
