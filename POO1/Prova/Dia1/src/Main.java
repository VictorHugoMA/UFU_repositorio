
public class Main {

	public static void main(String[] args) {
		Cliente c = new Cliente("Victor", "15635558674", "120");
		ViagemAerea va = new ViagemAerea();
		va.setCliente(c);
		
		System.out.println(va.retornaDados());

	}

}
