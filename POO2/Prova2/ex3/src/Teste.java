package ex3;

import java.util.ArrayList;

public class Teste {

	public static void main(String[] args) {
		AnaliseSintatica as = new ComandoSimples("Soma");
		AnaliseSintatica as1 = new ComandoSimples("Subtracao");
		
		AnaliseSintatica as2 = new ComandoSimples("Divisao");
		AnaliseSintatica as3 = new ComandoSimples("Multiplicacao");

		AnaliseSintatica asCondiconal = new ComandoCondicional(as2, as3);
		
		
		ArrayList<AnaliseSintatica> arrayComandos = new ArrayList<AnaliseSintatica>();
		
		arrayComandos.add(as);
		arrayComandos.add(as1);
		arrayComandos.add(asCondiconal);
		
		
		AnaliseSintatica asComposto = new ComandoComposto(arrayComandos);
		
		asComposto.execute();

	}

}
