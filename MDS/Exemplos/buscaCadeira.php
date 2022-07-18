<?php
require "../sql/conexaoMysql.php";

$pdo = mysqlConnect();

$idSessao = $_GET['idSessao'] ?? '';

$sql = <<<SQL
    SELECT cadeira
    FROM ingresso
    WHERE idSessao = ?
    SQL;

$sql2 = <<<SQL
    SELECT idSala
    FROM sessao
    WHERE idSessao = ?
    SQL;

try {
    $cadeirasReservadas = [];
    $disponiveis = [];
    $stmt = $pdo->prepare($sql);
    $stmt->execute([$idSessao]);

    while ($row = $stmt->fetch()) {
        $cadeirasReservadas[] = $row['cadeira'];
    }

    $stmt = $pdo->prepare($sql2);
    $stmt->execute([$idSessao]);
    $row = $stmt->fetch();
    $idSala = $row['idSala'];

    if($idSala==1 || $idSala==2){
        foreach (array('A1', 'A2', 'A3', 'B1', 'B2', 'B3', 'C1', 'C2', 'C3') as $cadeiras) {
            if (!in_array($cadeiras, $cadeirasReservadas)) //se a cadeira nao tiver sido reservada, add a cadeira no array das disponiveis
                $disponiveis[] = $cadeira;
        }
    }
    if($idSala==3 || $idSala==4){
        foreach (array('A1', 'A2', 'A3', 'A4', 'A5','B1', 'B2', 'C1', 'C2', 'C3', 'D1', 'D2', 'D3') as $cadeiras) {
            if (!in_array($cadeiras, $cadeirasReservadas)) //se a cadeira nao tiver sido reservada, add a cadeira no array das disponiveis
                $disponiveis[] = $cadeira;
        }
    }
    
    echo json_encode($disponiveis);
}

catch (Exception $e) {
    exit('Falha inesperada: ' . $e->getMessage());
}
?>