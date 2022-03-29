package poderes;

import comportamentos.Ataque;

public class Laser extends AtaquePoder {
	public Laser(Ataque ataque) {
		this.setAtaquePoder(ataque);
	}
	
	public int atacar() {
		return 5 + this.getAtaquePoder().atacar();
	}
}
