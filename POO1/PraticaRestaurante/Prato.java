
public class Prato {
	private float custoAss;
	private float precoVenda;
	private int tempoPrep; //em minutos
	
	public Prato(float custo, float preco, int temp) {
		this.setCustoAss(custo);
		this.setPrecoVenda(preco);
		this.setTempoPrep(temp);
	}
	
	public Prato() {
		
	}
	
	
	public float getCustoAss() {
		return custoAss;
	}
	
	public boolean setCustoAss(float custoAss) {
		if(custoAss>0) {
			this.custoAss = custoAss;
			return true;
		}
		else {
			return false;
		}
	}
	
	
	public float getPrecoVenda() {
		return precoVenda;
	}
	
	public boolean setPrecoVenda(float precoVenda) {
		if(precoVenda>0) {
			this.precoVenda = precoVenda;
			return true;
		}
		else {
			return false;
		}
	}
	
	
	public int getTempoPrep() {
		return tempoPrep;
	}
	
	public boolean setTempoPrep(int tempoPrep) {
		if(tempoPrep>0) {
			this.tempoPrep = tempoPrep;
			return true;
		}
		else {
			return false;
		}
	}
	
	
}
