<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
    <h1>yeyy masuk agus</h1>
    <?php 
    $banyak = $_POST['banyak'];
    $usr = $_POST['usr'];
    $pswd = $_POST['pswd'];
    echo 'nama : '. $usr. '<br>password : '. $pswd;
    echo '<br>jumlah pancing : '. $banyak;
    ?>
</body>
</html>