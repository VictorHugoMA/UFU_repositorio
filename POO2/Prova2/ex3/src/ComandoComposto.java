package ex3;

import java.util.ArrayList;

public class ComandoComposto implements AnaliseSintatica {
	private ArrayList<AnaliseSintatica> comandos = new ArrayList<AnaliseSintatica>();
	
	
	public ComandoComposto(ArrayList<AnaliseSintatica> comandos) {
		this.setComandos(comandos);
	}

	public void execute() {
		for (AnaliseSintatica as : comandos) {
			as.execute();
		}
		
	}

	
	public ArrayList<AnaliseSintatica> getComandos() {
		return comandos;
	}

	public void setComandos(ArrayList<AnaliseSintatica> comandos) {
		this.comandos = comandos;
	}
	
	
}
