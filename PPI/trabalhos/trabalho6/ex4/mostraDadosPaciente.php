<?php

    require "../sql/conexaoMysql.php";
    $pdo = mysqlConnect();

    try {

        $sql = <<<SQL
        SELECT nome, sexo, peso, altura, tipoSanguineo, email, telefone, cep, logradouro, cidade, estado
        FROM pessoa INNER JOIN paciente ON pessoa.id = id_pessoa
        SQL;

        $stmt = $pdo->query($sql);
    } 
    catch (Exception $e) {
        exit('Ocorreu uma falha: ' . $e->getMessage());
    }
?>

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Pacientes</title>
    <link href="https://cdn.jsdelivr.net/npm/bootstrap@5.0.0-alpha3/dist/css/bootstrap.min.css" rel="stylesheet" integrity="sha384-CuOF+2SnTUfTwSZjCXf01h7uYhfOBuxIhGKPbfEJ3+FqH/s6cIFN9bGr1HmAg4fQ" crossorigin="anonymous">
    <style>
    body {
      padding-top: 2rem;
    }

    img {
      width: 15px;
      height: 15px;
    }
    </style>
</head>
<body>
    <div class="container">
    <h3>Pacientes Cadastrados</h3>
    <table class="table table-striped table-hover">
      <tr>
        <th>Nome</th>
        <th>Sexo</th>
        <th>Peso</th>
        <th>Altura</th>
        <th>Tipo Sanguineio</th>
        <th>Email</th>
        <th>Telefone</th>
        <th>CEP</th>
        <th>Logradouro</th>
        <th>Cidade</th>
        <th>Estado</th>
      </tr>

      <?php
      while ($row = $stmt->fetch()) {

        $nome = htmlspecialchars($row['nome']);
        $sexo = htmlspecialchars($row['sexo']);
        $tipoSanguineo = htmlspecialchars($row['tipoSanguineo']);
        $email = htmlspecialchars($row['email']);
        $telefone = htmlspecialchars($row['telefone']);
        $cep = htmlspecialchars($row['cep']);
        $logradouro = htmlspecialchars($row['logradouro']);
        $cidade = htmlspecialchars($row['cidade']);
        $estado = htmlspecialchars($row['estado']);

        echo <<<HTML
          <tr>
            <td>$nome</td>
            <td>$sexo</td>
            <td>{$row['peso']}</td>
            <td>{$row['altura']}</td>
            <td>$tipoSanguineo</td>
            <td>$email</td>
            <td>$telefone</td>
            <td>$cep</td>
            <td>$logradouro</td>
            <td>$cidade</td>
            <td>$estado</td>
          </tr>      
        HTML;

      }
      ?>

    </table>
    <a href="index.html">Voltar para Menu</a>
  </div>
</body>
</html>