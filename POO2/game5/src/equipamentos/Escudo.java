package equipamentos;

public abstract class Escudo {
	private Escudo proximoEscudo;
	private int protecao = 0;
	
	
	public int protegeAtaque(int valorAtaque) {
		int valorAtaquePassou = valorAtaque - this.getProtecao();
		
		if(valorAtaquePassou<0) {
			valorAtaquePassou=0;
		}
		if(valorAtaquePassou!=0 && getProximoEscudo()!=null) {
			return getProximoEscudo().protegeAtaque(valorAtaquePassou);
		}
		else {
			return valorAtaquePassou; //dano sofrido
		}
		
	}

	public Escudo getProximoEscudo() {
		return proximoEscudo;
	}
	public void setProximoEscudo(Escudo proximoEscudo) {
		this.proximoEscudo = proximoEscudo;
	}
	public int getProtecao() {
		return protecao;
	}
	
	public void setProtecao(int protecao) {
		this.protecao = protecao;
	}
	
}
