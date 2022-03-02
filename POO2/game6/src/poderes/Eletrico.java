package poderes;

import comportamentos.Ataque;

public class Eletrico extends AtaquePoder {
	public Eletrico(Ataque ataque) {
		this.setAtaquePoder(ataque);
	}
	
	public int atacar() {
		return 2 + this.getAtaquePoder().atacar();
	}
}
