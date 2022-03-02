package comportamentos;

public class AtaqueMedio implements Ataque {
	private static AtaqueMedio instancia = null;

	 private AtaqueMedio() {
		 super();
	 }
	 
	 public static synchronized AtaqueMedio getInstancia() {
		 if (instancia == null) {
			 instancia = new AtaqueMedio();			 
		 }
		 return instancia;
	 }
	
	public int atacar() {
		return 10;

	}

}
