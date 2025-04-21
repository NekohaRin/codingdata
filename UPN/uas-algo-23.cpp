#include <iostream>
using namespace std;

string terbilang[9] = {
    "satu", "dua", "tiga",
    "empat", "lima", "enam",
    "tujuh", "delapan", "sembilan"
};

int main() {
    int input;
    cout << "Masukan angka: "; cin >> input;

    if (input < 0 || input > 999)  {
        cout << "Error: angka tidak boleh negatif atau lebih dari 99" << endl;
        exit(0);
    }
    cout << "Terbilang: ";
    if (input == 0) {
        cout << "Nol " << endl;
    } else {
        int ratusan = input / 100;
        int sisa_ratusan = input % 100;
        int puluhan = sisa_ratusan / 10;
        int satuan = sisa_ratusan % 10;

        if (ratusan != 0) {
            if (ratusan == 1) {
                cout << "seratus ";
            } else {
                cout << terbilang[ratusan-1] << " ratus ";
            }
        }

        if (puluhan == 1) {
            if (satuan == 0) {
                cout << "Sepuluh" << endl;
            } else if (satuan == 1) {
                cout << "Sebelas" << endl;
            } else {
                cout << terbilang[satuan-1] << " belas " << endl;
            }
        } else {
            if (puluhan != 0) {
                cout << terbilang[puluhan-1] << " puluh ";
            }
            if (satuan != 0) {
                cout << terbilang[satuan-1];
            }
            cout << endl;
        }
    }
}