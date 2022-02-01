package personagens;

import estados.EstadoNormal;

public class InimigoBeholder extends Inimigo {
	public InimigoBeholder(int x, int y) {
		super(x, y);
		this.setLife(60);
		this.setEstado(new EstadoNormal(this));
	}
}
