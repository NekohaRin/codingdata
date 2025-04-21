#include <iostream>
using namespace std;

// note : inisialisasi Struct Mahasiswa
struct Mahasiswa {
  string nim;
  string nama;
  float ipk;
};

// note : init awal jumlah dan daftarmahasiswa
int jumlahMhs = 0;
Mahasiswa daftarMahasiswa[100]; // init awal 100 data slot

// note :  Biar lebih rapi fungsi dijadiin atas, logikanya dibawah, tapi bebasnya kalian
void menu_nol();
void menu_satu();
void tampilkanTerbalik(int jumlahMhs);
void menu_dua();
int sequentialSearch(string cari);
void menu_tiga(string cari, int index);
int binarySearch(string cari, int left, int right);
void menu_empat(string cari, int index, char urut);

// --- Main Program ---
int main() {
  // note : init awal dalam fungsi main
  int pilihan, index;
  char urut;
  string cari;

  // note : pake do biar muter satu kali
  do {
    cout << "### Program Data Mahasiswa ###\n\n";
    cout << "Menu:\n";
    cout << "0. Input Mahasiswa\n";
    cout << "1. Tampilkan Mahasiswa\n";
    cout << "2. Tampilkan Mahasiswa Secara Terbalik\n";
    cout << "3. Cari Mahasiswa (Sequential Search)\n";
    cout << "4. Cari Mahasiswa (Binary Search)\n";
    cout << "5. Keluar\n";
    cout << "Pilih: ";
    cin >> pilihan;
    cout << endl;

    // note : pake switch biar enak di manage
    switch (pilihan) {
      case 0:
        menu_nol();
        break;
      case 1:
        menu_satu();
        break;
      case 2:
        menu_dua();
        break;
      case 3:
        menu_tiga(cari, index); // umpan pake paramater
        break;
      case 4:
        menu_empat(cari, index, urut); // umpan pake paramater
        break;
      case 5:
        cout << "Keluar dari program.\n";
        break;
      default:
        cout << "Pilihan tidak valid!\n";
    }
    // note : biar ada fitur di tekan baru lolos
    cout << "Tekan enter untuk melanjutkan...";
    cin.ignore();
    cin.get();
    system("cls");
  } while (pilihan != 5);

  return 0;
}

void menu_nol() {
  // TO DO
  // Input ada berapa mahasiswa
  cout << "Masukkan jumlah mahasiswa: ";
  cin >> jumlahMhs;
  cout << endl;

  // Input data mahasiswa
  cout << "### Input Data Mahasiswa ###\n";
  for (int i = 0; i < jumlahMhs; i++) {
    cout << "Masukan data Mahasiswa ke-" << i + 1 << endl;
    cout << "Masukkan NIM: ";
    getline(cin >> ws, daftarMahasiswa[i].nim);
    cout << "Masukkan Nama: ";
    getline(cin >> ws, daftarMahasiswa[i].nama);
    cout << "Masukkan IPK: ";
    cin >> daftarMahasiswa[i].ipk;
    cout << endl;
  }
  // Selesai
  cout << endl;
}

void menu_satu() {
  // TO DO
  //  Cek apakah ada data, jika tidak maka keluar
  if (jumlahMhs == 0) {
    cout << "Isi data terlebih dahulu" << endl << endl;
    return;
  };
  // Tampilkan mahasiswa
  cout << "### Daftar Mahasiswa ###\n";
  for (int i = 0; i < jumlahMhs; i++) {
    cout << "Daftar Mahasiswa ke-" << i + 1 << ":\n";
    cout << "NIM: " << daftarMahasiswa[i].nim << endl;
    cout << "Nama: " << daftarMahasiswa[i].nama << endl;
    cout << "IPK: " << daftarMahasiswa[i].ipk << endl << endl;
  }
}

void tampilkanTerbalik(int jumlahMhs) {
  // TO DO
  // Tampilkan datanya
  cout << "### Data Mahasiswa ###\n";
  for (int i = jumlahMhs; i >= 0; i--) {
    cout << "Daftar Mahasiswa ke-" << i + 1 << ":\n";
    cout << "NIM: " << daftarMahasiswa[i].nim << endl;
    cout << "Nama: " << daftarMahasiswa[i].nama << endl;
    cout << "IPK: " << daftarMahasiswa[i].ipk << endl << endl;
  }
}

void menu_dua() {
  // TO DO
  // Cek apakah ada data, jika tidak maka keluar
  if (jumlahMhs == 0) {
    cout << "Isi data terlebih dahulu" << endl << endl;
    return;
  };
  // Jika ada, tampilkan terbaik dari index Paling bawah
  tampilkanTerbalik(jumlahMhs - 1);
  // Selesai
}

// Fungsi Sequential Search mengembalikan index
int sequentialSearch(string cari) {
  for (int i = 0; i < jumlahMhs; i++) {
    if (daftarMahasiswa[i].nim == cari) {
      return i;
    } else if (daftarMahasiswa[i].nama == cari) {
      return i;
    }
  }
  return -1;
}

void menu_tiga(string cari, int index) {
  // TO DO
  // Cek apakah data ada atau tidak, jika tidak maka keluar
  if (jumlahMhs == 0) {
    cout << "Isi data terlebih dahulu" << endl << endl;
    return;
  };
  // Jika ada masukan NIM / Nama yang mau dicari
  cout << "Masukan NIM / Nama yang mau dicari: ";
  getline(cin >> ws, cari);
  cout << endl;
  // Jalankan fungsi Sequential Search
  index = sequentialSearch(cari);
  if (index == -1) {
    cout << "Data tidak ditemukan" << endl << endl;
  } else {
    cout << "Data ditemukan pada index ke-" << index + 1 << endl;
    cout << "NIM: " << daftarMahasiswa[index].nim << endl;
    cout << "Nama: " << daftarMahasiswa[index].nama << endl;
    cout << "IPK: " << daftarMahasiswa[index].ipk << endl << endl;
  };
  // Selesai
}

// Fungsi binary Search mengembalikan index
int binarySearch(string cari, int left, int right) {
  if (left > right) return -1;
  int mid = left + (right - left) / 2;
  if (daftarMahasiswa[mid].nim == cari || daftarMahasiswa[mid].nama == cari)
    return mid;
  if (daftarMahasiswa[mid].nim > cari) return binarySearch(cari, left, mid - 1);
  return binarySearch(cari, mid + 1, right);
}

void menu_empat(string cari, int index, char urut) {
  // TO DO
  // Cek apakah data ada dan terurut tidak (input dari user tadi),
  // jika
  cout << "Kamu sudah masukin data dengan urut? (y/n) ";
  cin >> urut;
  // tidak maka keluar
  if (jumlahMhs == 0 || urut == 'n') {
    cout << "Isi data terlebih dahulu" << endl << endl;
    return;
  };
  // tidak maka keluar Jika ada masukan NIM / Nama yang mau dicari
  cout << "Masukan NIM / Nama yang mau dicari: ";
  getline(cin >> ws, cari);
  cout << endl;
  // Jalankan fungsi Binary Search
  index = binarySearch(cari, 0, jumlahMhs - 1);
  if (index == -1) {
    cout << "Data tidak ditemukan" << endl << endl;
  } else {
    cout << "Data ditemukan pada index ke-" << index + 1 << endl;
    cout << "NIM: " << daftarMahasiswa[index].nim << endl;
    cout << "Nama: " << daftarMahasiswa[index].nama << endl;
    cout << "IPK: " << daftarMahasiswa[index].ipk << endl << endl;
  };
  // Selesai
}


