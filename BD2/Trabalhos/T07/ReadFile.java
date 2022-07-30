import java.io.FileReader;
import java.io.BufferedReader;
import java.io.IOException;
import java.util.Scanner;
public class ReadFile {
    public static void main(String[] args) throws IOException {
        BufferedReader inputStream = null;
        Scanner scanned_line = null;
        String line;
        String[] value;
        value = new String[7];
        int countv;
        try {
            inputStream = new BufferedReader(new FileReader("debito-populate-table.txt"));
            while ((line = inputStream.readLine()) != null) {
                countv = 0;
                System.out.println("<<");
                //split fields separated by tab delimiters 
                scanned_line = new Scanner(line);
                scanned_line.useDelimiter("\t");
                while (scanned_line.hasNext()) {
                    System.out.println(value[countv++] = scanned_line.next());
                } //while
                if (scanned_line != null) {
                    scanned_line.close();
                }
                System.out.println(">>");
                System.out.println("insert into debito (numero_debito, valor_debito,  motivo_debito, data_debito, numero_conta, nome_agencia, nome_cliente) " + "values (" + value[0] + ", " + value[1] + ", " + value[2] + ", '" + value[3] + "', " + value[4] + ", '" + value[5] + "', '" + value[6] + "');");
            } //while
        } finally {
            if (inputStream != null) {
                inputStream.close();
            }
        } //if & finally
    } //main
} //class
