
public class Onibus extends Veiculo {

	private int assentos;

	//construtor
	
	public Onibus(String placa, int ano, int assentos) {
		super(placa, ano);
		this.setAssentos(assentos);
	}
	
	
	//get set
	public int getAssentos() {
		return assentos;
	}

	public void setAssentos(int assentos) {
		this.assentos = assentos;
	}
	
	
	//função
	
	public void exibirDados() {
		super.exibirDados();
		System.out.println("Assentos: " + getAssentos());
		
	}
	
	
	
}
