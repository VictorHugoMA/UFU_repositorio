package personagens;

import java.util.Observable;
import java.util.Observer;
import java.util.Random;

public class Jogador extends Personagem implements Observer{
	
	public Jogador(int x, int y) {
		super(x,y);
	}
	
	public void atacar2D(Inimigo inimigo) {
		if((Math.abs(this.getX() - inimigo.getX()) <=30) && (Math.abs(this.getY() - inimigo.getY()) <=30) ){
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

	@Override
	public void update(Observable o, Object arg) {
		// TODO Auto-generated method stub
		
	}
}
