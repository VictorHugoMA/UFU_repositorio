package poderes;

import comportamentos.Ataque;

public class Necrose extends AtaquePoder {
	public Necrose(Ataque ataque) {
		this.setAtaquePoder(ataque);
	}
	
	public int atacar() {
		return 1 + this.getAtaquePoder().atacar();
	}
}
