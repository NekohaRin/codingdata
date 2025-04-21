#include <iostream>
using namespace std;

void nilaiMax(int nilai[], int n) {
    int nilaiMaks = nilai[0];
    int jNilaiTinggiM = 0;

    // Mencari nilai tertinggi
    for (int i = 1; i < n; i++) {
        if (nilai[i] > nilaiMaks) {
            nilaiMaks = nilai[i];
        }
    }
    // hitung jumlah mahasiswa dengan nilai tertinggi
    for (int i = 0; i < n; i++) {
        if (nilai[i] == nilaiMaks) {
            jNilaiTinggiM++;
        }
    }
    // Menampilkan hasil
    cout << "1. Nilai tertinggi = " << nilaiMaks << endl;
    cout << "2. Banyaknya mahasiswa memiliki nilai tertinggi = " << jNilaiTinggiM << endl;
}

int main() {
    const int N = 10;
    int nilai[N];

    cout << "Masukkan 10 nilai mahasiswa :\n";
    for (int i = 1; i <= N; i++) {
        cout << "Nilai Mahasiswa ke-" << i << "\t : ";
        cin >> nilai[i];
    }

    nilaiMax(nilai, N);

    return 0;
}