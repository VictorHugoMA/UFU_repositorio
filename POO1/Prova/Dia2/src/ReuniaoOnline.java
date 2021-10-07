
public class ReuniaoOnline extends Reuniao{
	private String plataforma;

	public ReuniaoOnline(Funcionario func, String da, String hrIni, String hrFim, String mot, String plataforma) {
		super(func, da, hrIni, hrFim, mot);
		this.setPlataforma(plataforma);
	}
	
	public ReuniaoOnline() {
		
	}

	public String getPlataforma() {
		return plataforma;
	}

	public boolean setPlataforma(String plataforma) {
		if(plataforma.length()>0) {
			this.plataforma = plataforma;
			return true;
		}
		else {
			return false;
		}
	}
	
	public float calculaCusto() {
		return super.calculaCusto()+20.0f;
	}
	
	
	
	
}
