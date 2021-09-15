
public class Caminhao extends Veiculo {

	private int eixos;

	//construtores
	
	public Caminhao (String placa, int ano, int eixos) {
		super(placa, ano);
		this.setEixos(eixos);
	}
	
	//get set
	public int getEixos() {
		return eixos;
	}

	public void setEixos(int eixos) {
		this.eixos = eixos;
	}
	
	//função
	
	public void exibirDados() {
		super.exibirDados();
		System.out.println("Eixos: " + getEixos());
		
	}
	
	
}
