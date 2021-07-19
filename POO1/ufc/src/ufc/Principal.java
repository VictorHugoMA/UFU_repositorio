package ufc;

public class Principal {

	public static void main(String[] args) {
		Lutador l[] = new Lutador[3];
		
		
		l[0] = new Lutador("Victor", "Brasil", 19, 1.84f, 75, 10, 2, 1);
		
		l[1] = new Lutador("Alisson", "Brasil", 17, 1.80f, 60, 7, 3, 3);
		
		l[2] = new Lutador("Max", "Holanda", 22, 1.82f, 74, 5, 5, 5);
		
		Luta UFC245 = new Luta();
		
		UFC245.marcarLuta(l[0], l[2]);
		UFC245.lutar();
		
		
		l[0].status();
		l[2].status();

	}

}
