
public class Principal {

	public static void main(String[] args) {
		Aluno p1 = new Aluno();
		Professor p2 = new Professor();
		Funcionario p3 = new Funcionario();
		Visitante p4 = new Visitante();
		Bolsista p5 = new Bolsista();
		
		p1.setNome("Victor");
		p2.setNome("Elaine");
		p3.setNome("Joao");
		p4.setNome("Claudia");
		p5.setNome("Giovanna");
		
		p1.setIdade(19);
		p2.setIdade(30);
		p3.setIdade(35);
		
		p1.setSexo("Masc");
		p2.setSexo("Fem");
		p3.setSexo("Masc");

		
		p1.setMat(12011);
		p2.setEspecialidade("Programacao");
		p3.setSetor("Administracao");
		
		p1.setCurso("POO");
		p2.setSalario(2000);
		p3.setTrabalhando(true);
		
		p1.cancelarMat();
		p2.recebeAum(500);
		p3.mudaTrab();
		
		p1.pagarMensalidade();
		p5.pagarMensalidade();
		
		
		System.out.println(p1.toString());
		System.out.println(p2.toString());
		System.out.println(p3.toString());
		System.out.println(p4.toString());
		System.out.println(p5.toString());


	}

}
