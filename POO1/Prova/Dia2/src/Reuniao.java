
public class Reuniao {
	private Funcionario funcCoo;
	private String data, hrInicio, hrFim;
	private String motivo;
	
	public Reuniao(Funcionario func, String da, String hrIni, String hrFim, String mot) {
		this.setFuncCoo(func);
		this.setData(da);
		this.setHrInicio(hrIni);
		this.setHrFim(hrFim);
		this.setMotivo(mot);
	}
	
	public Reuniao() {
		
	}
	
	public Funcionario getFuncCoo() {
		return funcCoo;
	}
	public void setFuncCoo(Funcionario funcCoo) {
		this.funcCoo = funcCoo;
	}
	public String getData() {
		return data;
	}
	public void setData(String data) {
		this.data = data;
	}
	public String getHrInicio() {
		return hrInicio;
	}
	public void setHrInicio(String hrInicio) {
		this.hrInicio = hrInicio;
	}
	public String getHrFim() {
		return hrFim;
	}
	public void setHrFim(String hrFim) {
		this.hrFim = hrFim;
	}
	public String getMotivo() {
		return motivo;
	}
	public boolean setMotivo(String motivo) {
		if(motivo.equals("Ponto de controle")|| motivo.equals("Novos projetos") || motivo.equals("Feedback")) {
			this.motivo = motivo;
			return true;
		}
		else {
			return false;
		}
	}
	
	public float calculaCusto() {
		if(this.getMotivo().equals("Ponto de controle")) {
			return 100.0f;
		}
		else if(this.getMotivo().equals("Novos projetos")) {
			return 200.0f;
		}
		else {
			return 300.0f;
		}
	}
	
}
