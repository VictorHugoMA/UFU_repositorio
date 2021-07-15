package banco;

public class Conta {
	public int numConta;
	protected String tipo;
	private String nomeDono;
	private float saldo;
	private boolean status;
	
	public Conta() {
		this.status=false;
		this.saldo=0;
	}
	
	public void abrirConta(String n, String t) {
		this.setTipo(t); //usando setter
		this.setStatus(true);
		this.setNomeDono(n); 
		if(t=="CC") {
			this.saldo=50;
		}
		if(t=="CP") {
			this.saldo=150;
		}
	}
	
	public void fecharConta() {
		if(saldo==0) {
			this.status=false;
		}
		else {
			System.out.println("Erro");
		}
	}
	
	public void depositar(float m) {
		if(this.isStatus()) {
			this.setSaldo(this.getSaldo()+m); //this.saldo+=m(mesma coisa porem mais correto)
			
		}
		else {
			System.out.println("Erro");
		}
	}
	
	public void sacar(float m) {
		if(this.status==true && this.saldo>=m) {
			this.saldo-=m;
		}
		else {
			System.out.println("Erro");
		}
	}
	
	public void pagarMensal() {
		int v = 0;
		if(this.getTipo()=="CC") {
			v=12;
		}
		else if(this.getTipo()=="CP") {
			v=20;
		}
		if(this.status==true && this.tipo=="CC") {
			this.saldo-=v;
		}
		if(this.status==true && this.tipo=="CP") {
			this.saldo-=v;
		}
		else {
			System.out.println("Erro");
		}
	}
	
	public int getNumConta() {
		return numConta;
	}
	
	public void setNumConta(int numConta) {
		this.numConta = numConta;
	}
	
	public String getTipo() {
		return tipo;
	}
	
	public void setTipo(String tipo) {
		this.tipo = tipo;
	}
	
	public String getNomeDono() {
		return nomeDono;
	}
	
	public void setNomeDono(String nomeDono) {
		this.nomeDono = nomeDono;
	}
	
	public float getSaldo() {
		return saldo;
	}
	
	public void setSaldo(float saldo) {
		this.saldo = saldo;
	}
	
	public boolean isStatus() {
		return status;
	}
	
	public void setStatus(boolean status) {
		this.status = status;
	}
	
	public void imprimeInfo() {
		System.out.println("\nInformacoes da conta: ");
		System.out.println("Numero da conta: " + this.getNumConta());
		System.out.println("Tipo: " + this.getTipo());
		System.out.println("Nome do dono: " + this.getNomeDono());
		System.out.println("Saldo: " + this.getSaldo());
		System.out.println("Aberta: " + this.isStatus());
	}
	
	
}
