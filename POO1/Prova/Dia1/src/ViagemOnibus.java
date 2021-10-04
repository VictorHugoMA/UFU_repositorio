
public class ViagemOnibus extends Viagem {
	private String placaOni, empresa;

	public String getPlacaOni() {
		return placaOni;
	}

	public boolean setPlacaOni(String placaOni) {
		if(placaOni.length()>0) {
			this.placaOni = placaOni;
			return true;
		}
		else {
			return false;
		}
	}

	public String getEmpresa() {
		return empresa;
	}

	public boolean setEmpresa(String empresa) {
		if(empresa.length()>0) {
			this.empresa = empresa;
			return true;
		}
		else {
			return false;
		}
	}
	
	
}
