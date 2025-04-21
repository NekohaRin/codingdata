#include <iostream>
using namespace std;

string tim[13];
bool sudahDiisi = false;

void input_tim() {
    sudahDiisi = true;
    cin.ignore();
    for (int i=0; i < 13; i++){
        cout << "Nama tim ke-" << i+1 << ": "; 
        getline(cin, tim[i]); 
    }
}

void tampilkan_tim() {
    cout << "---Daftar Tim---" << endl;
    if (!sudahDiisi){
        cout << "Data kosong!" << endl;
    } else {
        int i = 0;
        while(i < 13){
            cout << "Nama tim ke-" << i+1 << ": "; 
            cout << tim[i] << endl; 
            i++;
        }
    }
}


int main() {
    int choice;

    do {
        cout << "---Database Piala Dunia---" << endl;
        cout << "1. Input data" << endl
            << "2. Tampilkan data" << endl
            << "0. Exit" << endl;
        cout << "Pilih menu: "; cin >> choice;

        switch (choice)
        {
        case 1:
            input_tim();
            break;
        case 2:
            tampilkan_tim();
            break;
        case 0:
            exit(0);
            break;
        default:
            cout << "Pilihan tidak tersedia!" << endl;
            break;
        }
    } while (choice != 0);
    
}