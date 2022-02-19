<?php
require "../sql/conexaoMysql.php";

class Medico
{
  public $nome;
  public $telefone;
  public $especialidade;

  function __construct($nome, $telefone, $especialidade)
  {
    $this->nome = $nome;
    $this->telefone = $telefone; 
    $this->especialidade = $especialidade;
  }
}

$pdo = mysqlConnect();

$especialidade = $_GET['especialidade'] ?? '';

try {
    $sql = <<<SQL
    SELECT nome_medico, telefone_medico, especialidade_medico
    FROM medico WHERE especialidade_medico = ?
    SQL;

    $stmt = $pdo->prepare($sql);
    $stmt->execute([$especialidade]);

} 
catch (Exception $e) {
    exit('Ocorreu uma falha: ' . $e->getMessage());
}

while($row = $stmt->fetch()){
    $medicos[] = new Medico($row['nome_medico'], $row['telefone_medico'], $row['especialidade_medico']);
}


echo json_encode($medicos);

?>