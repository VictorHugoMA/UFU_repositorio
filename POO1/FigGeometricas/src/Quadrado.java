
public class Quadrado {
	private float lado;
	
	public float calcArea() {
		return lado*lado;
	}
	
	public float calcPerim() {
		return 4*lado;
	}

	public float getLado() {
		return lado;
	}

	public void setLado(float lado) {
		this.lado = lado;
	}
	
	public void testaQuad(float l) {
		setLado(l);
		System.out.println("Lado: " + getLado());
		System.out.println("Area: " + calcArea());
		System.out.println("Perimetro: " + calcPerim());
	}
	
	
}
