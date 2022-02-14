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

function checkLogin($pdo, $email, $senha){
    $sql = <<<SQL
        SELECT hash_senha
        FROM usuario
        WHERE email = ?
    SQL;

    try {
        $stmt = $pdo->prepare($sql);
        $stmt->execute([$email]);
        $row = $stmt->fetch();
        if (!$row){
            return false;
        }
        else{
            return password_verify($senha, $row['hash_senha']);
        }
    } 
    catch (Exception $e) {
        exit('Falha inesperada: ' . $e->getMessage());
    }
}
    if ($_SERVER["REQUEST_METHOD"] == "POST"){
        $pdo = mysqlConnect();

        $email = $_POST["email"] ?? "";
        $senha = $_POST["senha"] ?? "";

        if (checkLogin($pdo, $email, $senha)) {
            $retorno = new RequestResponse(true, 'homeUsuario.html');
            
        } 
        else{
            $retorno = new RequestResponse(false, 'index.html');
        }
        echo json_encode($retorno);
    }
            
?>

