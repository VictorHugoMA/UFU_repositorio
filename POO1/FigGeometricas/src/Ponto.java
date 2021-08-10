
public class Ponto {
	private float x, y;
	
	public void criarPonto(float x, float y) {
		this.setX(x);
		this.setY(y);
	}
	
	public double dist2Pontos(Ponto a, Ponto b) {
		double d1 = (b.x-a.x)*(b.x-a.x)+(b.y-a.y)*(b.y-a.y);
		return Math.sqrt(d1);
	}

	public float getX() {
		return x;
	}

	public void setX(float x) {
		if(x>0) {
			this.x = x;
		}
	}

	public float getY() {
		return y;
	}

	public void setY(float y) {
		if(x>0) {
			this.y = y;
		}
	}
	
	
}
