package ex2;

public class FabricaObjetos3D extends FabricaObjetos {

	public Copo fabricarCopo() {
		return new Copo3D();
	}

	public Garrafa fabricarGarrafa() {
		return new Garrafa3D();
	}

	public Prato fabricarPrato() {
		return new Prato3D();
	}
}
