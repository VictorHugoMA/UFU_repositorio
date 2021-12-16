package personagens;

public class Main {

	public static void main(String[] args) {
		Personagem personagem = new Personagem();
		
		personagem.atacar();
		personagem.correr();
		personagem.ganharLife(20);
		personagem.atacar();
		personagem.correr();
		personagem.perderLife(80);
		personagem.atacar();
		personagem.correr();
		personagem.perderLife(10);

	}

}
