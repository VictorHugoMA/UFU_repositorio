package poderes;

import comportamentos.Ataque;

public class ArcoFlecha extends AtaquePoder {
	public ArcoFlecha(Ataque ataque) {
		this.setAtaquePoder(ataque);
	}
	
	public int atacar() {
		return 4 + this.getAtaquePoder().atacar();
	}
}
