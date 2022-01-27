package personagens;
import java.util.Observable;
import java.util.Observer;

public class Inimigo extends Personagem implements Observer {
	
	public Inimigo(int x, int y) {
		super(x, y);
	}


	public void update(Observable objeto, Object arg) {
		Personagem personagem = (Personagem)objeto;
		
		if((this.getX()-personagem.getX()==0)&&(this.getY()-personagem.getY()==0)) {
			System.out.println("Inimigo atacou");
			personagem.perderLife(this.atacar());
			int distanciaFuga = personagem.correr();
			if(Math.random()>0.5) {
				personagem.setPosicao(personagem.getX()+distanciaFuga, personagem.getY()+distanciaFuga);
			}
			else {
				personagem.setPosicao(personagem.getX()-distanciaFuga, personagem.getY()-distanciaFuga);
				
			}
		}
		else {
			if(personagem.getX()>this.getX()) {
				this.setX(this.getX()+1);
			}
			else {
				this.setX(this.getX()-1);
				
			}
			if(personagem.getY()>this.getY()) {
				this.setY(this.getY()+1);
			}
			else {
				this.setY(this.getY()-1);
				
			}
		}
	}

}
