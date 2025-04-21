#include <iostream>
using namespace std;

struct Mahasiswa {
    int nim;
    string nama;
    string prog_studi;
};

Mahasiswa mhs[5] = {
    {108, "Gradiva Arya", "Informatika"},
    {111, "Nur Heri Budianto", "Teknik Industri"},
    {222, "Bahlul Lalala", "Tambang"},
    {314, "Budi Budi Budi", "Sistem Informasi"},
    {422, "Wijdan", "Informatika"}
};

int N = 5;

void tampilan_cari_nama(){
    string nama;
    cout << "Masukan nama: ";
    getline(cin >> ws, nama);

    for (int i = 0; i < 5; i++){
        if (mhs[i].nama == nama){
            cout << "Ditemukan! Mahasiswa dengan NIM: " << mhs[i].nim << endl;
            return;
        }
    }
    cout << "Nama tidak ditemukan!" << endl;
}

void tampilan_cari_nim(){
    int nim;
    cout << "Masukan NIM: ";
    cin >> nim;

    int l = 0, r = N-1;

    while (l <= r) {
        int mid = (l+r)/2;
        if (mhs[mid].nim == nim){
            cout << "Ditemukan! Mahasiswa dengan Nama: " << mhs[mid].nama << endl;
            return;
        } else {
            if (nim < mhs[mid].nim){
                r = mid-1;
            } else {
                l = mid +1;
            }
        }
    }

    cout << "Nama tidak ditemukan!" << endl;
}

void tampilan_cari_prog_studi(){
    string prog;
    cout << "Masukan program studi: ";
    getline(cin >> ws, prog);
    bool found = false;

    for (int i = 0; i < 5; i++){
        if (mhs[i].prog_studi == prog){
            cout << "Ditemukan! Mahasiswa dengan Nama: " << mhs[i].nama << endl;
            found = true;
        }
    }
    if (!found)
        cout << "Nama tidak ditemukan!" << endl;
}

int main(){
    int pilih;
    do {
        cout << "===SI Mahasiswa===" << endl;
        cout << "1. Cari berdasarkan nama" << endl;
        cout << "2. Cari berdasarkan NIM" << endl;
        cout << "3. Cari berdasarkan program studi (semua)" << endl;
        cout << "0. Keluar" << endl;
        cout << "pilih: "; cin >> pilih;

        switch (pilih)
        {
        case 1:
            tampilan_cari_nama();
            break;
        case 2:
            tampilan_cari_nim();
            break;
        case 3:
            tampilan_cari_prog_studi();
            break;
        
        default:
            break;
        }
    } while (pilih != 0);
}