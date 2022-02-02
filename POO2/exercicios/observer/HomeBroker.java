package observer;

import java.util.Observable;
import java.util.Observer;

public class HomeBroker implements Observer {
	private String valorServidor;

	@Override
	public void update(Observable o, Object arg) {
		Servidor servidor = (Servidor)o;
		
		this.setValorServidor(servidor.getValor());
		
	}

	public String getValorServidor() {
		return valorServidor;
	}

	public void setValorServidor(String valorServidor) {
		this.valorServidor = valorServidor;
	}

}
