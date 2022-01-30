<?php

    require "../sql/conexaoMysql.php";
    $pdo = mysqlConnect();

    $nome = $_POST["nome"] ?? "";
    $sexo  = $_POST["sexo"] ?? "";
    $peso = $_POST["peso"] ?? "";
    $altura = $_POST["altura"] ?? "";
    $tipoSanguineo = $_POST["tipoSanguineo"] ?? "";
    $email = $_POST["email"] ?? "";
    $telefone = $_POST["telefone"] ?? "";

    $cep = isset($_POST["cep"]) ? $_POST["cep"]: "";
    $logradouro = isset($_POST["logradouro"]) ? $_POST["logradouro"]: "";
    $cidade = isset($_POST["cidade"]) ? $_POST["cidade"] : "";
    $estado = isset($_POST["estado"]) ? $_POST["estado"] : "";



    $sql1 = <<<SQL
        INSERT INTO pessoa (nome, sexo, email, telefone, cep, logradouro, cidade, estado)
        VALUES (?, ?, ?, ?, ?, ?, ?, ?)
    SQL;

    $sql2 = <<<SQL
        INSERT INTO paciente (peso, altura, tipoSanguineo, id_pessoa)
        VALUES (?, ?, ?, ?)
    SQL;

try {
    $pdo->beginTransaction();

    $stmt1 = $pdo->prepare($sql1);
    if (!$stmt1->execute([$nome, $sexo, $email, $telefone,$cep, $logradouro, $cidade, $estado])){
        throw new Exception('Falha na primeira inserção');
    }

    $idPessoa = $pdo->lastInsertId();
    $stmt2 = $pdo->prepare($sql2);

    if (!$stmt2->execute([$peso, $altura, $tipoSanguineo, $idPessoa])){
        throw new Exception('Falha na segunda inserção');
    }

    $pdo->commit();

    header("location: index.html");
    exit();
} 
catch (Exception $e) {
    $pdo->rollBack();
    if ($e->errorInfo[1] === 1062)
        exit('Dados duplicados: ' . $e->getMessage());
    else
        exit('Falha ao cadastrar os dados: ' . $e->getMessage());
}
