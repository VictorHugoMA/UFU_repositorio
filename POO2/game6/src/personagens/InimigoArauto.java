package personagens;

import estados.EstadoForte;

public class InimigoArauto extends Inimigo {
	public InimigoArauto(int x, int y) {
		super(x, y);
		this.setLife(80);
		this.setEstado(new EstadoForte(this));
	}
}
