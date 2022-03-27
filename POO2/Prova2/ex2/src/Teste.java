package ex2;

public class Teste {

	public static void main(String[] args) {
		FabricaObjetos2D fab2D = new FabricaObjetos2D();
		Copo copo = fab2D.fabricarCopo();
		Garrafa garrafa = fab2D.fabricarGarrafa();
		
		copo.draw();
		garrafa.draw();
		
		
		FabricaObjetos3D fab3D = new FabricaObjetos3D();
		Prato prato = fab3D.fabricarPrato();
		
		prato.draw();
		

	}

}
