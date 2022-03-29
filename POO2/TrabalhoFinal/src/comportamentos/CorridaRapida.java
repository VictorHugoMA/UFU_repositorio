package comportamentos;

public class CorridaRapida implements Corrida {
	private static CorridaRapida instancia = null;

	 private CorridaRapida() {
		 super();
	 }
	 
	 public static synchronized CorridaRapida getInstancia() {
		 if (instancia == null) {
			 instancia = new CorridaRapida();			 
		 }
		 return instancia;
	 }
	
	public int correr() {
		return 150;

	}

}
