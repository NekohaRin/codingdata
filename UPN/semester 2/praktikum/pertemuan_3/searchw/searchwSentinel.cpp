#include <iostream>
using namespace std;
int N = 10;
int arr[] = {22, 56, 65, 99, 101, 200, 32, 17, 85};

int main() {
    int cari;
    cout << "Masukkan nilain yang dicari: ";
    cin >> cari;
    arr[N-1] = cari;

    int i = 0;
    while(arr[i] != cari){
        i++;
    }

    if (i < (N-1)) {
        cout << "found on index no-" << i << endl;
    } else {
        cout << "not found\n";
    }
}

    int index_hasil = -1;
    bool ketemu = false;
    //Logic utama sequential searc tanpa sentinel

    // for(int i = 0; i < N; i++){
    //     if (arr[i] == cari){
    //         index_hasil = i;
    //         break;
    // }
    //     }            if(index_hasil != -1){
    //             cout << "nilai yang dicari ditemukan pada index ke-" << index_hasil << endl;
    //         } else {
    //             cout << "Nilai tidak ditemukan\n";
    //         }