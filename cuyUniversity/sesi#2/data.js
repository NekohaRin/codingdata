const nama = "dzaky muammar";
let usia = 30;

let biodata = document.getElementById("biodata");
function generateBiodata() {
  let generasi;
  if (usia > 10 && usia <= 20) {
    generasi = "generasi remaja";
  } else if (usia > 20 && usia <= 30) {
    generasi = "generasi dewasa";
  } else if (usia > 30) {
    generasi = "generasi tua";
  } else if (usia < 10 && usia >= 5) {
    generasi = "generasi anak anak";
  } else {
    generasi = "generasi balita";
  }
  return (biodata.innerHTML = generasi);
}

console.log(nama);
console.log(usia);

generateBiodata();
