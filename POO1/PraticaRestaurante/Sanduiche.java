
public class Sanduiche extends Prato {
	private String pao, carne, salada;

	
	public Sanduiche(float custo, float preco, int temp, String pao, String carne, String salada) {
		super(custo, preco, temp);
		this.setPao(pao);
		this.setCarne(carne);
		this.setSalada(salada);
	}	
	
	public Sanduiche(float custo, float preco, int temp) {
		super(custo, preco, temp);
	}
	
	public Sanduiche() {
		
	}


	public String getPao() {
		return pao;
	}

	public boolean setPao(String pao) {
		if(pao.length()>0) {
			this.pao = pao;
			return true;
		}
		else {
			return false;
		}
	}

	
	public String getCarne() {
		return carne;
	}

	public boolean setCarne(String carne) {
		if(carne.length()>0) {
			this.carne = carne;
			return true;
		}
		else {
			return false;
		}
	}


	public String getSalada() {
		return salada;
	}

	public boolean setSalada(String salada) {
		if(salada.length()>0) {
			this.salada = salada;
			return true;
		}
		else {
			return false;
		}
	}

	@Override
	public String toString() {
		return "Sanduiche (Pao: " + pao + ", Carne: " + carne + ", Salada: " + salada + ", Preco Venda: "+ this.getPrecoVenda() + ")";
	}
	
	
	
	
}
