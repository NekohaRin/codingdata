#include <iostream>
using namespace std;

float r, luas, keliling;
int pilih, bilangan;

int main(){
    cout << "pilih salah satu \n";
    cout << "1. lingkaran\n";
    cout << "2. ganjil/genap \n";
    cout << "Masukkan pilihan : "; cin >> pilih;
    switch (pilih)
    {
        case 1 :
        cout << "hasil : \n";
        luasLingkaran();
        // kelilingLingkaran(); 

        case 2 :
        ganjilGenap();

    default:
        break;
    }
}
void luasLingkaran(){
    cout << "jari-jari "; cin >> r;
    luas = 3.14 * r * r;
    cout << "luas lingkaran : " << luas;
    keliling = 2 * r * 3.14;
    cout << "keliling : " << keliling;
}

void ganjilGenap(){
    cout << "Masukkan sebuah bilangan : "; cin >> bilangan;
    if (bilangan % 2 == 1)
    {
        cout << "bilangan bernilai ganjil\n";
    }
    else if(bilangan % 2 == 0)
    {
        cout << "bilangan bernilai genap\n";
    }
}
// void kelilingLingkaran(){
//     keliling = 2 * r * 3.14;
//     cout << "keliling : " << keliling;
// }










// void input();
// int main (){
//     program input barang cout
//     input();
//     terimakasih sudah menginputkan barang disini 
//     system("pause");

// }

// void input () {
//     masukkan nama barang
//     cout << " anda memasukkan barang" << namabarang jumlah seharga
// }
//  void inputMahasiswa();





// KEDUAAA

//  int main(){
//     cout << "Program Input Data\n";
//     inputMahasiswa();
//  }

// void inputMahasiswa () {
//     string nama;
//     int nim;

//     cout << "Masukkan NIM Anda : "; cin >> nim;
//     cout << "Masukkan Nama Anda : "; cin >> nama;
//     cout << "Nama Anda " << nama << "dengan NIM" << nim;
// }

// PERTAMA

// int angkaKembali() {
//     return 5;
// }
// int main() {
//     cout << angkaKembali() << '\n';
// }
// int penjumlahan(int a, int b);
// int pengurangan(int a, int b);
// int perkalian(int a, int b);
// int pembagian(int a, int b);

// int main () {
//     system("cls");
//     int a, b;
//     cout << "masukkan nilai a : ";
//     cin >> a;
//     cout << "masukkan nilai b : " ;
//     cin >> b;

//     system("cls");
//      int pilih;
//      cout << "1. penjumlahan" << endl;
//      cout << "2. pengurangan" << endl;
//      cout << "3. perkalian" << endl;
//      cout << "4. pembagian" << endl;
//      cout << " pilih : "; cin >> pilih;

//      switch (pilih) {
//         case 1 :
//         cout << "hasil penjumlahan : " << penjumlahan(a,b);
//         break;

//         case 2 :
//         cout << "hasil pengurangan : " << pengurangan(a,b);
//         break;

//         case 3 :
//         cout << "hasil perkalian : " << perkalian(a,b);
//         break;

//         case 4 :
//         cout << "hasil pembagian : " << pembagian(a,b);
//         break;

//         default :
//         cout << "tidak valid\n";
//      }
// }
// int penjumlahan(int a, int b){
//     int jumlah = a + b;
//     return jumlah;
// }

// int pengurangan(int a, int b){
//     int kurang = a - b;
//     return kurang;
//     }

// int perkalian(int a, int b){
//     int kali = a * b;
//     return kali;
//     }

// int pembagian(int a, int b){
//     int bagi = a / b;
//     return bagi;
//     }

