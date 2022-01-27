package equipamentos;

public class EscudoArmadura extends Escudo {

	public int protegeAtaque(int valorAtaque) {
		int valorAtaquePassou = valorAtaque-1;
		
		if(valorAtaquePassou<0) {
			valorAtaquePassou=0;
		}
		if(valorAtaquePassou!=0 && getProximoEscudo()!=null) {
			return getProximoEscudo().protegeAtaque(valorAtaquePassou);
		}
		else {
			return valorAtaquePassou;
			//dano sofrido
			
		}
		
	}
}
