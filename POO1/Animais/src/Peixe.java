
public class Peixe extends Animal {
	private String corEscama;
	
	public void soltarBolhas() {
		System.out.println("Soltar bolha");
	}

	@Override
	public void locomover() {
		System.out.println("Nadando");
		
	}

	@Override
	public void alimentar() {
		System.out.println("Comendo-Peixe");
		
	}

	@Override
	public void emitirSom() {
		System.out.println("Som-Peixe");
		
	}

	public String getCorEscama() {
		return corEscama;
	}

	public void setCorEscama(String corEscama) {
		this.corEscama = corEscama;
	}
	
	
}
