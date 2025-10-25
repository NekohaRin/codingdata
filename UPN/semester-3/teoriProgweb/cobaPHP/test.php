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
echo $biodata['nPanjang']
?>