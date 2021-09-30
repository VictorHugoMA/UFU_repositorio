public class Main {

    public static void main(String[] args) {
        Funcionario f[] = new Funcionario[5];
        
        f[0] = new Gerente("Victor", "120", 5000);
        
        System.out.println(f[0].mostrarDados());
        
        f[1] = new Assistente("Pedro","111", 3000);

        System.out.println("\n"+ f[1].mostrarDados());
        
        f[2] = new Vendedor("Guilherme","222", 1000,500);

        System.out.println("\n"+ f[2].mostrarDados());
        
        double folhaSalarial = 0;
        
        for(int i = 0; i < 3; i++ ) {
        	
        	folhaSalarial += f[i].calcSalario(); 
        }
        
        System.out.println("\nFolha Salarial : R$ "+ folhaSalarial);
        

    }

}