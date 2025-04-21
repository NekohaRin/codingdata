#include <iostream>
using namespace std;
int arr[] = {22, 56, 65, 99, 101, 200, 32, 17};
int N = sizeof(arr) / sizeof(int);

int main() {
    int cari;
    cout << "Masukkan nilai yang dicari: ";
    cin >> cari;

    int index_hasil = -1;
    bool ketemu = false;
    //Logic utama sequential searc tanpa sentinel

    for(int i = 0; i < N; i++){
        if (arr[i] == cari){
            index_hasil = i;
            break;
    }
        }            if(index_hasil != -1){
                cout << "nilai yang dicari ditemukan pada index ke-" << index_hasil << endl;
            } else {
                cout << "Nilai tidak ditemukan\n";
            }
        }