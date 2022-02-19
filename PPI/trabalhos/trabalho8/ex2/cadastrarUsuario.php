<?php

require "../sql/conexaoMysql.php";
$pdo = mysqlConnect();

$email = $_POST["email"] ?? "";
$senha = $_POST["senha"] ?? "";

$senhaHash = password_hash($senha, PASSWORD_DEFAULT);

try {

  $sql = <<<SQL
  INSERT INTO usuario (email, hash_senha)
  VALUES (?, ?)
  SQL;

  $stmt = $pdo->prepare($sql);
  $stmt->execute([$email, $senhaHash]);

  header("location: index.html");
  exit();
} 
catch (Exception $e) {  
  if ($e->errorInfo[1] === 1062)
    exit('Dados duplicados: ' . $e->getMessage());
  else
    exit('Falha ao cadastrar os dados: ' . $e->getMessage());
}