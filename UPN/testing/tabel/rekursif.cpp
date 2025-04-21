#include <iostream>
using namespace std;
// int nMax(int bil1, int bil2, int bil3){
//     // Menentukan bilangan terbesar
//     int biggest;
//     if (bil1 >= bil2 && bil1 >= bil3) {
//         biggest = bil1;
//     } else if (bil2 >= bil1 && bil2 >= bil3) {
//         biggest = bil2;
//     } else {
//         biggest = bil3;
//     }
//     return biggest;

// }


// int main(){
//     int a, b, c;

//     // Input tiga bilangan dari pengguna
//     cout << "Masukkan bilangan pertama: ";
//     cin >> a;
//     cout << "Masukkan bilangan kedua: ";
//     cin >> b;
//     cout << "Masukkan bilangan ketiga: ";
//     cin >> c;


//     // Tampilkan hasil bilangan terbesar
//     int terbesar;
//     cout << "Bilangan terbesar adalah: " << nMax(terbesar) << endl;

//     return 0;
// }
//fungsi hitung nilai maksimal
int nMax(){
    int maks,nilai;
    for(int a = 1; a <= 3; a++) {
        cout << "Masukkan bilangan ke-" << a << " : "; cin >> nilai;
        if(nilai > maks ){
            maks = nilai;
        }
    }
    cout << "nilai maksimum \t\t: \n";
    return maks;
}

int main() {
    cout << "Menjalankan fungsi nMax untuk menghitung nilai maksimum dari tiga bilangan\n";
    int maksimum = nMax();
    cout << "Nilai maksimum yang diperoleh adalah: " << maksimum << endl;
    return 0;
}
