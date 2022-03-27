package ex1;

import java.util.*;
public class DepartamentoCompra
{
    private Command[] c = new Command[9];
    private ArrayList<Command> log = new ArrayList<Command>();
    
    public void setCommand(Command c, int i){
        this.c[i] = c;
    }
    
    public void pressionar(int i){
        this.c[i].execute();
        log.add(c[i]);
    }
    
    public void executa(Command c){
        c.execute();
        log.add(c);
        
    }    
    
    public void showLog(){
        for (Command c : log)
            System.out.println(c.toString());
    }    
    
    public void replay(){
        for (Command c : log)
            c.execute();
    }    
    
    
}