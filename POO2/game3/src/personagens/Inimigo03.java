package personagens;

import estados.EstadoPerigo;

public class Inimigo03 extends Inimigo {
	public Inimigo03(int x, int y) {
		super(x, y);
		this.setLife(20);
		this.setEstado(new EstadoPerigo(this));
	}
}
