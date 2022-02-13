<?php
require "../sql/conexaoMysql.php";

class Endereco
{
  public $rua;
  public $bairro;
  public $cidade;

  function __construct($rua, $bairro, $cidade)
  {
    $this->rua = $rua;
    $this->bairro = $bairro; 
    $this->cidade = $cidade;
  }
}

$pdo = mysqlConnect();

$cep = $_GET['cep'] ?? '';

try {
    $sql = <<<SQL
    SELECT rua, bairro, cidade
    FROM endereco_trab7 WHERE cep = ?
    SQL;

    $stmt = $pdo->prepare($sql);
    $stmt->execute([$cep]);

} 
catch (Exception $e) {
    exit('Ocorreu uma falha: ' . $e->getMessage());
}


if($row = $stmt->fetch()){
  $endereco = new Endereco($row['rua'], $row['bairro'], $row['cidade']);
}
else{
  $endereco = new Endereco('', '', '');
}

echo json_encode($endereco);

?>