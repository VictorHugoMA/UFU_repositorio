
public class Reptil extends Animal {
	private String corEscama;

	@Override
	public void locomover() {
		System.out.println("Rastejando");
		
	}

	@Override
	public void alimentar() {
		System.out.println("Comendo-Reptil");
		
	}

	@Override
	public void emitirSom() {
		System.out.println("Som-Reptil");
		
	}

	public String getCorEscama() {
		return corEscama;
	}

	public void setCorEscama(String corEscama) {
		this.corEscama = corEscama;
	}
	

}
