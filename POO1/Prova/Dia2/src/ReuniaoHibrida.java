
public class ReuniaoHibrida extends Reuniao{
	private String plataforma, sala;
	private int participantesOnl, participantesPre;
	
	
	public ReuniaoHibrida(Funcionario func, String da, String hrIni, String hrFim, String mot, String plataforma, String sala, int onl, int pre) {
		super(func, da, hrIni, hrFim, mot);
		this.setPlataforma(plataforma);
		this.setSala(sala);
		this.setParticipantesOnl(onl);
		this.setParticipantesPre(pre);
	}
	
	public ReuniaoHibrida() {
		
	}
	
	public String getPlataforma() {
		return plataforma;
	}
	public boolean setPlataforma(String plataforma) {
		if(plataforma.length()>0) {
			this.plataforma = plataforma;
			return true;
		}
		else {
			return false;
		}
	}
	public String getSala() {
		return sala;
	}
	public boolean setSala(String sala) {
		if(sala.length()>0) {
			this.sala = sala;
			return true;
		}
		else {
			return false;
		}
	}
	public int getParticipantesOnl() {
		return participantesOnl;
	}
	public boolean setParticipantesOnl(int participantesOnl) {
		if(participantesOnl>0) {
			this.participantesOnl = participantesOnl;
			return true;
		}
		else {
			return false;
		}
	}
	public int getParticipantesPre() {
		return participantesPre;
	}
	public boolean setParticipantesPre(int participantesPre) {
		if(participantesPre>0) {
			this.participantesPre = participantesPre;
			return true;
		}
		else {
			return false;
		}
	}
	
	public float calculaCusto() {
		return super.calculaCusto()+50.0f;
	}
	
	
}
