#include <iostream>
#include <iomanip>
using namespace std;

const int MAX = 100;

struct Mhs {
    string name;
    float nilai;
};

// Function for input data
void inputData(Mhs *mhs, int n) {
    for (int i = 0; i < n; i++) {
        cout << "Mahasiswa ke-" << i + 1 << ":\n";
        cout << "Nama  : ";
        cin.ignore();
        getline(cin, mhs[i].name);
        cout << "Nilai : ";
        cin >> mhs[i].nilai;
    }
}

// Function untuk menampilkan data
void tampilData(Mhs *mhs, int n) {
    cout << "\nData Mahasiswa (Terurut):\n";
    cout << left << setw(5) << "No" << setw(30) << "Nama" << "Nilai\n";
    cout << "---------------------------------------------\n";
    for (int i = 0; i < n; i++) {
        cout << setw(5) << i + 1 << setw(30) << mhs[i].name << mhs[i].nilai << endl;
    }
}

// Function for sorting ascending
void urtAscending(Mhs *mhs, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (mhs[i].nilai > mhs[j].nilai) {
                swap(mhs[i], mhs[j]);
            }
        }
    }
}

// Fungsi untuk sorting descending
void urtDescending(Mhs *mhs, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (mhs[i].nilai < mhs[j].nilai) {
                swap(mhs[i], mhs[j]);
            }
        }
    }
}

int main() {
    Mhs data[MAX];
    int n;
    char urutan;

    cout << "Masukkan jumlah mahasiswa (maks 100): ";
    cin >> n;

    if (n < 1 || n > MAX) {
        cout << "Jumlah tidak valid.\n";
        return 1;
    }

    inputData(data, n);

    cout << "\nUrutkan nilai? (a = ascending, b = descending): ";
    cin >> urutan;

    if (urutan == 'a' || urutan == 'A')
        urtAscending(data, n);
    else
        urtDescending(data, n);

    tampilData(data, n);

    return 0;
}
