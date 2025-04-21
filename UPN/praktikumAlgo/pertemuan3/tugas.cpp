#include <iostream>
#include <string>
using namespace std;

int main(){
  int pil;
  char kon;
  string nama, judul, tgl, nim;
  cout << "PERPUSTAKAAN" << endl;
  cout << "1. Meminjam buku" << endl;
  cout << "2. Mengembalikan buku" << endl;
  cout << "3. Membeli buku" << endl;

  cout << "Pilih salah satu" << endl;
  cin >> pil;
  cout << endl;
  switch (pil) {
    case 1:
      cout << "Masukkan nama : ";
      getline(cin,nama);
      cout << "Masukkan nim : ";
      getline(cin,nim);
      cout << "Tanggal meminjam : ";
      getline(cin, tgl);
      break;


    case 2:
      cout << "Masukkan nama : " << endl;
      cin >> nama;
      cout << "Masukkan nim : " << endl;
      cin >> nim;
      cout << "Tanggal kembali : " << endl;
      cin >> tgl;
      cout << "Buku dalam kondisi baik atau bukan (y/n) : " << endl;
      cin >> kon;
      cout << endl;
      switch (kon) {
        case 1:
          cout << "terimakasih" << endl;
          break;
          case 2:
          cout << "Anda harus membayar denda" << endl;
          break;
      }
    case 3:
      cout << "Masukkan nama : " << endl;
      cin >> nama;
      cout << "Judul buku : " << endl;
      cin >> judul;
      cout << "Tanggal meminjam : " << endl;
      cin >> tgl;
      break;

  }
}
