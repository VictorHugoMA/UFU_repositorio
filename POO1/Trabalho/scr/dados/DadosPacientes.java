package dados;
import clinica.*;

import java.util.ArrayList;

public class DadosPacientes {
	private ArrayList<PacCPlano> vetPacC = new ArrayList<>();
	private ArrayList<PacSPlano> vetPacS = new ArrayList<>();
	
	public void cadastrarPC(PacCPlano pc) {
		this.vetPacC.add(pc);
	}
	
	public void cadastrarPS(PacSPlano ps) {
		this.vetPacS.add(ps);
	}
	
	
}
