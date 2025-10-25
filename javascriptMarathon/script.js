console.log("Hellow my friend");

const name = "jakii";
console.log('"hy nama saya " {name}');
const nama = "Andi";
const usia = 25;

const pesan = `Nama saya ${nama} dan usia saya ${usia} tahun.`;

console.log(pesan); // Output: Nama saya Andi dan usia saya 25 tahun.

//   operasi js
let a = 10 + "7";
let b = "9" + 3;
let c = 4 - "1";
let d = "9" - 3;
let e = 3 * "4";
let f = "8" * 5;
let g = 45 / "5";
let h = "30" / 6;
console.log('10 + "7" = ' + a); //107
console.log('"9" + 3 = ' + b); //93
console.log('4 - "1" = ' + c); //3
console.log('"9" - 3 = ' + d); //6
console.log('3 * "4" = ' + e); //12
console.log('"8" * 5 = ' + f); //40
console.log('45 / "5" = ' + g); //9
console.log('"30" / 6 = ' + h); //5
// dari hasil dapat disimpulkan operasi hitung antara string dan integer hanya tidak berjalan pada tanda "+" karena pada operator itu semuanya jadi bentuk string

//   type conversion
let num1 = 7;
console.log(typeof toString(num1));

let str1 = "8";
console.log(typeof Number(str1));

// operator perbandingan or logic
/* 
    === samadengan 3 -> perbandingan type data
    == samadengan 2 -> membandingkan
    */

for (let i = 0; i < 3; i++) {
  console.log(i + 1);
}

let x = 0;
do {
  console.log("ini loop ke-" + (x + 1));
  x++;
} while (x < 5);

for (let i = 1; i <= 5; i++) {
  let row = "_";
  for (let j = 1; j <= i; j++) {
    row += "*";
  }
  console.log(row);
}

const loop = prompt("masukkan berapa kali anda ingin menulisnya : ");
let y = 1;
while (y <= loop) {
  console.log("ini cuma while ke-" + y);
  y++;
}

// Arrayy js
const makanan = ["seblak", "bakso", "mie ayam", "mie goreng"];
console.log(makanan);
makanan[3] = "mie kuah"; //mengubah data array by index
console.log(makanan);
makanan[4] = "roti"; //menambah data array by index
console.log(makanan);
makanan[makanan.length] = "donut"; //menambah data array berdasar panjang array / data paling belakang
console.log(makanan);
makanan.push("ayam goreng"); // menambah data array ke paling belakang
console.log(makanan);

const makananLama = makanan.pop();
console.log("hasil setelah di pop " + makanan);
console.log("makanan yang di pop" + makananLama);

delete makanan[2];
console.log('data setelah index-2 "mie ayam" dihapus : ' + makanan);

makanan.splice(1, 1);
console.log("data setelah di splice : " + makanan);

// manipulasi array

const hurufAwal = ["a", "b", "c", "d"];
const hurufBelakang = ["e", "f", "g", "h"];
console.log(hurufAwal);
console.log(hurufBelakang);

// concat atau penggabungan array
const gabungan = hurufAwal.concat(hurufBelakang);
console.log("hasil concat awal/belakang");
console.log(gabungan);

//manipulasi to string - mengubah array ke string
console.log("gabungan.toString:" + x.toString());

//manipulasi join
console.log("hurufAwal.join(): " + hurufAwal.join(" | "));
console.log("hurufAwal join hurufBelakang");
console.log(hurufAwal.join(" (" + hurufBelakang + ") "));
console.log(hurufAwal.join(" joinan "));

//manipulasi shift
hurufAwal.shift();
console.log("array shift " + hurufAwal);

hurufAwal.unshift("D");
console.log("array unshift " + hurufAwal);

// Akses array menggunakan looping
const arr = ["javascript", "dart", "vue", "kotlin", "php"];
for (let i = 0; i < arr.length; i++) {
  console.log("Jakii ingin belajar bahasa " + arr[i]);
}

console.log("ini pakai for of");
for (let lang of arr) {
  console.log("Jakii ingin belajar bahasa " + lang);
}

//array Multidimensi
const framework = [
  ["javascript", "reactJS", "expressJS"],
  ["php", "laravel", "ndatau"],
  ["css", "tailwind", "murniCSS"],
];

console.table(framework);

// Akses array multidimensi menggunakan looping
for (let i = 0; i < framework.length; i++) {
  console.log("Nomor -" + (i + 1));
  for (let j = 0; j < framework[i].length; j++) {
    if (j == 0) {
      console.log("Bahasa : " + framework[i][j]);
    } else if (j == 1) {
      console.log("Framework 1 : " + framework[i][j]);
    } else if (j == 2) {
      console.log("Framework 2 : " + framework[i][j]);
    }
  }
  console.log("--------------------------");
}

//interpolation js gabungan teks dan variable gunakan backtic atas tab
console.log(`ini blablabla ${framework}`);

//Object apalagi dah iniii
const kuliah = {
    nama : 'Jakii',
    jurusan : 'Teknik Informatika',
    nim : '123240057',

    semesterSatu: function() {
        console.log('nilai naik')
    },

    semesterDua: function() {
        console.log('nilai terjun')
    },

    semesterTiga: function() {
        console.log('menuju puncakk')
    }
}
  console.log("--------------------------");

console.log(`Nama : ${kuliah.nama}`);
console.log(`Jurusan : ${kuliah.jurusan}`);
console.log(`NIM : ${kuliah.nim}`);
console.log(`Semester 1 :`)
kuliah.semesterSatu()

//Access object using for
for (let upn in kuliah){
    console.log(`key: ${upn} | value : ${kuliah[upn]}`)
}
  console.log("--------------------------");
const jejak = {
    nama : 'Jakii',
    jurusan : 'Teknik Informatika',
    nim : '123240057'
}
for (let upn in jejak){
    console.log(`key: ${upn} | value : ${jejak[upn]}`)
}
  console.log("--------------------------");

//   edit object
console.log('object setelah diedit ganti nama tambahkan jenis kelamin')
kuliah.nama = 'Dzaky' //jika properti ada di object maka akan berubah valuenya
kuliah.jenisKelamin = 'laki-laki' //jika tidak ada maka ditambahkan ke object
console.table(kuliah)

//delete object
console.log('object setelah dihapus key jenis kelamin')
delete kuliah.jenisKelamin
console.table(kuliah);

//MAP js
const map = new Map([
  ['judul', 'mejikuhibiniu'],
  ['artist', 'tenxi'],
  ['released', true]
])

console.log(map)
map.set('collab', 'jemsy') //tambah value map karena belum dideclare sebelumnya
console.log(map)
map.set('judul', 'garam&madu')
map.set('collab', 'naykilla')
console.log(map)

//get data by loop(for) from map
const lagu = map.values();
for (let b of lagu){
  console.log(`ini hasil dengan for || ${b}`)
}

//delete data from map
map.delete('collab');
console.log(map);

//SET UNIQUE DATA
const kelas = new Set();
kelas.add('strukdat')
kelas.add('pWeb');
kelas.add('wimaya')
console.log(kelas)

for (let matkul of kelas){
  console.log(matkul)
}

kelas.delete('pWeb');
console.log('setelah data dihapus')
for (let matkul of kelas){
  console.log(matkul)
}

//SPREAD OPERATOR
console.log('spreaddd')
const obj1 = {firstName: 'jakii'};
const obj2 = {lastName: 'muammar'};
const obj3 = {domisili: 'bantul'}

const obj4 = {...obj1, ...obj2, ...obj3, jenisKelamin : 'laki-laki'};

console.table(obj4)

// bisa juga declare dengan array pemanggilan dibawah
// const obj5 = [...obj1, ...obj2, ...obj3, 'zzz'];
// console.table(obj5)