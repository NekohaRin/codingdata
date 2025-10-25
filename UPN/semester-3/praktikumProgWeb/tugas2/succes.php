<?php


$paketHarga = [
    "intensif" => 500000,
    "reguler" => 750000,
    "supercamp" => 1000000
];

$fasilitasHarga = [
    "modul"   => 50000,
    "pdf"     => 25000,
    "rekaman" => 75000,
    "grup"    => 40000
];

$lokasiHarga = [
    "jakpus"    => 100000,
    "yogya"     => 80000,
    "aceh"      => 120000,
    "surabaya"  => 150000,
    "makassar"  => 115000
];

$paymentFee = [
    "transfer" => 3000,
    "ewallet"  => 2000,
    "tunai"    => 0
];

$usr  = $_POST['usr'] ?? '';
$email = $_POST['email'] ?? '';


$paket    = $_POST['package'] ?? 'undefined';
$fasilitas= $_POST['fasility'] ?? [];
$lokasi   = $_POST['location'] ?? 'undefined';
$payment  = $_POST['payment'] ?? 'undefined';
$note     = $_POST['note'] ?? '';

// if (empty($nama) || empty($email)) {
//     die("<h3 style='color:red;'>Error: Nama dan Email wajib diisi!</h3>");
// }

$total = 0;

// Paket
$hargaPaket = isset($paketHarga[$paket]) ? $paketHarga[$paket] : 0;
$total += $hargaPaket;

// Fasilitas
$hargaFasilitas = 0;
foreach ($fasilitas as $f) {
    if (isset($fasilitasHarga[$f])) {
        $hargaFasilitas += $fasilitasHarga[$f];
    }
}
$total += $hargaFasilitas;

// Lokasi
$hargaLokasi = isset($lokasiHarga[$lokasi]) ? $lokasiHarga[$lokasi] : 0;
$total += $hargaLokasi;

// Payment
$biayaAdmin = isset($paymentFee[$payment]) ? $paymentFee[$payment] : 0;
$total += $biayaAdmin;

?>
<!DOCTYPE html>
<html lang="id">
<head>
    <meta charset="UTF-8">
    <title>Nota Pendaftaran</title>
    <link rel="stylesheet" href="style.css">
</head> -->
<body>
    <div class="container">

    <h2>Nota Pendaftaran Bimbel Babarsari</h2>
    <table>
        <tr><th>Nama</th><td><?= htmlspecialchars($usr) ?></td></tr>
        <tr><th>Email</th><td><?= htmlspecialchars($email) ?></td></tr>
        <tr><th>Paket Bimbingan</th>
            <td><?= $paket !== 'undefined' ? ucfirst($paket) . " (Rp" . number_format($hargaPaket,0,",",".") . ")" : "undefined" ?></td></tr>
        <tr><th>Fasilitas Tambahan</th>
            <td>
                <?php 
                if (!empty($fasilitas)) {
                    $list = [];
                    foreach ($fasilitas as $f) {
                        $list[] = ucfirst($f) . " (Rp" . number_format($fasilitasHarga[$f],0,",",".") . ")";
                    }
                    echo implode("<br>", $list);
                } else {
                    echo "undefined";
                }
                ?>
            </td>
        </tr>
        <tr><th>Lokasi Cabang</th>
            <td><?= $lokasi !== 'undefined' ? ucfirst($lokasi) . " (Rp" . number_format($hargaLokasi,0,",",".") . ")" : "undefined" ?></td></tr>
        <tr><th>Metode Pembayaran</th>
            <td><?= $payment !== 'undefined' ? ucfirst($payment) . " (Rp" . number_format($biayaAdmin,0,",",".") . ")" : "undefined" ?></td></tr>
        <tr><th>Catatan</th><td><?= !empty($note) ? htmlspecialchars($note) : "-" ?></td></tr>
        <tr><th class="total">Total Bayar</th>
            <td class="total">Rp<?= number_format($total, 0, ",", ".") ?></td></tr>
    </table>
    </div>
</body>
</html>
