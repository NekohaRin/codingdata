<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
    <?php
    $name = "satu<br>";
    echo $name;
    $count = "<br><h1>satu lima dua tiga</h1>";

// array declaration
    $nama = array('budi', 'toi', 'rich');
    echo ('bapaknya zaenal bernama '.$nama[0].'<br>');

// array asosiatif (pemanggilan array menggunakan data yang dideklarasikan bukan dengan index 0,1,2dst)
    $biodata = array('panggilan'=>'bejo',
                     'jk'=>'laki-laki','nPanjang'=>'bejo sugiarto loto');
    echo $biodata['nPanjang'];   
?>
    <h3>bapaknya zaenal bernama <?php echo $nama[0]?></h3>
    <!-- method form GET && POST -->
    <form action="data.php" method="POST">
        <label for="usr">username</label>
        <input type="text" name="usr"> <br> <br>
        <label for="usr">password</label>
        <input type="text" name="pswd">
        <br><br>
        <label for="banyk">jumlah</label>
        <input type="number" name="banyak"> <br> <br>
        <button type="submit">endtd</button>
        <button type="reset">ulang</button>
    </form>
</body>
</html>