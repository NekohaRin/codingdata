#include <iostream>
using namespace std;

int main() {
    int maks = 10, harga[maks] = {1500, 50000000, 1000, 3999999}; //declare array 
    string namaGame[maks] = {"Legenda Seluler Letupan-Letupan", "Api Gratis", "Panggilan Tugas", "Arsip Biru"}, //array nama game 
            pengembang[maks] = {"Moonton", "Garena", "Garena", "NEXON Company"}; //array developer
    int jumlahData = 4, pilihan;

    do {
        cout << "=== PROGRAM E-DAGAME (PLATFORM E-DAGANG GAME) ===\n";
        cout << "1. Tambah Data Game\n";
        cout << "2. Tampilkan Data Gae\n";
        cout << "3. Keluar\n";
        cout << "Pilihan Anda: "; cin >> pilihan; 

        switch (pilihan) {
        case 1: 
        // untuk input data game
                cin.ignore();
                cout << "Masukkan nama game: "; getline(cin, namaGame[jumlahData]); //input nama game kedalam array
                cout << "Masukkan harga game: "; cin >> harga[jumlahData]; // input harga game kedalam array
                cin.ignore();
                cout << "Masukkan nama developer: "; getline(cin, pengembang[jumlahData]); //input developer kedalam array
                jumlahData++;
                cout << "Data game berhasil ditambahkan !\n";
            break;
        case 2: {
        // untuk mengeluarkan data game
            if (jumlahData == 0) {
                cout << "Tidak ada data game yang tersimpan.\n";
            } else {
                cout << "Daftar games:\n";
                for (int x = 0; x < jumlahData; x++) {
                    cout << x + 1 << ". nama game: " << namaGame[x] << " harga: Rp" << harga[x] << " developer: " << pengembang[x] <<  endl; // mengeluarkan data game yang tersimpan
                }
            }
            break;
        }
        case 3:
            cout << "Keluar dari program. Terima kasih!\n"; system("pause");
            break;
        default:
            cout << "Pilihan tidak valid. Silakan coba lagi.\n";
        }
    } while (pilihan != 3);
    return 0;
}