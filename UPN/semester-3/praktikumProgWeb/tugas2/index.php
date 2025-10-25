<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Bimbel Babarsari</title>
    <link rel="stylesheet" href="style.css">
</head>
<body>
    <div class="container">
    <h1>Hai, Selamat Datang di form pendaftaran Bimbel Babarsari</h1>
    <form action="succes.php" method="post" id="myform">
        <label for="usr">Nama </label>
        <input type="text" id="usr" name="usr">
        <label for="email">Email </label>
        <input type="email" id="email" name="email">
        <!-- <label for="pktBimbingan">Paket </label> -->
<!-- for radio Package -->
        <label for="package">Paket Bimbingan</label>
        <label for="intensif">
            <input type="radio" id="intensif" name="package" value="intensif">
            Paket Intensif SBMPTN</label>
        <label for="reguler">
            <input type="radio" id="reguler" name="package" value="reguler">
            Paket Reguler</label>
        <label for="supercamp">
            <input type="radio" id="supercamp" name="package" value="supercamp">
            Paket Supercamp SBMPTN</label>
<!-- for checkbox Additional Fasility -->
        <label for="fasility" id="fasility">Fasilitas Tambahan</label>
        <label for="full">
            <input type="checkbox" id="full" name="fasility[]" value="modul">
            Modul Cetak Lengkap</label>
        <label for="pdf">
            <input type="checkbox" id="pdf" name="fasility[]" value="pdf">
            Modul PDF</label>
        <label for="record">
            <input type="checkbox" id="record" name="fasility[]" value="rekaman">
            Video Rekaman Kelas</label>
        <label for="group">
            <input type="checkbox" id="group" name="fasility[]" value="grup">
            Grup Diskusi Telegram</label>
<!-- for dropdown Location -->
        <label for="location">Lokasi Cabang</label>
        <select name="location" id="location">
            <option value="jakpus">Jakarta Pusat</option>
            <option value="surabaya">Surabaya</option>
            <option value="yogyakarta">Yogyakarta</option>
            <option value="makassar">Makassar</option>
            <option value="aceh">Aceh</option>
        </select>
<!-- for dropdown Payment Methode -->
        <label for="payment">Metode Pembayaran</label>
        <select name="payment" id="payment">
            <option value="transfer">Transfer Bank</option>
            <option value="tunai">Tunai</option>
            <option value="ewallet">E-Wallet</option>
        </select>
        <label for="note">Catatan : </label>
        <textarea rows="3" cols="4" id="note" name="note" placeholder="Catatan Tambahan"></textarea>
        <button type="reset">Reset</button>
        <button type="submit">Submit</button><br><br>
    </form>
    </div>
    <script>
        document.getElementById("myform").addEventListener("submit", function(e) {

        const usr  = document.getElementById("usr").value.trim();
        const email = document.getElementById("email").value.trim();

    if (usr === "" || email === "") {
        e.preventDefault(); 
        alert("Error: Nama dan Email wajib diisi!");
    }

    let confirmSubmit = confirm("Apakah data sudah benar? Klik OK untuk melanjutkan.");
    if (!confirmSubmit) {
        e.preventDefault(); 
    }
});
    </script>
</body>
</html>

