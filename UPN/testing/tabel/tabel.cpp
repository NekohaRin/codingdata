#include <iostream>
#include <iomanip>  // Untuk menggunakan setw() dan manipulasi output lainnya
#include <string>
using namespace std;

int main() {
    string nama, alamat;
    int umur;
    string jenisKelamin;

    // Input data dari user
    cout << "Masukkan Nama: ";
    getline(cin, nama);
    
    cout << "Masukkan Jenis Kelamin (L/P): ";
    getline(cin, jenisKelamin);
    
    cout << "Masukkan Alamat: ";
    getline(cin, alamat);

    // Output data dalam bentuk tabel
    cout << "\n===========================================================\n";
    cout << left << setw(20) << "Nama" 
         << setw(20) << "Jenis Kelamin" 
         << setw(30) << "Alamat" << endl;
    cout << "===========================================================\n";
    cout << left << setw(20) << nama 
         << setw(20) << jenisKelamin 
         << setw(30) << alamat << endl;
    cout << "===========================================================\n";

    return 0;
}
