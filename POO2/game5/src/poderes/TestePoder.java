package poderes;

import comportamentos.*;

public class TestePoder {

	public static void main(String[] args) {
		Ataque af = new AtaqueForte();
		System.out.println(af.atacar());

		af = new Chamas(af);
		af = new Eletrico(af);
		af = new Necrose(af);
		System.out.println(af.atacar());

	}

}
