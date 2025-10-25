function call(name) {
    console.log(`hy ${name} kamu suki banget dehh`);
    
}

call('budi')

function perkenalan(nama, panggilan, asal, hoby){
    console.log(`Halo semuanya perkenalkan nama saya ${nama}`);
    console.log(`Kalian bisa panggil saya ${panggilan}`);
    console.log(`Saya berasal dari ${asal}`);
    console.log(`Hobi saya ${hoby}`); 
}

perkenalan('Budi Susanto Juwono', 'Budi', 'Jombang, Jawa tengah', 'memancing')

//function expression => menyimpan function dalam deklarasi var
let satu = function() {
    
}

//Arrow function => cara singkat untuk menulis function
//using expression function
let kali = function(a, b) {
    return a * b;
}
console.log(kali(3, 5));

//arrow functioon
let kalii = (a,b) => {
    return a * b
}
console.log(kali(3, 5));

//super short arrow function saat 1 operasi
let pangkat = (x) => x * x;
console.log(pangkat(8));


// IFEE IMMEDIATELY INVOKED FUNCTION EXPRESSIN
//function yang dipanggil langsung setelah dibuat for isolate variable
(function(){
    console.log('aku hitamm')
})()

const appConfig = (function(){
    const apiKey = '1234'
    const apiURL = 'https://api.example.com'

    return {
        getApiKey:  function() {
            return apiKey;
        },
        getApiURL: function() {
            return apiURL;
        }
    }
})()

console.log(appConfig.getApiKey());
console.log(appConfig.getApiURL());


// HIGH-Order Function (function yang menerima dari fungsi lain)
// biasa seperti di cpp

// Function recursion --> fungsi rekursif
function faktorial(n){
    //base case
    if(n === 0){
        return 1
    }
    //recursive casea
    console.log(n)
    return n * faktorial(n-1)
}
console.log(faktorial(5))

// function cobaLoop(x) {
//     for(let x ;x < 5; x++) {
//         console.log('*' * x)
//         return x
//     }
//     return cobaLoop(x)
// }

console.log(cobaLoop(5))

// for (let x )