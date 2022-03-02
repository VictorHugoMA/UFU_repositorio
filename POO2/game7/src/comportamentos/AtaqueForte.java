package comportamentos;

public class AtaqueForte implements Ataque {
	private static AtaqueForte instancia = null;

	 private AtaqueForte() {
		 super();
	 }
	 
	 public static synchronized AtaqueForte getInstancia() {
		 if (instancia == null) {
			 instancia = new AtaqueForte();			 
		 }
		 return instancia;
	 }

	public int atacar() {
		return 20;
	}

}
