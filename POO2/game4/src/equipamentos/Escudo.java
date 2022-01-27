package equipamentos;

public abstract class Escudo {
	private Escudo proximoEscudo;
	
	public abstract int protegeAtaque(int valorAtaque);

	public Escudo getProximoEscudo() {
		return proximoEscudo;
	}

	public void setProximoEscudo(Escudo proximoEscudo) {
		this.proximoEscudo = proximoEscudo;
	}
	
}
