<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Produtos</title>
    <link href="https://cdn.jsdelivr.net/npm/bootstrap@5.1.3/dist/css/bootstrap.min.css" rel="stylesheet" integrity="sha384-1BmE4kWBq78iYhFldvKuhfTAU6auU8tT94WrHftjDbrCEXSU1oBoqyl2QvZ6jIW3" crossorigin="anonymous">
    <style>
        body{
            background-color: #EFF3F6;
        }
        h1{
            text-align: center;
            padding: 1%;
        }
    </style>
</head>
<body>
    <div class="container">
        <header>
            <h1>Produtos</h1>
        </header>
        <main>
            <table class="table table-striped table-hover table-bordered">

                <?php
                $produtos = ["Smartphone", "Notebook", "Tablet", "Camera", "TV", "Fone", "Smartwatch", "Impressora", "Alexa", "Processador"];
                $descricao = ["Iphone 13 PRO", "Dell Inspiron 15", "Samsung Galaxy Tab", "Canon EOS Rebel", "Samsung 60 4K", "Redmi AirDots 2", "Apple Watch Series 7", "HP Wireless", "Echo Dot 4", "Intel Core i9"];
                
                $qde = $_GET["qde"];
                
                for ($i=0; $i < $qde; $i++) { 
                    $valorAleatorio1 = rand(0,9);
                    $valorAleatorio2 = rand(0,9);
                    $valorAleatorio3 = rand(0,9);

                    $contagem1 = 1+($i*3);
                    $contagem2 = 2+($i*3);
                    $contagem3 = 3+($i*3);

                    echo <<<HTML
                        <tr>
                            <td>
                                <span>$contagem1 - $produtos[$valorAleatorio1]</span>
                                <p>$descricao[$valorAleatorio1]</p>
                            </td>
                            <td>
                                <span>$contagem2 - $produtos[$valorAleatorio2]</span>
                                <p>$descricao[$valorAleatorio2]</p>
                            </td>
                            <td>
                                <span>$contagem3 - $produtos[$valorAleatorio3]</span>
                                <p>$descricao[$valorAleatorio3]</p>
                            </td>
                        </tr>
                        HTML;
                    }
                    
                
                ?>
            </table>
        </main>
    </div>
</body>
</html>