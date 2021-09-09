package dados;

import java.util.ArrayList;
import clinica.*;

public class DadosConsulta {
	private ArrayList<Consulta> vetCons = new ArrayList<>();
	
	public void cadastrarCons(Consulta c) {
		this.vetCons.add(c);
	}
}
