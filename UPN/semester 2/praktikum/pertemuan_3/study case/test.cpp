#include <iostream>
using namespace std;

struct Data {
    int id;
    string nama;
};

int main() {
    Data data[] = {
        {1, "Ali"},
        {2, "Budi"},
        {3, "Citra"}
    };

    string cari = "Budi";
    bool ditemukan = false;

    for (int i = 0; i < 3; i++) {
        if (data[i].nama == cari) {
            cout << "Data ditemukan: ID = " << data[i].id << ", Nama = " << data[i].nama << endl;
            ditemukan = true;
            break;
        }
    }

    if (!ditemukan) {
        cout << "Data tidak ditemukan!" << endl;
    }

    return 0;
}
