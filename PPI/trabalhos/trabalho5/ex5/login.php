<?php

    $emailFornecido = isset($_POST["email"]) ? $_POST["email"]: "";
    $senhaFornecida = isset($_POST["senha"]) ? $_POST["senha"]: "";

    $emailGravado = carregaString("../dados/email.txt");
    $SenhaHashGravada = carregaString("../dados/senhaHash.txt");

    if($emailFornecido===$emailGravado && password_verify($senhaFornecida, $SenhaHashGravada)){
        header("Location: http://victoralves.atwebpages.com/trabalho5/ex5/loginSucesso.html");
        exit();
        
    }
    else{
        header("Location: http://victoralves.atwebpages.com/trabalho5/ex5/login.html");
        exit();
    }

    function carregaString($arquivo){
            $arq = fopen($arquivo, "r");
            $string = fgets($arq);
            fclose($arq);
            return $string;
    }
?>