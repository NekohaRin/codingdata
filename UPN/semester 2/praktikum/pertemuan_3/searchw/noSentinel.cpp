#include <iostream>
using namespace std;

struct Mahasiswa{
    int nim;
    string nama;
};

const int N = 3;
Mahasiswa arr[N] = {
    {1, "jakii"},
    {62, "Mu"},
    {45, "Ammar"}
};

int main() {
    string cari;
    cout << "Masukkan nilai yang dicari: ";
    getline(cin , cari);

    int index_hasil = -1;
    //Logic utama sequential search tanpa sentinel

    for(int i = 0; i < N; i++){
        if (arr[i].nama == cari){
            index_hasil = i;
            break;
    }
        }            if(index_hasil != -1){
                cout << "nilai yang dicari ditemukan pada index ke-" << index_hasil << endl;
            } else {
                cout << "Nilai tidak ditemukan\n";
            }
        }