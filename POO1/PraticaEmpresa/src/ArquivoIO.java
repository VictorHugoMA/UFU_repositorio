
import java.io.*;


public abstract class ArquivoIO {
	
	public static boolean escritaObjeto(Object objD, String caminho) {
		try {
			FileOutputStream arq = new FileOutputStream(caminho);
			ObjectOutputStream obj = new ObjectOutputStream(arq);
			obj.writeObject(objD);
			obj.flush();
			obj.close();
			arq.flush();
			arq.close();
			return true;
		}
		catch (Exception e) {
			//System.out.println("ERRO: " +e.toString());
			return false;
		}
	}
	
	public static Object leituraObjeto(String caminho) {
		Object o = null;
		FileInputStream arq = null;
		ObjectInputStream obj = null;
		try {
			arq = new FileInputStream(caminho);
			obj = new ObjectInputStream(arq);
			o = obj.readObject();
			obj.close();
			arq.close();
		}
		catch (Exception e) {
			return null;
		}
		return o;
		
	}
	
	public static boolean escritaTexto(String texto, String caminho) {
		BufferedWriter escritor = null;
		try{
			escritor = new BufferedWriter(new FileWriter(new File(caminho)));
			escritor.write(texto);
			escritor.flush();
			escritor.close();
			return true;
		} 
		catch(IOException e){
			e.printStackTrace();
			return false;
		}
	}

	
	
	public static boolean escritaTextoConc(String texto, String caminho) {
		BufferedWriter escritor = null;
		try{
			escritor = new BufferedWriter(new FileWriter(new File(caminho), true));
			escritor.append(texto);
			escritor.flush();
			escritor.close();
			return true;
		} 
		catch(IOException e){
			e.printStackTrace();
			return false;
		}
	}
	

	
}
