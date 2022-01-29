<!DOCTYPE html>
<html lang="pt-br">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Form Recebido</title>
    <link href="https://cdn.jsdelivr.net/npm/bootstrap@5.1.3/dist/css/bootstrap.min.css" rel="stylesheet" integrity="sha384-1BmE4kWBq78iYhFldvKuhfTAU6auU8tT94WrHftjDbrCEXSU1oBoqyl2QvZ6jIW3" crossorigin="anonymous">
    <style>
        body{
            background-color: #EFF3F6;
        }
        h1{
            text-align: center;
            padding: 1%;
        }
        .destaque{
            margin: 5px;
            background-color: lightblue;
        }
    </style>
</head>
<body>
    <div class="container">
        <header>
            <h1>Dados Recebidos</h1>
        </header>
        <div class="row">

            <?php
                $cep = isset($_POST["cep"]) ? $_POST["cep"]: "";
                $logradouro = isset($_POST["logradouro"]) ? $_POST["logradouro"]: "";
                $bairro = isset($_POST["bairro"]) ? $_POST["bairro"] : "";
                $cidade = isset($_POST["cidade"]) ? $_POST["cidade"] : "";
                $estado = isset($_POST["estado"]) ? $_POST["estado"] : "";

                $cepVerificado = htmlspecialchars($cep);
                $logradouroVerificado = htmlspecialchars($logradouro);
                $bairroVerificado = htmlspecialchars($bairro);
                $cidadeVerificado = htmlspecialchars($cidade);
                $estadoVerificado = htmlspecialchars($estado);
                echo <<<HTML
                    <div class="col-sm p-2 destaque">
                        <span>$cepVerificado</span>
                    </div>
                    <div class="col-sm p-2 destaque">
                        <span>$logradouroVerificado</span>
                    </div>
                    <div class="col-sm p-2 destaque">
                        <span>$bairroVerificado</span>
                    </div>
                    <div class="col-sm p-2 destaque">
                        <span>$cidadeVerificado</span>
                    </div>
                    <div class="col-sm p-2 destaque">
                        <span>$estadoVerificado</span>
                    </div>
                HTML;
            ?>
        </div>
    </div>
</body>
</html>