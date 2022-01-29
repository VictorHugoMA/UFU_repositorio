<!DOCTYPE html>
<html lang="pt-br">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Dados Cadastrados</title>
    <style>
        body{
            background-color: #EFF3F6;
        }
        h1{
            text-align: center;
            padding: 1%;
        }
        main{
            padding: 1vw;
        }
    </style>
</head>
<body>
    <header>
        <h1>Dados Cadastrados</h1>
    </header>

    <?php
        $strEmail = carregaString("../dados/email.txt");
        $strSenha = carregaString("../dados/senhaHash.txt");

        $strEmailVerificado = htmlspecialchars($strEmail);
        $strSenhaVerificado = htmlspecialchars($strSenha);

        echo <<<HTML
            <main>
                <p><strong>Email:</strong> $strEmailVerificado</p>
                <p><strong>Hash da senha:</strong> $strSenhaVerificado</p>
            </main>   
            HTML;


        function carregaString($arquivo){
            $arq = fopen($arquivo, "r");
            $string = fgets($arq);
            fclose($arq);
            return $string;
       }
        
    ?>
    
</body>
</html>