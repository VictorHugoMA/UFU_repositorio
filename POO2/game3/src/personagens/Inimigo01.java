package personagens;

import estados.EstadoForte;

public class Inimigo01 extends Inimigo {
	public Inimigo01(int x, int y) {
		super(x, y);
		this.setLife(80);
		this.setEstado(new EstadoForte(this));
	}
}
