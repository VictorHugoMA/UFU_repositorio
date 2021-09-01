import java.util.ArrayList;

public class Medico extends Funcionario{
	private int crm;
	private int numConsRealiz;
	private ArrayList<String> especialidades = new ArrayList<>();
	private ArrayList<PlanoSaude> planosAtend = new ArrayList<>();
	
	
	
	public Medico(ArrayList<PlanoSaude> planosAtend, String cpf) {
		this.planosAtend = planosAtend;
		this.setCpf(cpf);
	}


	public Medico() {
		
	}
	
	
	public int getCrm() {
		return crm;
	}
	public void setCrm(int crm) {
		this.crm = crm;
	}
	public ArrayList<String> getEspecialidades() {
		return especialidades;
	}
	public void setEspecialidades(ArrayList<String> especialidades) {
		this.especialidades = especialidades;
	}
	
	public void addEspecialidades(String especialidades) {
		this.especialidades.add(especialidades);
	}
	
	
	public int getNumConsRealiz() {
		return numConsRealiz;
	}
	public void setNumConsRealiz(int numConsRealiz) {
		this.numConsRealiz = numConsRealiz;
	}
	
	public ArrayList<PlanoSaude> getPlanosAtend() {
		return planosAtend;
	}
	public void setPlanosAtend(ArrayList<PlanoSaude> planosAtend) {
		this.planosAtend = planosAtend;
	}
	
	public void addPlanosAtend(PlanoSaude planoAtend) {
		this.planosAtend.add(planoAtend);
	}
	

}
