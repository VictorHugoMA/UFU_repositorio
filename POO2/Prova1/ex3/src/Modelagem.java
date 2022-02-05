package ex3;

public class Modelagem {

	public static void main(String[] args) {
		FormaGeometrica circulo = new Circulo();
		System.out.println(circulo.desenhar());
		
		circulo = new Sombra(circulo);
		System.out.println(circulo.desenhar());

		circulo = new Textura(circulo);
		System.out.println(circulo.desenhar());
		
		

	}

}
