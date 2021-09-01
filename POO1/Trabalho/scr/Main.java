import java.text.ParseException;

public class Main {

	public static void main(String[] args) throws ParseException {
		Pessoa p1 = new Pessoa();
		
		if(p1.setCpf("15635558674")) {
			System.out.println("Valido");
			System.out.println("CPF: " + p1.getCpf());
			
		}
		else {
			System.out.println("Invalido");
		}
		
		
		Medico m1 = new Medico();
		
		m1.setStrDataAdmi("11/09/2020");
		
		System.out.println(m1.getDataAdmi());
		
		

	}

}
