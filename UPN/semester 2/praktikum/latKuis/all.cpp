#include <iostream>
using namespace std;

const int maxdata = 100;
int jmlData = 0, choose;
string searchNim;
string searchNama;

struct mahasiswa {
    string nim;
    string name;
    float ipk;
};

int main() {
    do
    {
        cout << "### Program Data Mahasiswa ###" << endl;
        cout << "Menu" << endl;
        cout << "0. Input Data Mahasiswa" << endl;
        cout << "1. Tampilkan Data Mahasiswa" << endl;
        cout << "2. Tampilkan Data Mhasiswa Secara Terbalik" << endl;
        cout << "3. Cari Mahasiswa (Sequential Search)" << endl;
        cout << "4. Cari Mahasiswa (Binary Search)" << endl;
        cout << "5. Exit" << endl;
        cout << "Pilih : " << endl; cin >> choose;
    } while (choose != 5);
    
    switch (choose)
    {
    case 0:
    system("cls");
        if (jmlData < maxdata)
        {
            cout << "Masukkan NIM : "; getline(cin, mahasiswa[jmlData].nim)
        }
        
        break;
    
    default:
        break;
    }
}