
public class Main {

	public static void main(String[] args) {
		Tempo t1 = new Tempo(23,59,0);
		Tempo t2 = new Tempo(12,31,0);
		Tempo t3 = new Tempo(23,59);
		Tempo t4 = new Tempo(23);
		Tempo t5 = new Tempo(t1);
		
		
		System.out.println("Tempo 1");
		t1.mostraTempo();
		t1.incrementaMin();
		System.out.println("Incrementa");
		t1.mostraTempo();
		
		System.out.println("\nTempo 2");
		t2.mostraTempo();
		t2.decrementaMin();
		System.out.println("Decrementa");
		t2.mostraTempo();
		
		System.out.println("\nTempo 3");
		t3.mostraTempo();
		
		System.out.println("\nTempo 4");
		t4.mostraTempo();
		
		System.out.println("\nTempo 5");
		t5.mostraTempo();
		
		
		

		

	}

}
