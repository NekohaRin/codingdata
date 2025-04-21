#include <iostream>
using namespace std;

struct Mahasiswa { // deklarasi untuk array data mahasiswa
    int nim;
    string nama;
    string prog_studi;
};

const int N = 5;
Mahasiswa mhs[5] = { // data mahasiswa
    {108, "Gradiva Arya", "Informatika"},
    {222, "Bahlul Lalala", "Tambang"},
    {314, "Budi Budi Budi", "Sistem Informasi"},
    {422, "Wijdan", "Informatika"},
    {111, "Nur Heri Budianto", "Teknik Industri"},
};

int main () {
    // deklarasi untuk mencari data mahasiswa
    string cariNama, cariProgramStudi;
    int pilihan, cariNIM, index_hasil = -1;
    bool found = false;

do
{
    // tampilan menu utama
    cout << "===  SI Mahasiswa ===\n";
    cout << "1. Cari Berdasarkan Nama\n";
    cout << "2. Cari Berdasarkan NIM\n";
    cout << "3. Cari Berdasarkan Program Studi (ALL)\n";
    cout << "0. Exit\n";
    cout << "Choose : "; cin >> pilihan;
    cin.ignore();
switch (pilihan)
{
case 1:
    // case 1 untuk opsi 1 mencari data berdasarkan nama mahasiswa
    cout << "Masukkan Nama yang dicari : \n"; getline(cin, cariNama);
    cin.ignore();
    for(int i = 0; i < N; i++){
        if (mhs[i].nama == cariNama)
        {
        cout << "Ditemukan! Mahasiswa dengan NIM : " << mhs[i].nim << endl;
        found = true;
        break;
        }
    }   if (!found){
            cout << "Mahasiswa dengan nama : " << cariNama << "tidak ditemukan\n";
    }
    break;

case 2: 
    // case 2 untuk opsi cari data berdasarkan nim
    cout << "Masukkan NIM yang dicari : \n"; cin >> cariNIM;
            for (int i = 0; i < N; i++) {
                if (mhs[i].nim == cariNIM) {
                    cout << "Mahasiswa ditemukan!\n";
                    cout << "NIM: " << mhs[i].nim << "\nNama: " << mhs[i].nama 
                        << "\nProgram Studi: " << mhs[i].prog_studi << "\n";
                    found = true;
                    break;
                }
            }
            if (!found) {
                cout << "Mahasiswa dengan NIM " << cariNIM << " tidak ditemukan.\n";
            }
            break;
case 3: 
    // case 3 untuk opsi mencari data berdasarkan program studi yang akan menampilkan seluruh mahasiswa dengan program studi serupa
    cout << "Masukkan Program Studi yang dicari : \n"; getline(cin, cariProgramStudi);
            cout << "Mahasiswa dalam program studi '" << cariProgramStudi << "':\n";
            for (int i = 0; i < N; i++) {
                if (mhs[i].prog_studi == cariProgramStudi) {
                    cout << "Ketemu! Mahasiswa dengan Nama : " << mhs[i].nama << endl;
                    found = true;
                }
            }
            if (!found) {
                cout << "Oh Noo, Program Studi tersebut tidak ada:(" << cariProgramStudi << "'.\n";
            }
    break;
case 0: cout << "Terimakasih dan sampai jumpa lagi\n";
    break;

default:
        cout << "Pilihan tidak tersedia\n";
    break;
}
} while (pilihan != 0);

    system("cls");
return 0;
}