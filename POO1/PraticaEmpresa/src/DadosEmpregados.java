import java.io.Serializable;
import java.util.ArrayList;


public class DadosEmpregados implements Serializable {
	private static final long serialVersionUID = 1L;
	private ArrayList<Empregado> vetEmp = new ArrayList<>();
	
	public void cadastrar(Empregado emp) {
		this.vetEmp.add(emp);
	}
	
	public void listar() {
		for(Empregado e: this.vetEmp) {
			System.out.println(e.mostrarDados());
		}
	}
	
	public Empregado buscar(String cpf) {
		Empregado c = null;
		if(!ValidaCPF.isCPF(cpf)) {
			return c;
		}
		for(Empregado e: this.vetEmp) {
			if(e.getCpf().equals(ValidaCPF.imprimeCPF(cpf))) {
				c = e;
				break;
			}
		}
		return c;
	}
	
	public ArrayList<Empregado> buscarSalMaior(float sal){
		ArrayList<Empregado> vetSalM = new ArrayList<Empregado>();
		
		for(Empregado e: this.vetEmp) {
			if(e.getSalario()>sal) {
				vetSalM.add(e);
			}
		}
		return vetSalM;
	}
	
	public boolean excluir(String cpf) {
		Empregado c = this.buscar(cpf);
		if(c!=null) {
			this.vetEmp.remove(c);
			return true;
		}
		else {
			return false;
		}
	}
	
	public boolean gravarBin() {
		if(ArquivoIO.escritaObjeto(this, "arquivoBin.arq")) { //salva o objeto no arquivo binario
			return true;
		}
		else {
			return false;
		}
	}
	
	public boolean gravarTxtConc(String dado) {
		if(ArquivoIO.escritaTextoConc(dado, "arquivo.txt")) {
			return true;
		}
		else {
			return false;
		}
	}
	
	public static DadosEmpregados leituraBin() {
		return (DadosEmpregados)ArquivoIO.leituraObjeto("arquivoBin.arq");
	}
	
	
}
