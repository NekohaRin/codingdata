// Math Object

//Properti
//Math.PI : mengembalikan nilai pi
//Math.E: mengembalikan nilai konstanta Euler

console.log(Math.PI);
console.log(Math.E);

//Metode Math
console.log(Math.abs(-7)); //abs === absolute number turn - to +
console.log(Math.abs(-100));
console.log(Math.pow(2, 3)); //pangkat sama seperti c++
console.log(Math.sqrt(16)); //mencari akar
console.log(Math.cbrt(27));
console.log(Math.cbrt(64));
console.log(Math.max(1,3,8,5,10)); //mencari angka terbesar
console.log(Math.min(3,2,1,8,43,9)); //mencari angka terkecil

//pembulatan angka
console.log(Math.round(5.3)) //pembulatan keatas/bawah
console.log(Math.ceil(4.1)); //force pembulatan keatas
console.log(Math.floor(4.9)); //pembulatan kebawah atau kebalikan ceil
console.log(Math.trunc(5.1234)); //menghilangkan angka belakang koma

// random number
console.log(Math.random()); //mendapatkan random angka
let y = Math.trunc(Math.random() * 100)
console.log(y) //contoh math random with trunc dan kali 100 untuk hasil bulat






