package observer;

public class MercadoAcoes2 {

	public static void main(String[] args) {
		Servidor servidor = new Servidor();
		
		HomeBroker hb = new HomeBroker();
		
		servidor.addObserver(hb);
		servidor.setValor(	"Petrobras: 20.54\n"
							+ "Vale: 30.01\n"
							+ "OCX: 47.59\n");
		
		System.out.println("Servidor\n" + servidor.getValor());
		System.out.println("Home Broker\n" + hb.getValorServidor());
		
		System.out.println("Atualizacao\n");
		servidor.setValor(	"Petrobras: 20.27\n"
							+ "Vale: 30.01\n"
							+ "OCX: 50.55\n");
		
		System.out.println("Home Broker\n" + hb.getValorServidor());
		
	}

}
