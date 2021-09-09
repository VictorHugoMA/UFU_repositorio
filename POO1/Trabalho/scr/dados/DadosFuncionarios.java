package dados;
import java.util.ArrayList;
import clinica.*;


public class DadosFuncionarios {
	private ArrayList<Medico> vetMed = new ArrayList<>();
	private ArrayList<DemaisFunc> vetDemaisF = new ArrayList<>();
	
	public void cadastrarMed(Medico m) {
		this.vetMed.add(m);
	}
	
	public void cadastrarDF(DemaisFunc dm) {
		this.vetDemaisF.add(dm);
	}
	
}
