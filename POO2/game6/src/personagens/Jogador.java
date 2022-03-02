package personagens;

import java.util.Observable;
import java.util.Observer;
import java.util.Random;

import equipamentos.Escudo;

public class Jogador extends Personagem {
	
	public Jogador(int x, int y) {
		super(x,y);
	}
	public Jogador(int x, int y , boolean escudo) {
		super(x,y, escudo);
	}
	public Jogador() {
		
	}
	
	public void atacar2D(Inimigo inimigo) {
		if((Math.abs(this.getX() - inimigo.getX()) <=15) && (Math.abs(this.getY() - inimigo.getY()) <=15) ){  // <=15 para facilitar o acerto
			System.out.println("Jogador atacou");
			inimigo.perderLife(this.atacar());
			int distanciaJogado = new Random().nextInt(150) + this.atacar();
            inimigo.setPosicao(inimigo.getX()+ distanciaJogado, inimigo.getY() + distanciaJogado);
            if(inimigo.getLife()==0) {
            	this.deleteObserver(inimigo);
            	System.out.println("Inimigo morreu");
            }
           
        }
	}

}
