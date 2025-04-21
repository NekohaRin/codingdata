#include <iostream>
using namespace std;

int main() {
    int pilih;
    do
    {
        cout << "=== Welcome Boyyy ===\n";
        cout << "Disini kamu bisa memilih salah satu permainan yang ingin dicoba\n";
        cout << "Berikut daftar permainan yang tersedia dalam program saya\n";
        cout << "1. Lompat Tali\n";
        cout << "2. Petak Umpet\n";
        cout << "3. Kelereng\n";
        cout << "0. KELUAR(Ahhh ahhh ahhh)\n";
        cout << "Pilihan : "; cin >> pilih;
        switch (pilih)
        {

        case 1:
            cout << "Yaa Baru gini sih buat lompat tali nah talinya ambil sendiri ni yaa\n";
            cout << "oooooooooooooooooooo\n"; system("pause"); system("cls");
            break;
        case 2:
            cout << "Untuk petak umpet sesuai nama menunya pun sembunyi xixixi\n"; system("pause"); system("cls");
            break;
        case 3:
            cout << "Kelereng sih pakai biji kau ajalah yaa\n"; system("pause"); system("cls");
            break;     
        case 0:
            cout << "Ahhhh Aku KELUARRRRR\n"; system("pause"); system("cls");
            break;                 
        default:
            break;
        }
    } while (pilih != 0);
    

}