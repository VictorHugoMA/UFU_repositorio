package personagens;

import estados.EstadoPerigo;

public class InimigoEstirge extends Inimigo {
	public InimigoEstirge(int x, int y) {
		super(x, y);
		this.setLife(20);
		this.setEstado(new EstadoPerigo(this));
	}
}
