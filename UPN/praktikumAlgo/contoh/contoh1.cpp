#include <iostream>
using namespace std;

// Fungsi untuk menghitung luas lingkaran
float hitungLuas(float jariJari) {
    return 3.14 * jariJari * jariJari;
}

// Fungsi untuk menghitung keliling lingkaran
float hitungKeliling(float jariJari) {
    return 2 * 3.14 * jariJari;
}

// Fungsi untuk menentukan apakah bilangan ganjil atau genap
bool ganjilGenap(int n) {
    return n % 2 == 0;
}

int main() {
    int pilihanUtama;
    cout << "Pilih opsi:\n";
    cout << "1. Lingkaran\n";
    cout << "2. Ganjil/Genap\n";
    cout << "Masukkan pilihan Anda: ";
    cin >> pilihanUtama;

    if (pilihanUtama == 1) {
        // Menu lingkaran
        int pilihanLingkaran;
        float jariJari;
        cout << "\nMasukkan jari-jari lingkaran: ";
        cin >> jariJari;
        
        cout << "\nPilih operasi:\n";
        cout << "1. Keliling\n";
        cout << "2. Luas\n";
        cout << "Masukkan pilihan Anda: ";
        cin >> pilihanLingkaran;

        if (pilihanLingkaran == 1) {
            cout << "Keliling lingkaran: " << hitungKeliling(jariJari) << endl;
        } else if (pilihanLingkaran == 2) {
            cout << "Luas lingkaran: " << hitungLuas(jariJari) << endl;
        } else {
            cout << "Pilihan tidak valid.\n";
        }
    } else if (pilihanUtama == 2) {
        // Menu ganjil/genap
        int angka;
        cout << "\nMasukkan sebuah bilangan: ";
        cin >> angka;

        if (ganjilGenap(angka)) {
            cout << "Angka " << angka << " adalah genap." << endl;
        } else {
            cout << "Angka " << angka << " adalah ganjil." << endl;
        }
    } else {
        cout << "Pilihan tidak valid.\n";
    }

    return 0;
}