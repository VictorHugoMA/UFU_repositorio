package personagens;
import comportamentos.*;

public class Main {

	public static void main(String[] args) {
		Personagem01 personagem1 = new Personagem01();
		
		System.out.println("Atributos do Personagem 1:");
		personagem1.pular();
		personagem1.correr();
		personagem1.atacar();
		
		System.out.println("\nModificado:");
		personagem1.setAtaque(new AtaqueFraco());
		personagem1.atacar();

	}

}
