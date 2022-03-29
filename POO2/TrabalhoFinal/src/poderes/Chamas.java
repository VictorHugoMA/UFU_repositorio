package poderes;

import comportamentos.Ataque;

public class Chamas extends AtaquePoder {
	
	public Chamas(Ataque ataque) {
		this.setAtaquePoder(ataque);
	}
	
	public int atacar() {
		return 3 + this.getAtaquePoder().atacar();
	}
	
}
