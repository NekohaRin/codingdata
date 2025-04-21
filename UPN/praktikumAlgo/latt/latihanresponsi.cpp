#include <iostream>
#include <string>

using namespace std;

// Struktur untuk menyimpan data buku
struct Buku {
    string judul;
    string pengarang;
    int tahun;
};

// Fungsi untuk menampilkan menu utama
void menuUtama() {
    cout << "\n=== Menu Utama ===\n";
    cout << "1. Tambah Buku\n";
    cout << "2. Lihat Daftar Buku\n";
    cout << "3. Hapus Buku\n";
    cout << "4. Cari Buku\n";
    cout << "5. Keluar\n";
    cout << "Pilih menu (1-5): ";
}

// Fungsi untuk menambahkan buku
void tambahBuku(Buku daftarBuku[], int& jumlahBuku) {
    if (jumlahBuku >= 100) {
        cout << "Kapasitas penyimpanan penuh!\n";
        return;
    }
    cout << "\n=== Tambah Buku ===\n";
    cout << "Masukkan judul buku: ";
    cin.ignore();
    getline(cin, daftarBuku[jumlahBuku].judul);
    cout << "Masukkan pengarang buku: ";
    getline(cin, daftarBuku[jumlahBuku].pengarang);
    cout << "Masukkan tahun terbit: ";
    cin >> daftarBuku[jumlahBuku].tahun;
    while (cin.fail() || daftarBuku[jumlahBuku].tahun <= 0) {
        cin.clear();
        cin.ignore(100, '\n');
        cout << "Tahun harus berupa angka positif. Coba lagi: ";
        cin >> daftarBuku[jumlahBuku].tahun;
    }
    jumlahBuku++;
    cout << "Buku berhasil ditambahkan!\n";
}

// Fungsi untuk menampilkan daftar buku
void lihatDaftarBuku(const Buku daftarBuku[], int jumlahBuku) {
    cout << "\n=== Daftar Buku ===\n";
    if (jumlahBuku == 0) {
        cout << "Belum ada buku yang ditambahkan.\n";
        return;
    }
    for (int i = 0; i < jumlahBuku; ++i) {
        cout << i + 1 << ". " << daftarBuku[i].judul << " | "
             << daftarBuku[i].pengarang << " | " << daftarBuku[i].tahun << '\n';
    }
}

// Fungsi untuk menghapus buku
void hapusBuku(Buku daftarBuku[], int& jumlahBuku) {
    lihatDaftarBuku(daftarBuku, jumlahBuku);
    if (jumlahBuku == 0) return;

    int nomor;
    cout << "Masukkan nomor buku yang ingin dihapus: ";
    cin >> nomor;
    while (cin.fail() || nomor < 1 || nomor > jumlahBuku) {
        cin.clear();
        cin.ignore(100, '\n');
        cout << "Nomor tidak valid. Coba lagi: ";
        cin >> nomor;
    }
    for (int i = nomor - 1; i < jumlahBuku - 1; ++i) {
        daftarBuku[i] = daftarBuku[i + 1];
    }
    jumlahBuku--;
    cout << "Buku berhasil dihapus!\n";
}

// Fungsi untuk mencari buku
void cariBuku(const Buku daftarBuku[], int jumlahBuku) {
    cout << "\n=== Cari Buku ===\n";
    cout << "Masukkan judul buku yang dicari: ";
    cin.ignore();
    string kataKunci;
    getline(cin, kataKunci);
    bool ditemukan = false;
    for (int i = 0; i < jumlahBuku; ++i) {
        if (daftarBuku[i].judul.find(kataKunci) != string::npos) {
            cout << "- " << daftarBuku[i].judul << " | "
                 << daftarBuku[i].pengarang << " | " << daftarBuku[i].tahun << '\n';
            ditemukan = true;
        }
    }
    if (!ditemukan) {
        cout << "Buku tidak ditemukan.\n";
    }
}

// Fungsi utama
int main() {
    const string username = "nama_anda";  // Ganti dengan nama Anda
    const string password = "123";       // Ganti dengan 3 angka terakhir NIM Anda
    int kesempatan = 3;
    Buku daftarBuku[100];
    int jumlahBuku = 0;

    // Proses login
    while (kesempatan > 0) {
        string inputUser, inputPass;
        cout << "\n=== Login ===\n";
        cout << "Masukkan nama pengguna: ";
        cin >> inputUser;
        cout << "Masukkan kata sandi: ";
        cin >> inputPass;

        if (inputUser == username && inputPass == password) {
            cout << "Login berhasil!\n";
            break;
        } else {
            --kesempatan;
            cout << "Login gagal. Kesempatan tersisa: " << kesempatan << '\n';
        }
    }

    if (kesempatan == 0) {
        cout << "Anda telah gagal login sebanyak 3 kali. Program berakhir.\n";
        return 0;
    }

    int pilihan;
    do {
        menuUtama();
        cin >> pilihan;
        while (cin.fail() || pilihan < 1 || pilihan > 5) {
            cin.clear();
            cin.ignore(100, '\n');
            cout << "Pilihan tidak valid. Masukkan angka antara 1-5: ";
            cin >> pilihan;
        }
        switch (pilihan) {
        case 1:
            tambahBuku(daftarBuku, jumlahBuku);
            break;
        case 2:
            lihatDaftarBuku(daftarBuku, jumlahBuku);
            break;
        case 3:
            hapusBuku(daftarBuku, jumlahBuku);
            break;
        case 4:
            cariBuku(daftarBuku, jumlahBuku);
            break;
        case 5:
            cout << "Terima kasih telah menggunakan sistem perpustakaan!\n";
            break;
        }
    } while (pilihan != 5);

    return 0;
}
