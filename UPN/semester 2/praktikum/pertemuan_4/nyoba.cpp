#include <iostream>
using namespace std;

struct Mahasiswa {
    int nim;
    string nama;
    string prog_studi;
};

const int N = 5;
Mahasiswa mhs[N] = {
    {108, "Gradiva Arya", "Informatika"},
    {111, "Nur Heri Budianto", "Teknik Industri"},
    {222, "Bahlul Lalala", "Tambang"},
    {314, "Budi Budi Budi", "Sistem Informasi"},
    {422, "Wijdan", "Informatika"},
};

// Fungsi Binary Search untuk mencari mahasiswa berdasarkan NIM
int binarySearch(int cariNIM) {
    int left = 0, right = N - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (mhs[mid].nim == cariNIM)
            return mid;
        else if (mhs[mid].nim < cariNIM)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;
}

// Fungsi untuk mencari mahasiswa berdasarkan Nama (Linear Search)
void cariNama(string cariNama) {
    bool found = false;
    for (int i = 0; i < N; i++) {
        if (mhs[i].nama == cariNama) {
            cout << "Mahasiswa ditemukan!\n";
            cout << "NIM: " << mhs[i].nim << "\nNama: " << mhs[i].nama 
                 << "\nProgram Studi: " << mhs[i].prog_studi << "\n";
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "Mahasiswa dengan nama '" << cariNama << "' tidak ditemukan.\n";
    }
}

// Fungsi untuk mencari mahasiswa berdasarkan Program Studi (Linear Search)
void cariProdi(string cariProgramStudi) {
    bool found = false;
    cout << "Mahasiswa dalam program studi '" << cariProgramStudi << "':\n";
    for (int i = 0; i < N; i++) {
        if (mhs[i].prog_studi == cariProgramStudi) {
            cout << "- " << mhs[i].nama << " (NIM: " << mhs[i].nim << ")\n";
            found = true;
        }
    }
    if (!found) {
        cout << "Tidak ada mahasiswa dalam program studi '" << cariProgramStudi << "'.\n";
    }
}

int main() {
    int pilihan, cariNIM;
    string cariNama, cariProgramStudi;

    do {
        cout << "\n=== SI Mahasiswa ===\n";
        cout << "1. Cari Berdasarkan Nama\n";
        cout << "2. Cari Berdasarkan NIM (Binary Search)\n";
        cout << "3. Cari Berdasarkan Program Studi (ALL)\n";
        cout << "0. Keluar\n";
        cout << "Pilih: ";
        cin >> pilihan;
        cin.ignore(); // Menghindari masalah dengan getline

        switch (pilihan) {
        case 1: { // Cari Berdasarkan Nama
            cout << "Masukkan Nama yang dicari: ";
            getline(cin, cariNama);
            break;
        }
        case 2: { // Cari Berdasarkan NIM menggunakan Binary Search
            cout << "Masukkan NIM yang dicari: ";
            cin >> cariNIM;

            int index = binarySearch(cariNIM);
            if (index != -1) {
                cout << "Mahasiswa ditemukan!\n";
                cout << "NIM: " << mhs[index].nim << "\nNama: " << mhs[index].nama 
                     << "\nProgram Studi: " << mhs[index].prog_studi << "\n";
            } else {
                cout << "Mahasiswa dengan NIM " << cariNIM << " tidak ditemukan.\n";
            }
            break;
        }
        case 3: { // Cari Berdasarkan Program Studi
            cout << "Masukkan Program Studi yang dicari: ";
            getline(cin, cariProgramStudi);
            cariProdi(cariProgramStudi);
            break;
        }
        case 0:
            cout << "Terima kasih telah menggunakan program ini!\n";
            break;
        default:
            cout << "Pilihan tidak valid! Silakan coba lagi.\n";
        }
    } while (pilihan != 0);

    return 0;
}
