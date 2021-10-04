
public class Viagem {
	private Cliente cliente;
	private String origem, destino, data;
	private int duracao; //em minutos
	private String motivo;
	
	
	public Viagem(Cliente cl, String ori, String dest, String dt, int dur, String mot) {
		this.setCliente(cl);
		this.setOrigem(ori);
		this.setDestino(dest);
		this.setData(dt);
		this.setDuracao(dur);
		this.setMotivo(mot);
	}
	
	public Viagem() {
		
	}

	public Cliente getCliente() {
		return cliente;
	}
	
	public void setCliente(Cliente cl) {
		this.cliente=cl;
	}
	
	public void setCliente(String nome, String cpf, String rg) {
		this.cliente = new Cliente(nome, cpf, rg);
	}
	
	
	public String getOrigem() {
		return origem;
	}
	public boolean setOrigem(String origem) {
		if(origem.length()>0) {
			this.origem = origem;
			return true;
		}
		else {
			return false;
		}
	}
	public String getDestino() {
		return destino;
	}
	public boolean setDestino(String destino) {
		if(destino.length()>0) {
			this.destino = destino;
			return true;
		}
		else {
			return false;
		}
	}
	public String getData() {
		return data;
	}
	public boolean setData(String data) {
		if(data.length()>0) {
			this.data = data;
			return true;
		}
		else {
			return false;
		}
	}
	public int getDuracao() {
		return duracao;
	}
	public boolean setDuracao(int duracao) {
		if(duracao>0) {
			this.duracao = duracao;
			return true;
		}
		else {
			return false;
		}
	}
	public String getMotivo() {
		return motivo;
	}
	
	public boolean setMotivo(String motivo) {
		if(motivo.equals("Turismo")|| motivo.equals("Negocio") || motivo.equals("Visita familiar")) {
			this.motivo = motivo;
			return true;
		}
		else {
			return false;
		}
	}

	public String retornaDados() {
		return "Viagem\nCliente: " + cliente.retornaDados() + "\nOrigem: " + this.getOrigem() + "\nDestino: " + this.getDestino() +
				"\nData: " + this.getData() + "\nDuracao: " + this.getDuracao() + "\nMotivo: " + this.getMotivo();
	}
	

	
	
	
}
