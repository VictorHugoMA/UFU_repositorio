
public class Circulo {
	private String nome;
	private Ponto centro;
	private float raio;
	
	public Circulo(String n, Ponto c, float r) {
		this.setNome(n);
		this.setCentro(c);
		this.setRaio(r);
	}
	
	public float calcDiam() {
		return 2*this.getRaio();
	}
	
	public double calcArea() {
		return Math.PI*this.getRaio()*this.getRaio();
	}
	
	public double calcCircun() {
		return 2*Math.PI*this.getRaio();
	}
	
	public String getNome() {
		return nome;
	}
	public void setNome(String nome) {
		this.nome = nome;
	}
	public Ponto getCentro() {
		return centro;
	}
	public void setCentro(Ponto centro) {
		this.centro = centro;
	}
	public float getRaio() {
		return raio;
	}
	public void setRaio(float raio) {
		this.raio = raio;
	}

	public String exibeDados() {
		return "Circulo\nNome: " + nome + "\nCentro: " + centro + "\nRaio: " + raio;
	}
	
	
	
}
