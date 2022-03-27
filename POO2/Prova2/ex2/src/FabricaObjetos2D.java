package ex2;

public class FabricaObjetos2D extends FabricaObjetos {

	public Copo fabricarCopo() {
		return new Copo2D();
	}

	public Garrafa fabricarGarrafa() {
		return new Garrafa2D();
	}

	public Prato fabricarPrato() {
		return new Prato2D();
	}
	
	
}
