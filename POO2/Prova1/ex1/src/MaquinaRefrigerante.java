package ex1;

public class MaquinaRefrigerante {

	public static void main(String[] args) {
		Fenda f10 = new Fenda_10();
		Fenda f12 = new Fenda_12();
		Fenda f14 = new Fenda_14();
		Fenda f16 = new Fenda_16();
		Fenda f18 = new Fenda_18();
		
		f10.setSucessor(f12);
		f12.setSucessor(f14);
		f14.setSucessor(f16);
		f16.setSucessor(f18);
		f18.setSucessor(null);
		
		//passando os diametros(cm) como parametro
		f10.processaMoeda(1.8f);
		f10.processaMoeda(1.2f);
		f10.processaMoeda(1f);
		f10.processaMoeda(1.4f);

	}

}
