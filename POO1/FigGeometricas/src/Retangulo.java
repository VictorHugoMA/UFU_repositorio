
public class Retangulo {
	private float lados[] = new float[2];
	
	public float calcArea() {
		return (this.lados[0])*(this.lados[1]);
	}
	
	public float calcPerimetro() {
		return (this.lados[0]*2)+(this.lados[1]*2);
	}

	public float[] getLados() {
		return lados;
	}

	public void setLados(float l[]) {
		this.lados = l.clone();
		//this.lados[0] = l1;
		//this.lados[1] = l2;
	}
	
	public void testeRet(float l[]) {
		this.setLados(l);
		
		l=this.getLados();
		System.out.println("Lado A: " + l[0]);
		System.out.println("Lado B: " + l[1]);
		
		System.out.println("Area = " + this.calcArea());
		System.out.println("Perimetro = " + this.calcPerimetro());
		
		
	}
	
}
