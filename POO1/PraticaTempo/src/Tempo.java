
public class Tempo {
	private int hora, minuto, segundo;
	
	public Tempo(int h, int m, int s) {
		this.setHora(h);
		this.setMinuto(m);
		this.setSegundo(s);
	}
	
	public Tempo(int h, int m) {
		this.setHora(h);
		this.setMinuto(m);
		this.setSegundo(0);
	}
	
	public Tempo(int h) {
		this.setHora(h);
		this.setMinuto(0);
		this.setSegundo(0);
	}
	
	public Tempo(Tempo t) {
		this.setHora(t.getHora());
		this.setMinuto(t.getMinuto());
		this.setSegundo(t.getSegundo());
	}
	
	public void mostraTempo() {
		System.out.println(String.format("%02d:%02d:%02d",this.getHora(),this.getMinuto(), this.getSegundo()));
	}
	
	public void incrementaMin() {
		if(this.getMinuto()==59) {
			this.setHora(this.getHora()+1);
			this.setMinuto(0);
			
		}
		else {
			this.setMinuto(this.getMinuto()+1);
		}
	}
	
	public void decrementaMin() {
		if(this.getMinuto()==0 && this.getHora()==0) {
			this.setMinuto(59);
			this.setHora(23);
			
		}
		else if(this.getMinuto()==0) {
			this.setMinuto(59);
			this.setHora(this.getHora()-1);
		}
		
		else {
			this.setMinuto(this.getMinuto()-1);
		}
	}
	
	
	public int getHora() {
		return hora;
	}

	public void setHora(int hora) {
		if(hora<0 || hora>23) {
			this.hora=0;
		}
		else {
			this.hora = hora;
		}
	}

	public int getMinuto() {
		return minuto;
	}

	public void setMinuto(int minuto) {
		if(minuto<0 || minuto>59) {
			this.minuto = 0;
			
		}
		else {
			this.minuto = minuto;			
		}
	}

	public int getSegundo() {
		return segundo;
	}

	public void setSegundo(int segundo) {
		if(segundo<0 || segundo>59) {
			this.segundo = 0;
			
		}
		this.segundo = segundo;
	}
	
	
}
