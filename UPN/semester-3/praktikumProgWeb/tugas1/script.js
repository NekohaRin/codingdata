document.getElementById("forming").addEventListener("submit", function(e) {
  e.preventDefault();

  let name = document.getElementById("name").value.trim();
  let email = document.getElementById("email").value.trim();
  let package = document.querySelector("input[name='package']:checked");
  let location = document.getElementById("location").value;
  let payment = document.getElementById("payment").value;

  if (name === "" || email === "") {
    alert("Nama dan Email wajib diisi!");
    return;
  }
  if (package === "") {
    alert("Silakan pilih paket bimbingan!");
    return;
  }
  if (location === "") {
    alert("Silakan pilih lokasi cabang!");
    return;
  }
  if (payment === "") {
    alert("Silakan pilih metode pembayaran!");
    return;
  }

  alert("Form berhasil disubmit!\nTerima kasih sudah mendaftar.");
});
