import java.util.Date;
import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.ArrayList;

public class Pedido {
	
	
	private Cliente cliente = new Cliente();
	private Date dataPedido;
	private float taxaServ;
	private float valorTotPr, valorTotPed;
	private ArrayList<Pizza> pizzas = new ArrayList<>();	
	private ArrayList<Sanduiche> sanduiches = new ArrayList<>();
	private SimpleDateFormat formato = new SimpleDateFormat("dd/MM/yyyy");
	
	
	public Pedido(String cpf, String data) throws ParseException {
		this.cliente.setCpf(cpf);
		this.setStrDataPedido(data);
	}
	
	
	public String getNomeCliente() {
		return cliente.getNome();
	}
	
	//
	public boolean setNomeCliente(String nome) {
		if(this.cliente.setNome(nome)) {
			return true;
		}
		else {
			return false;
		}
			
	}
	
	public String getCpf() {
		return ValidaCPF.imprimeCPF(cliente.getCpf());
	}
	
	public boolean setCpf(String cpf) {
		if(this.cliente.setCpf(cpf)) {
			return true;
		}
		else {
			return false;
		}
	}
	

	public Date getDataPedido() {
		return dataPedido;
	}


	public void setDataPedido(Date dataPedido) {
		this.dataPedido = dataPedido;
	}

	public String getStrdataPed() {
		return formato.format(dataPedido);
	}
	
	public void setStrDataPedido(String dataPedido) throws ParseException {
		this.dataPedido = formato.parse(dataPedido);
	}

	public float getTaxaServ() {
		return taxaServ;
	}

	//private pois tem um metodo que calcula 
	private boolean setTaxaServ(float taxaServ) {
		if(taxaServ>0) {
			this.taxaServ = taxaServ;
			return true;
		}
		else {
			return false;
		}
	}


	public float getValorTotPr() {
		return valorTotPr;
	}


	private boolean setValorTotPr(float valorTotPr) {
		if(valorTotPr>0) {
			this.valorTotPr = valorTotPr;
			return true;
		}
		else {
			return false;
		}
	}


	public float getValorTotPed() {
		return valorTotPed;
	}


	private boolean setValorTotPed(float valorTotPed) {
		if(valorTotPed>0) {
			this.valorTotPed = valorTotPed;
			return true;
		}
		else {
			return false;
		}
	}


	public ArrayList<Pizza> getPizzas() {
		return pizzas;
	}


	public void setPizzas(ArrayList<Pizza> pizzas) {
		this.pizzas = pizzas;
	}


	public ArrayList<Sanduiche> getSanduiches() {
		return sanduiches;
	}


	public void setSanduiches(ArrayList<Sanduiche> sanduiches) {
		this.sanduiches = sanduiches;
	}


	
	public void addPizza(Pizza p) {
		this.pizzas.add(p);
	}
	
	public void addSanduiche(Sanduiche s) {
		this.sanduiches.add(s);
	}
	
	public void calcTotPr() {
		this.setValorTotPr(0);
		for(Pizza p: pizzas) {
			this.setValorTotPr(this.getValorTotPr()+p.getPrecoVenda());
		}
		for(Sanduiche s: sanduiches) {
			this.setValorTotPr(this.getValorTotPr()+s.getPrecoVenda());
		}
	}
	
	public void calcTaxaServ() {
		if(this.getValorTotPr()==0) {
			this.calcTotPr();
		}
		this.setTaxaServ(this.getValorTotPr()*0.1f);
	}
	
	public void calcTotPed() {
		if(this.getValorTotPr()==0) {
			this.calcTotPr();
		}
		if(this.getTaxaServ()==0) {
			this.calcTaxaServ();
		}
		this.setValorTotPed(this.getValorTotPr()+this.getTaxaServ());
		
	}

	
	@Override
	public String toString() {
		return "\nPedido\nCliente: "+cliente.getNome() + "\nCPF: " + cliente.getCpf() + "\nData do pedido: " + this.getStrdataPed() + "\nValor total dos pratos: " + valorTotPr+
				"\nTaxa de Servico: " + taxaServ + "\nValor total dos pedidos: " + valorTotPed + "\nPizzas: " + pizzas.toString() + "\nSanduiches: " + sanduiches.toString();
	}
	


}
