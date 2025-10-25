// Date Object

//tanggal dan waktu rn
let now = new Date();
console.log(now);

//custom date
//menggunakan string
let specificDate = new Date("August 20, 2025");
console.log(specificDate);

let customDate = new Date(2024, 7, 17, 10, 30);
console.log(customDate);

//ambil date spesifik
let today = new Date();
console.log(today.getFullYear());
console.log(today.getMonth());
console.log(today.getDay());
console.log(today.getDate());
console.log(today.getHours());
console.log(today.getMinutes()); //dst

// Mengatur tahun
// today.setFullYear(2026);
// console.log(today); //dast

// Perhitungan waktu
// let startDate = new Date(2005, 1, 24)
// let endDate = new Date(2025, 10, 11)

// let ms = endDate - startDate
// let day = ms / (1000 * 3600 * 24)
// console.log(day);
let startDate = new Date(2024, 7, 20, 10, 30);
let endDate = new Date(2024, 8, 3, 10, 30);
let diff = endDate - startDate;
console.log(diff / (1000 * 3600 * 24));