package com.oracle.tutorial.jdbc;

import java.io.FileReader;
import java.io.BufferedReader;
import java.io.IOException;
import java.util.Scanner;
import java.sql.*;  

public class MyQueriesInsert {
  
  Connection con;
  JDBCUtilities settings;  
  
  public MyQueriesInsert(Connection connArg, JDBCUtilities settingsArg) {
    this.con = connArg;
    this.settings = settingsArg;
  }

  public static void insertMyData1(Connection con) throws SQLException {
    long startTime = System.currentTimeMillis();
    Statement stmt = null;
    String query = null;
    query = "insert into debito (numero_debito, valor_debito, motivo_debito, data_debito, numero_conta, nome_agencia, nome_cliente) " + "values (3007,3000,5,'2014-02-06',36593,'UFU','Pedro Alvares Sousa');";
    try {
        stmt = con.createStatement();
        stmt.executeUpdate(query);
        if (stmt != null) {
            stmt.close();
            long endTime = System.currentTimeMillis();
            System.out.println("\nUm debito em IB2 inserido em " + (endTime - startTime) + " milisegundos (como Statement)");
        }
        System.out.println("Debitos da Instituicao Bancaria atualizados.");
    } catch (SQLException e) {
        JDBCUtilities.printSQLException(e);
    }
  }
  public static void insertMyData1000(Connection con) throws SQLException {
    long startTime = System.currentTimeMillis();
    Statement stmt = null;
    String query = null;
    for (int numdeb = 3002; numdeb < 4002; numdeb++) {
    query = "insert into debito (numero_debito, valor_debito, motivo_debito, data_debito, numero_conta,nome_agencia, nome_cliente) " + "values (" + Integer.toString(numdeb) + "," + Integer.toString(numdeb) + ",5,'2014-02-06',36593,'UFU','Pedro Alvares Sousa');";
      try {
          stmt = con.createStatement();
          stmt.executeUpdate(query);
          if (stmt != null) {
              stmt.close();
          }
          if ((numdeb % 50) == 0) {
            long endTime = System.currentTimeMillis();
            System.out.println(numdeb - 3000 + "\t" + (endTime - startTime));
          }
      }
      catch (SQLException e) {
        JDBCUtilities.printSQLException(e);
      }
    }
    System.out.println("Debitos da Instituicao Bancaria atualizados.");
  }

  public static void insertMyData2(Connection con) throws SQLException {
    long startTime = System.currentTimeMillis();
    PreparedStatement stmt = null;
    String query = null;
    query = "insert into debito (numero_debito, valor_debito, motivo_debito, data_debito, numero_conta, nome_agencia, nome_cliente)" +"values (?, ?, ?, ?, ?, ?, ?);" ; 
    try {
      stmt = con.prepareStatement(query);
      stmt.setInt(1, 3008);
      stmt.setDouble(2, 3001);
      stmt.setInt(3, 4);
      stmt.setDate(4, Date.valueOf("2014-02-06"));
      stmt.setInt(5, 36593);
      stmt.setString(6, "UFU");
      stmt.setString(7, "Pedro Alvares Sousa");
      stmt.executeUpdate();
        if (stmt != null) {
            stmt.close();
            long endTime = System.currentTimeMillis();
            System.out.println("\nUm debito em IB2 inserido em " + (endTime - startTime) + " milisegundos (como PreparedStatement)");
        }
        System.out.println("Debitos da Instituicao Bancaria atualizados 2.");
    } catch (SQLException e) {
        JDBCUtilities.printSQLException(e);
    }
  }
  public static void insertMyData2000(Connection con) throws SQLException {
    long startTime = System.currentTimeMillis();
    PreparedStatement stmt = null;
    String query = null;
    query = "insert into debito (numero_debito, valor_debito, motivo_debito, data_debito, numero_conta, nome_agencia, nome_cliente)" +"values (?, ?, ?, ?, ?, ?, ?);" ; 
    for(int numdeb = 5002; numdeb < 6002; numdeb++){ 
      try {
        stmt = con.prepareStatement(query);
        stmt.setInt(1, numdeb); 
        stmt.setDouble(2, numdeb); 
        stmt.setInt(3, 4);
        stmt.setDate(4, Date.valueOf("2014-02-06"));
        stmt.setInt(5, 36593);
        stmt.setString(6, "UFU");
        stmt.setString(7, "Pedro Alvares Sousa");
        stmt.executeUpdate();
          if (stmt != null) {
              stmt.close();
          }
          if ((numdeb % 50) == 0) {
            long endTime = System.currentTimeMillis();
            System.out.println(numdeb - 5000 + "\t" + (endTime - startTime));
          }
      }
      catch (SQLException e) {
          JDBCUtilities.printSQLException(e);
      }
    } 
    System.out.println("Debitos da Instituicao Bancaria atualizados 2.");
  }
  public static void insertMyData3000(Connection con) throws SQLException {
    long startTime = System.currentTimeMillis();
    PreparedStatement stmt = null;
    String query = null;
    query = "insert into debito (numero_debito, valor_debito, motivo_debito, data_debito, numero_conta, nome_agencia, nome_cliente)" +"values (?, ?, ?, ?, ?, ?, ?);" ; 
    
    try {
    con.setAutoCommit(false);
    stmt = con.prepareStatement(query);
    } 
    catch (SQLException e) {
      JDBCUtilities.printSQLException(e);
    }
    for(int numdeb = 5002; numdeb < 6002; numdeb++){ 
      try {
        stmt.setInt(1, numdeb); 
        stmt.setDouble(2, numdeb); 
        stmt.setInt(3, 4);
        stmt.setDate(4, Date.valueOf("2014-02-06"));
        stmt.setInt(5, 36593);
        stmt.setString(6, "UFU");
        stmt.setString(7, "Pedro Alvares Sousa");
        stmt.executeUpdate();
          if ((numdeb % 50) == 0) {
            long endTime = System.currentTimeMillis();
            System.out.println(numdeb - 5000 + "\t" + (endTime - startTime));
          }
      }
      catch (SQLException e) {
          JDBCUtilities.printSQLException(e);
      }
    } 
    try {
      con.commit();
      if (stmt != null) {
          stmt.close();
      }
    } 
    catch (SQLException e) {
      JDBCUtilities.printSQLException(e);
    }
    System.out.println("Debitos da Instituicao Bancaria atualizados (sem auto commit).");
  }

  public static void getMyData(Connection con) throws SQLException {
    Statement stmt = null;
    String query = "SELECT DISTINCT NOME_CLIENTE, SUM(SALDO_DEPOSITO) AS TOTAL_DEP "+
                   "FROM DEPOSITO "+
                   "WHERE NOME_CLIENTE NOT IN (SELECT DISTINCT NOME_CLIENTE FROM EMPRESTIMO) "+
                   "GROUP BY NOME_CLIENTE";

    String query2 = "SELECT D.NOME_CLIENTE, SUM(SALDO_DEPOSITO) AS TOTAL_DEP, SUM(VALOR_EMPRESTIMO) AS TOTAL_EMP " +
                    "FROM DEPOSITO D, " +
                    "EMPRESTIMO E " +
                    "WHERE D.NOME_CLIENTE = E.NOME_CLIENTE " +
                    "GROUP BY D.NOME_CLIENTE";

    try{
      stmt = con.createStatement();
      ResultSet rs = stmt.executeQuery(query);
      System.out.println("\nClientes que possuem apenas depositos:\n");
      while (rs.next()) {
        String cliente = rs.getString("NOME_CLIENTE");
        float soma = rs.getFloat("TOTAL_DEP");
        System.out.printf("     Nome: %35s - Depositos: R$ %6.2f\n", cliente, soma);
      }
      ResultSet rs2 = stmt.executeQuery(query2);
      System.out.println("\nClientes que possuem depositos e emprestimos:\n");
      while (rs2.next()) {
        String cliente = rs2.getString("NOME_CLIENTE");
        float deposito = rs2.getFloat("TOTAL_DEP");
        float emprestimo = rs2.getFloat("TOTAL_EMP");
        System.out.printf("     Nome: %35s - Depositos: R$ %10.2f - Emprestimos: R$ %12.2f\n", cliente, deposito, emprestimo);
      } 
    }
    catch(SQLException e){
      JDBCUtilities.printSQLException(e);
    } 
    finally{
      if (stmt != null) { stmt.close(); }
    }
  }


  public static void main(String[] args) {
    JDBCUtilities myJDBCUtilities;
    Connection myConnection = null;
    if (args[0] == null) {
      System.err.println("Properties file not specified at command line");
      return;
    } else {
      try {
        myJDBCUtilities = new JDBCUtilities(args[0]);
      } catch (Exception e) {
        System.err.println("Problem reading properties file " + args[0]);
        e.printStackTrace();
        return;
      }
    }

    try {
      myConnection = myJDBCUtilities.getConnection();

      //MyQueriesInsert.insertMyData1(myConnection);
      //MyQueriesInsert.insertMyData2(myConnection);

      //MyQueriesInsert.insertMyData1000(myConnection);
      //MyQueriesInsert.insertMyData2000(myConnection);
      MyQueriesInsert.insertMyData3000(myConnection);


    } catch (SQLException e) {
      JDBCUtilities.printSQLException(e);
    } 
    finally {
      JDBCUtilities.closeConnection(myConnection);
    }

  }
}

//diretorio: /mydir/JDBCTutorial ./comp MyQueriesInsert properties/postgres-properties-2.xml 

