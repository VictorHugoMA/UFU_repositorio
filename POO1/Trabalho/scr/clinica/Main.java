package clinica;
import java.text.ParseException;
import java.util.ArrayList;

public class Main {

	public static void main(String[] args) throws ParseException {
		Endereco end = new Endereco("Joao Naves", 1000);
		PlanoSaude ps = new PlanoSaude("Unimed", 150f);
		Exame ex1 = new Exame("Ressonancia");
		Medico m1 = new Medico("Rafael", 200f);
		DemaisFunc dm1 = new DemaisFunc("Jorge", "Recepcionista");
		PacCPlano pacC = new PacCPlano("Daniel", "88858413687", ps);
		PacCPlano pacC2 = new PacCPlano("Victor", "15635558674", "120", "Solteiro", end, "Masc", "20/11/2001", ps, 12011, "10/05/2012", false);
		PacSPlano pacS = new PacSPlano("Davi", "73385255600", end, "10/10/2002");		
		Consulta c1 = new Consulta(m1 ,pacC);
		Consulta c2 = new Consulta(m1 ,pacS);
		
		ArrayList<String> medicamentos = new ArrayList<>();
		ArrayList<Exame> exames= new ArrayList<>();
		
		medicamentos.add("Dorflex");
		exames.add(ex1);
		
		m1.setCpf("73385255600");
		m1.setEndereco(end);
		m1.addPlanosAtend(ps);
		
		
		System.out.print("Teste CPF: ");
		if(pacC2.setCpf("15635558674")) {
			System.out.println("Valido");
			System.out.println(pacC2.getCpf());
			
		}
		else {
			System.out.println("Invalido");
		}
		System.out.println();
		
		
		
		m1.setStrDataAdmi("11/09/2020");
		System.out.println("Data Admissao do Medico " + m1.getNome()+": " + m1.getStrDataAdmi());
		
		DemaisFunc.setLimite(1);
		DemaisFunc.setValorGrat(500f);
		dm1.setSalarioBase(1100f);
		
		
		c1.setStrDataHoraCons("02/09/2021 15:30");
		c1.setFuncMarc(dm1);
		c1.realizarConsComPront("Dor de cabeca", "Repouso e medicamento", medicamentos, exames);
		c1.addMedicamentos("Novalgina");
		
		c2.setStrDataHoraCons("04/09/2021 10:30");
		c1.setFuncMarc(dm1);
		c2.realizarCons();
		c2.setObsSintomas("Dor no dente");
		c2.setReceita("Medicamento");
		c2.addMedicamentos("Dipirona");
		c2.addExames(ex1);
		
		
		System.out.println(pacC2.mostraDados());
		System.out.println(pacS.mostraDados());
		System.out.println(m1.mostraDados());	
				
		
		System.out.println(c1.mostrarDados());
		System.out.println(c2.mostrarDados());
		
		System.out.println("\nData da Ultima consulta do Paciente " +pacC.getNome() + ": "+ pacC.getStrDataUltCons());
		
		System.out.println("\nNumero de consultas no mes: " + DemaisFunc.getNumConsTot());

		System.out.println("\nSalario do Medico "+ m1.getNome()+ ": "+ m1.calcSalario());
		
		System.out.println("\nSalario do Funcionario "+ dm1.getNome()+ " (" + dm1.getCargo()+"): "+ dm1.calcSalario());
		
		System.out.println(pacC2.geraRecibo());
		
		
	}

}
