package ex3;

public class ComandoCondicional implements AnaliseSintatica {
	private AnaliseSintatica clausulaIF, clausulaELSE;
	
	
	public ComandoCondicional(AnaliseSintatica clausulaIF, AnaliseSintatica clausulaELSE) {
		this.setClausulaIF(clausulaIF);
		this.setClausulaELSE(clausulaELSE);
	}

	public void execute() {
		double valor = Math.random();

        if (valor < 0.5) {
            this.getClausulaIF().execute();
        }
        else {
            this.getClausulaELSE().execute();
        }
		
	}


	public AnaliseSintatica getClausulaIF() {
		return clausulaIF;
	}
	public void setClausulaIF(AnaliseSintatica clausulaIF) {
		this.clausulaIF = clausulaIF;
	}
	public AnaliseSintatica getClausulaELSE() {
		return clausulaELSE;
	}
	public void setClausulaELSE(AnaliseSintatica clausulaELSE) {
		this.clausulaELSE = clausulaELSE;
	}
	
	
}
