
public class Main {

	public static void main(String[] args) {
		Poupanca p[] = new Poupanca[5];
		
		p[0] = new Poupanca(156355, 1);
		
		p[0].setSaldo(1000f);
		p[0].setTaxaRend(0.5f);
		
		System.out.println("Conta: " + p[0].getNumConta());
		System.out.println("Saldo: " + p[0].getSaldo());
		System.out.println("Taxa de rendimento: " + p[0].getTaxaRend());
		System.out.println("Novo Saldo: " + p[0].calcularNovoSaldo());
		System.out.println();
		
		
		
		Especial e[] = new Especial[5];
		
		e[0] = new Especial(133755, 2);
		
		e[0].setSaldo(1000f);
		e[0].setLimite(1000f);
		
		
		System.out.println("Conta: " + e[0].getNumConta());
		System.out.println("Saldo: " + e[0].getSaldo());
		System.out.println("Limite: " + e[0].getLimite());
		
		
		float valorSaque = 2001f;
		System.out.println("Valor de tentativa de saque: " + valorSaque);
		
		if(e[0].saque(valorSaque)==1) {
			System.out.println("Saque efetuado");
		}
		else {
			System.out.println("Saque negado");
		}
		
	}

}
