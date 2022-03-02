package comportamentos;

public class AtaqueFraco implements Ataque {
	private static AtaqueFraco instancia = null;

	 private AtaqueFraco() {
		 super();
	 }
	 
	 public static synchronized AtaqueFraco getInstancia() {
		 if (instancia == null) {
			 instancia = new AtaqueFraco();			 
		 }
		 return instancia;
	 }
	
	public int atacar() {
		return 5;

	}

}
