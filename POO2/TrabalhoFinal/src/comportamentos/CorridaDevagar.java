package comportamentos;

public class CorridaDevagar implements Corrida {
	private static CorridaDevagar instancia = null;

	 private CorridaDevagar() {
		 super();
	 }
	 
	 public static synchronized CorridaDevagar getInstancia() {
		 if (instancia == null) {
			 instancia = new CorridaDevagar();			 
		 }
		 return instancia;
	 }
	
	public int correr() {
		return 40;
		
	}
	
}
