<?php

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

    $errorMsg = "";
    if ($_SERVER["REQUEST_METHOD"] == "POST") {

    require "../sql/conexaoMysql.php";
    $pdo = mysqlConnect();

    $email = $_POST["email"] ?? "";
    $senha = $_POST["senha"] ?? "";

    if (checkLogin($pdo, $email, $senha)) {
        header("location: homeUsuario.html");
        exit();
    } 
    else
        $errorMsg = "Dados incorretos";
    }
?>


<!doctype html>
<html lang="pt-BR">

<head>
  <meta charset="utf-8">
  <meta name="viewport" content="width=device-width, initial-scale=1">
  <title>Login</title>
  <link href="https://cdn.jsdelivr.net/npm/bootstrap@5.0.0-alpha3/dist/css/bootstrap.min.css" rel="stylesheet" integrity="sha384-CuOF+2SnTUfTwSZjCXf01h7uYhfOBuxIhGKPbfEJ3+FqH/s6cIFN9bGr1HmAg4fQ" crossorigin="anonymous">

  
  <style>
        body {
            padding: 1rem;
            background-color: #283039;
        }
        main{
            position: absolute;
            top: 50%;
            left: 50%;
            transform: translate(-50%, -50%);

            background-color: #EFF3F6;
            width: 50%;
            padding: 2%;
            border: 0.7px solid gray;
            border-radius: 10px;
        }
        form button {
            margin-top: 1rem;
            margin-bottom: 1rem;
        }
    </style>
</head>

<body>
  
  <div class="container">
    <main>
      <h3>Login</h3>
      <form action="<?php echo htmlspecialchars($_SERVER["PHP_SELF"]); ?>" method="POST" class="row g-3">
        <div class="col-sm-12">
          <label for="email" class="form-label">Email</label>
          <input type="email" name="email" class="form-control" id="email">
        </div>
        <div class="col-sm-12">
          <label for="senha" class="form-label">Senha</label>
          <input type="password" name="senha" class="form-control" id="senha">
        </div>

          <button class="btn btn-primary col-sm-12">Entrar</button>
      </form>
      <a href="index.html">Voltar para Menu</a>

      <?php
        if ($_SERVER["REQUEST_METHOD"] == "POST" && $errorMsg !== "") {
            echo <<<HTML
                <div class="alert alert-warning alert-dismissible" role="alert">
                    <strong>$errorMsg</strong>
                    <button type="button" class="btn-close" data-dismiss="alert"></button>
                </div>
            HTML;
        }
      ?>
    </main>
  </div>

</body>

</html>