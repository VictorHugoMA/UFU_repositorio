
public class Bolsista extends Aluno {
	private float bolsa;
	
	public void renovarBolsa() {
		System.out.println("Bolsa renovada do aluno " + this.getNome());
	}
	
	@Override
	public void pagarMensalidade() {
		System.out.println("Mensalidade paga do bolsista " + this.getNome());
	}

	public float getBolsa() {
		return bolsa;
	}

	public void setBolsa(float bolsa) {
		this.bolsa = bolsa;
	}
	
	
}
