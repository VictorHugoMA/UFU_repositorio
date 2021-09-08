
public class Pizza extends Prato {
	private String molho, recheio, borda;

	
	
	public Pizza(float custo, float preco, int temp, String molho, String recheio, String borda) {
		super(custo, preco, temp);
		this.setMolho(molho);
		this.setRecheio(recheio);
		this.setBorda(borda);
	}

	public Pizza(float custo, float preco, int temp) {
		super(custo, preco, temp);
	}
	
	public Pizza() {
		
	}

	public String getMolho() {
		return molho;
	}

	public boolean setMolho(String molho) {
		if(molho.length()>0) {
			this.molho = molho;
			return true;
		}
		else {
			return false;
		}
	}

	
	public String getRecheio() {
		return recheio;
	}

	public boolean setRecheio(String recheio) {
		if(recheio.length()>0) {
			this.recheio = recheio;
			return true;
		}
		else {
			return false;
		}
	}

	
	public String getBorda() {
		return borda;
	}

	public boolean setBorda(String borda) {
		if(borda.length()>0) {
			this.borda = borda;
			return true;
		}
		else {
			return false;
		}
	}

	@Override
	public String toString() {
		return "Pizza (Molho: " + molho + ", Recheio: " + recheio + ", Borda: " + borda +  ", Preco Venda: "+ this.getPrecoVenda()  + ")";
	}
	
	
	
}
