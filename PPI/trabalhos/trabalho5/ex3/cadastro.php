<!DOCTYPE html>
<html lang="pt-br">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Confirmação</title>
    <style>
        body{
            background-color: #EFF3F6;
        }
        h1{
            text-align: center;
            padding: 1%;
        }
        p{
            text-align: center;
        }
    </style>
</head>
<body>
    <header>
        <h1>Confirmação de Cadastro</h1>
    </header>

    
    <?php
        if(isset($_POST["email"]) && isset($_POST["senha"])){
            $email = $_POST["email"];
            $senha = $_POST["senha"];

            $senhaHash = password_hash($senha, PASSWORD_DEFAULT);
    
            salvarString($email, "../dados/email.txt");
            salvarString($senhaHash, "../dados/senhaHash.txt");
    
            echo "<p>Cadastro realizado</p>";
        }
        else{
            echo "<p>Nao foi possivel realizar o cadastro</p>";
        }



        function salvarString($string, $arquivo) {
            $arq = fopen($arquivo, "w");
            fwrite($arq, $string);
            fclose($arq);

        }
    
    ?>
</body>
</html>