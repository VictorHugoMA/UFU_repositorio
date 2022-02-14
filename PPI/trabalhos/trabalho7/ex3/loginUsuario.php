<?php
require "../sql/conexaoMysql.php";

class RequestResponse{
    public $success;
    public $destination;
  
    function __construct($success, $destination){
      $this->success = $success;
      $this->destination = $destination;
    }
    
}

$pdo = mysqlConnect();

$email = $_POST['email'] ?? '';
$senha = $_POST['senha'] ?? '';

try {
    $sql = <<<SQL
    SELECT hash_senha
    FROM usuario WHERE email = ?
    SQL;

    $stmt = $pdo->prepare($sql);
    $stmt->execute([$email]);

    $row = $stmt->fetch();
    if (!$row){
        $request = new RequestResponse(false, null);
    }
    else if(password_verify($senha, $row['hash_senha'])){
        $request = new RequestResponse(true, 'homeUsuario.html');
    }
    else{
        $request = new RequestResponse(false, null);
    }
} 
catch (Exception $e) {
    exit('Ocorreu uma falha: ' . $e->getMessage());
}

echo json_encode($request);
            
?>

