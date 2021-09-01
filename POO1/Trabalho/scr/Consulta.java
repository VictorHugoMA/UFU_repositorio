import java.util.ArrayList;

public class Consulta {
	private String dataCons;
	private String horaCons;
	private ArrayList<String> medicamentos = new ArrayList<>();
	private String obsSintomas;
	private String receita;
	private float valor;
	private DemaisFunc funcMarc;
	private Medico medico;
	private Paciente paciente;
	private ArrayList<Exame> exames = new ArrayList<>();
	
	public Consulta(Medico med, Paciente pac) {
		this.setMedico(med);
		this.setPaciente(pac);
	}
	
	
	public String getDataCons() {
		return dataCons;
	}
	public void setDataCons(String dataCons) {
		this.dataCons = dataCons;
	}
	public String getHoraCons() {
		return horaCons;
	}
	public void setHoraCons(String horaCons) {
		this.horaCons = horaCons;
	}
	public ArrayList<String> getMedicamentos() {
		return medicamentos;
	}
	public void setMedicamentos(ArrayList<String> medicamentos) {
		this.medicamentos = medicamentos;
	}
	public String getObsSintomas() {
		return obsSintomas;
	}
	public void setObsSintomas(String obsSintomas) {
		this.obsSintomas = obsSintomas;
	}
	public String getReceita() {
		return receita;
	}
	public void setReceita(String receita) {
		this.receita = receita;
	}
	public float getValor() {
		return valor;
	}
	public void setValor(float valor) {
		this.valor = valor;
	}
	public DemaisFunc getFuncMarc() {
		return funcMarc;
	}
	public void setFuncMarc(DemaisFunc funcMarc) {
		this.funcMarc = funcMarc;
	}
	public Medico getMedico() {
		return medico;
	}
	public void setMedico(Medico medico) {
		this.medico = medico;
	}
	public Paciente getPaciente() {
		return paciente;
	}
	public void setPaciente(Paciente paciente) {
		this.paciente = paciente;
	}
	public ArrayList<Exame> getExames() {
		return exames;
	}
	public void setExames(ArrayList<Exame> exames) {
		this.exames = exames;
	}
	
	
}
