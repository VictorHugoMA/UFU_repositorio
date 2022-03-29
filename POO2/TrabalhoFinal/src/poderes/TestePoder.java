package poderes;

import comportamentos.*;

public class TestePoder {

	public static void main(String[] args) {
		Ataque af = AtaqueForte.getInstancia();
		System.out.println(af.atacar());

		af = new Chamas(af);
		af = new Eletrico(af);
		af = new Necrose(af);
		System.out.println(af.atacar());

	}

}
