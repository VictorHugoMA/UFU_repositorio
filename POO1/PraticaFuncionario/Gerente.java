public class Gerente extends Funcionario{

    public Gerente(String n, String mat, double sal) {
        super(n, mat, sal);
    }

    public double calcSalario() {
        return this.getSalarioBase()*2;
    }
    
    public String mostrarDados() {
        return "\nNome: "+ this.getNome()+ "\nMatricula: "+this.getMatricula()+ "\nSalario: R$ "+this.calcSalario();
    }

}