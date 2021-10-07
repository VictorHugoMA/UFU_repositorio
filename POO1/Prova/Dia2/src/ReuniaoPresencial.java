
public class ReuniaoPresencial extends Reuniao {
	private String sala;
	private boolean coffeeBreak;
	
	
	public ReuniaoPresencial(Funcionario func, String da, String hrIni, String hrFim, String mot, String sl, boolean cof) {
		super(func, da, hrIni, hrFim, mot);
		this.setSala(sl);
		this.setCoffeeBreak(cof);
	}
	
	public ReuniaoPresencial() {
		
	}
	
	public String getSala() {
		return sala;
	}
	public boolean setSala(String sala) {
		if(sala.length()>0) {
			this.sala = sala;
			return true;
		}
		else {
			return false;
		}
	}
	public boolean getCoffeeBreak() {
		return coffeeBreak;
	}
	public void setCoffeeBreak(boolean coffeeBreak) {
		this.coffeeBreak = coffeeBreak;
	}
	
	public float calculaCusto() {
		if(this.getCoffeeBreak()) {
			return super.calculaCusto()+300.0f;
		}
		else {
			return super.calculaCusto();
		}
	}
	
	
}
