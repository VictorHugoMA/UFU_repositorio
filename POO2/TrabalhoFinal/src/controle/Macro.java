package controle;

import java.util.*;

public class Macro implements Command
{
    
    private ArrayList<Command> macro= new ArrayList<Command>(); 
    
    public void add(Command c){macro.add(c);}
    
    public void execute(){
        for (Command c : macro){
            c.execute();
        }     
    }    
    
}
