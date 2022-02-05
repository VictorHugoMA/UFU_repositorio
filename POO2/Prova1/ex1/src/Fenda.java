package ex1;

public abstract class Fenda {
	private Fenda sucessor;
	private float valorMoeda, diametroFenda;
	
	public Fenda(float valor, float diametro) {
		this.setValorMoeda(valor);
		this.setDiametroFenda(diametro);
	}
	
	public void processaMoeda(float diametroMoeda) {
		if(this.getDiametroFenda()==diametroMoeda) {
			System.out.println("Moeda retida: R$ " + this.getValorMoeda());
		}
		else if(this.getSucessor()!=null) {
			this.getSucessor().processaMoeda(diametroMoeda);
		}
		else {
			System.out.println("Moeda rejeitada");
		}
	}
	
	
	public Fenda getSucessor() {
		return sucessor;
	}
	public void setSucessor(Fenda sucessor) {
		this.sucessor = sucessor;
	}
	public float getValorMoeda() {
		return valorMoeda;
	}
	public void setValorMoeda(float valorMoeda) {
		this.valorMoeda = valorMoeda;
	}
	public float getDiametroFenda() {
		return diametroFenda;
	}
	public void setDiametroFenda(float diametro) {
		this.diametroFenda = diametro;
	}
	
	
}
