package observer;

import java.util.Observable;

public class Servidor extends Observable {
	private String valor;
	
	
	public String getValor() {
		return valor;
	}

	public void setValor(String valor) {
		this.valor = valor;
		this.setChanged();
		this.notifyObservers();
	}
	
	
}
