// #include <iostream>
// using namespace std;

// int main(){
//     int baris = 3;
//     int kolom = 3;
//     int matriks[baris][kolom] = {{1,2,3},{4,5,6},{7,8,9}};
//     // cin >> baris;
//     // cin >> kolom;
//     // int matriks[baris][kolom];
//     cout << "Matriks :" << endl;
//     for (int i = 0; i < 3;i++){
//         for(int j = 0; i < 3;j++){
//             cout << matriks[i][j] << " ";
//         }
//         cout << endl;
//     }
// }

// drive bit.ly/WindyClaudiaNapitupulu
#include <iostream>
using namespace std;

int main() {
    const int MAX_SIZE = 100; // Kapasitas maksimum array
    string namaGame[MAX_SIZE] = {"The Legend of Zelda", "Super Mario Bros", "Minecraft", "Final Fantasy VII"};
    string developer[MAX_SIZE] = {"Nintendo", "Nintendo", "Mojang", "Square Enix"};
    double harga[MAX_SIZE] = {59.99, 49.99, 29.99, 39.99};
    int jumlahData = 4; // Jumlah data awal
    int pilihan;

    do {
        cout << "\nMenu:\n";
        cout << "1. Tambah Data Game\n";
        cout << "2. Tampilkan Semua Data Game\n";
        cout << "3. Keluar\n";
        cout << "Pilihan Anda: ";
        cin >> pilihan;

        switch (pilihan) {
        case 1: {
            if (jumlahData < MAX_SIZE) {
                cin.ignore(); // Membersihkan buffer sebelum input string
                cout << "Masukkan nama game: ";
                getline(cin, namaGame[jumlahData]);

                cout << "Masukkan nama developer: ";
                getline(cin, developer[jumlahData]);

                cout << "Masukkan harga game: ";
                cin >> harga[jumlahData];

                jumlahData++;
                cout << "Data game berhasil ditambahkan.\n";
            } else {
                cout << "Array penuh, tidak dapat menambahkan data lagi.\n";
            }
            break;
        }
        case 2: {
            if (jumlahData == 0) {
                cout << "Tidak ada data game yang tersimpan.\n";
            } else {
                cout << "Daftar game yang tersedia:\n";
                for (int i = 0; i < jumlahData; i++) {
                    cout << i + 1 << ". Nama Game: " << namaGame[i] << endl;
                    cout << "   Developer: " << developer[i] << endl;
                    cout << "   Harga: $" << harga[i] << endl;
                }
            }
            break;
        }
        case 3:
            cout << "Keluar dari program. Terima kasih!\n";
            break;
        default:
            cout << "Pilihan tidak valid. Silakan coba lagi.\n";
        }
    } while (pilihan != 3);

    return 0;
}
