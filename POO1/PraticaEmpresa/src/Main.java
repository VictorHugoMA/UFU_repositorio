import java.util.ArrayList;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		DadosEmpregados de = new DadosEmpregados();
		DadosEmpregados dl = new DadosEmpregados();
		ArrayList<Empregado> vetorEmp = new ArrayList<Empregado>();
		String cpf;
		int ano, num;
		Empregado em = null, temp = null;
		
		Scanner entrada = new Scanner(System.in);
		
		for(int i=0; i<5; i++) {
			System.out.println("Entre com os dados");			
			System.out.println("Funcionario " + (i+1));
			do {
				System.out.println("CPF:");				
				cpf = entrada.next();
				
			}
			while(!ValidaCPF.isCPF(cpf));
			System.out.println("Ano de nascimento: ");
			ano = entrada.nextInt();
			System.out.println("Salario: ");
			num = entrada.nextInt();
			temp = new Empregado(cpf,ano,num);
			de.cadastrar(temp);
			
			de.gravarTxtConc(temp.mostrarDados());
		}
		de.gravarBin();
		
		System.out.println("\nListando:\n");
		de.listar();
		
		System.out.println("Busque por um CPF");
		cpf = entrada.next();
		em = de.buscar(cpf);
		if(em!=null) {
			System.out.println("Empregado encontrado\n" + em.mostrarDados());
		}
		else {
			System.out.println("Empregado nao encontrado");	
		}
		
		System.out.print("Busque os empregados com salario maior:");
		num = entrada.nextInt();
		vetorEmp = de.buscarSalMaior(num);
		if(!vetorEmp.isEmpty()) {
			System.out.println("Empregado(s) encontrado(s)\n");
			for(Empregado v : vetorEmp) {
				System.out.println(v.mostrarDados());
			}
		}
		else {
			System.out.println("Empregado nao encontrado\n");	
		}
		if(vetorEmp.size()>1) {
		System.out.println("Comparando ano de nascimento do Empregado 1 com o 2 da listagem anterior");
		num=vetorEmp.get(0).compareTo(vetorEmp.get(1));
			if(num==-1) {
				System.out.println("Funcionario 1 nasceu antes do 2\n");
			}
			else if(num==1) {
				System.out.println("Funcionario 2 nasceu antes do 1\n");
			}
			else {
				System.out.println("Funcionario 1 e 2 nasceram no mesmo ano\n");				
			}
		}
			
		
		dl = DadosEmpregados.leituraBin();
		if(dl!=null) {
			System.out.println("Leitura do arquivo binario");
			dl.listar();		
		}

		entrada.close();
	}
}
