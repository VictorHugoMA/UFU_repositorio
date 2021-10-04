
public class ViagemAerea extends Viagem {
	private int numVoo;
	private String compAerea;
	
	public ViagemAerea(Cliente cl, String ori, String dest, String dt, int dur, String mot, int nv, String comp) {
		super(cl, ori, dest, dt, dur, mot);
		this.setNumVoo(nv);
		this.setCompAerea(comp);
		
	}
	
	public ViagemAerea() {
		
	}
	
	
	public int getNumVoo() {
		return numVoo;
	}
	
	
	public boolean setNumVoo(int numVoo) {
		if(numVoo>0) {
			this.numVoo = numVoo;
			return true;
		}
		else {
			return false;
		}
	}
	
	
	public String getCompAerea() {
		return compAerea;
	}
	
	public boolean setCompAerea(String compAerea) {
		if(compAerea.length()>0) {
			this.compAerea = compAerea;
			return true;
		}
		else {
			return false;
		}
	}
	
	public String retornaDados() {
		return super.retornaDados() + "\nNumero do voo: " + this.getNumVoo() +
				"\nCompanhia Aerea: " + this.getCompAerea();
	}
	
	
}
