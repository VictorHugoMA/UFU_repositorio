import javax.swing.JOptionPane;

public class Mes {
	String[] mes = {"Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho",
			 		"Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};
	
	
	public void repeteMostraMes() throws Exception {
		int numDig;
		do {
			numDig = mostraMes();
		}
		while(numDig!=0);
	}
	
	public int mostraMes() throws Exception {
		String strMes = JOptionPane.showInputDialog("Digite o numero do mes");
		int numMes = Integer.parseInt(strMes);
		
		if(numMes<0 || numMes>12) {
			throw new Exception("Fora do intervalo");
		}
		
		JOptionPane.showMessageDialog(null, mes[numMes-1]);
		
		return numMes;
	}
}
