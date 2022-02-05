package ex3;

public abstract class FormaDecorada extends FormaGeometrica {
	private FormaGeometrica formaDecorada;

	public FormaDecorada(FormaGeometrica formaDecorada) {
		this.setFormaDecorada(formaDecorada);
	}
	
	
	public String desenhar() {
		return this.getFormaDecorada().desenhar()+", "+ super.desenhar();
	}

	public FormaGeometrica getFormaDecorada() {
		return formaDecorada;
	}
	
	
	public void setFormaDecorada(FormaGeometrica formaDecorada) {
		this.formaDecorada = formaDecorada;
	}
}
