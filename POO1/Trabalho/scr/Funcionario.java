import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.Date;

public abstract class Funcionario extends Pessoa{
	private Date dataAdmi;
	private int numCartTrab;
	private String usuario, senha;
	
	SimpleDateFormat formato = new SimpleDateFormat("dd/MM/yyyy"); 
	
	
	
	public Date getDataAdmi() {
		return dataAdmi;
	}
	public void setDataAdmi(Date dataAdmi) {
		this.dataAdmi = dataAdmi;
	}
	public void setStrDataAdmi(String dataAdmi) throws ParseException {
		this.dataAdmi = formato.parse(dataAdmi);
	}
	
	public int getNumCartTrab() {
		return numCartTrab;
	}
	public void setNumCartTrab(int numCartTrab) {
		this.numCartTrab = numCartTrab;
	}
	public String getUsuario() {
		return usuario;
	}
	public void setUsuario(String usuario) {
		this.usuario = usuario;
	}
	public String getSenha() {
		return senha;
	}
	public void setSenha(String senha) {
		this.senha = senha;
	}
	
	
}
