package comportamentos;

public class CorridaMedia implements Corrida {
	private static CorridaMedia instancia = null;

	 private CorridaMedia() {
		 super();
	 }
	 
	 public static synchronized CorridaMedia getInstancia() {
		 if (instancia == null) {
			 instancia = new CorridaMedia();			 
		 }
		 return instancia;
	 }
	
	public int correr() {
		return 75;

	}

}
