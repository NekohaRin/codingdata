#include <iostream>
using namespace std;

    struct Mahasiswa
    {
        /* data */
        string nama;
        string nim;
        int sks;
    };

int main() {

    int jumlahMahasiswa;
    cout << "Masukkan Jumlah Mahasiswa : ";
    cin >> jumlahMahasiswa;

    Mahasiswa mhs[jumlahMahasiswa];

    for (int i = 0; i < jumlahMahasiswa; i++){
        cout << "Masukkan Nama Mahasiswa ke - " << i+1 << " : ";
        cin >> mhs[i].nama;
    }
    
    // output
    for (int i = 0; i < jumlahMahasiswa; i++)
    {
        cout << "Data Mahasiswa ke-" << i+1 << " : ";
        cout << "Nama : " << mhs[i].nama;
        cout << endl;

    }
}