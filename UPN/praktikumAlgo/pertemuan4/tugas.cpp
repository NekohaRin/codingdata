#include <iostream>
using namespace std;

int main() {
    int pilihan, n;
    bool lanjut;
    string ulang;

    do {
        system("cls");
        // Menampilkan menu
        cout << "Menu:\n";
        cout << "1. Deret biasa\n";
        cout << "2. Deret Penjumlahan\n";
        cout << "3. Menu Bintang\n";
        cout << "4. Exit\n";
        cout << "Masukkan pilihan: ";
        cin >> pilihan;

        if (pilihan == 1) {
            // Deret biasa
            cout << "Masukkan jumlah angka dalam deret: ";
            cin >> n;
            for (int i = 1; i <= n; i++) {
                cout << i << " ";
            }
            cout << endl;

        } else if (pilihan == 2) {
            // Deret penjumlahan
            cout << "Masukkan jumlah angka dalam deret: ";
            cin >> n;
            int sum = 0;
            for (int i = 1; i <= n; i++) {
                cout << i;
                if (i != n) cout << " + ";
                sum += i;
            }
            cout << " = " << sum << endl;

        } else if (pilihan == 3) {
            // Menu bintang
            int subPilihan;
            cout << "Pilih menu bintang (1: Vertikal, 2: Horizontal): ";
            cin >> subPilihan;

            if (subPilihan == 1) {
                // Bintang vertikal
                cout << "Masukkan jumlah bintang: ";
                cin >> n;
                for (int i = 0; i < n; i++) {
                    cout << "* ";
                }
                cout << endl;

            } else if (subPilihan == 2) {
                // Bintang horizontal
                cout << "Masukkan jumlah bintang: ";
                cin >> n;
                for (int i = 0; i < n; i++) {
                    cout << "*\n";
                }
            } else {
                cout << "Pilihan tidak valid.\n";
            }

        } else if (pilihan == 4) {
            // Exit
            cout << "Keluar dari program.\n";
        } else {
            cout << "Pilihan tidak valid.\n";
        }

        cout << "Apakah ingin mengulang?(y/n) : ";
        cin >> ulang;
        if(ulang == "y")
            lanjut = true;
        else lanjut = false;
    } while (lanjut);
}