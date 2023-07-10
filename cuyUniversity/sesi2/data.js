const nama = "Dzaky Muammar";
let usia = 50;

// console.log('nama saya adalah ${nama} usia saya ${usia}');
let biodata = document.getElementById("biodata");

function generateBiodata() {
  let generasi;

  if (usia > 10 && usia < 18) {
    generasi = " generasi remaja";
  } else if (usia > 18 && usia < 30) {
    generasi = " generasi dewasa";
  } else if (usia >= 30) {
    generasi = " generasi tua";
  } else if (usia > 2 && usia < 10) {
    generasi = " generasi anak-anak";
  } else {
    generasi = "generasi bayi";
  }

  return (biodata.innerHTML = generasi);
  //  console.log(
  //    "nama saya" + " " + nama + " " + "usia saya" + " " + usia + " " + "tahun"
  //  );
}

console.log(nama);
console.log(usia);

generateBiodata();
