package equipamentos;

public class teste {

	public static void main(String[] args) {
		Escudo escudoMao = new EscudoMao();
		Escudo escudoArmadura = new EscudoArmadura();
		
		escudoMao.setProximoEscudo(escudoArmadura);
		escudoArmadura.setProximoEscudo(null);
		
		System.out.println(escudoMao.protegeAtaque(10));

	}

}
