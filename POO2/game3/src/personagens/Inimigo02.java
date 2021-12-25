package personagens;

import estados.EstadoNormal;

public class Inimigo02 extends Inimigo {
	public Inimigo02(int x, int y) {
		super(x, y);
		this.setLife(60);
		this.setEstado(new EstadoNormal(this));
	}
}
