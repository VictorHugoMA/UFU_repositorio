package poderes;

import comportamentos.Ataque;

public abstract class AtaquePoder implements Ataque {
	private Ataque ataquePoder; //objeto decorado
	
	public Ataque getAtaquePoder() {
		return ataquePoder;
	}

	public void setAtaquePoder(Ataque ataquePoder) {
		this.ataquePoder = ataquePoder;
	}
	
	
}
