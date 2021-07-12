public class Principal {
    public static void main(String[] args) throws Exception {
        Caneta c1 = new Caneta();
        c1.modelo = "Bic";
        c1.carga = 90;
        c1.tampada = true;

        //sysout
        System.out.println("Com println:");
        System.out.println("Caneta " + c1.modelo + " com carga de " + c1.carga + "%\n");
        
        System.out.println("Com Format:");
        System.out.format("Caneta %s com carga de %d%%", c1.modelo, c1.carga);
    }
}
