#include <iostream>
using namespace std;
int menu;
int main() {
  system("cls");
  cout << "=== SELAMAT DATANG DI KEDAI KOPI SENJA SENDU ===\n";
  cout << "1. Menu Makanan" << endl;
  cout << "2. Menu Minuman" << endl;
  cout << "3. Menu Dessert" << endl;
  cout << "Masukkan Pilihan (Contoh: 0)\t: ";
  cin >> menu;
  int mak,kua,min,des,harga,tHarga = 0,dis,akhir; //Declare variable
  string menMak,menMin,menDes;
  char vc;
  string nama;
  switch (menu) { //Pemilihan Menu
    case 1:
    cout << "= Menu Makanan =" << endl;
    cout << "1) Burger \t IDR 20000" << endl;
    cout << "2) Friench Fries IDR 10000" << endl;
    cout << "3) Pasta \t IDR 25000" << endl;
    cout << "Masukkan pilihan menu (Contoh: 0) : ";
    cin.ignore();
    cin >> mak; cout << endl;
    if (mak == 1) { //untuk output hitungan pembayaran
        menMak = "Burger";
        harga = 20000;
    } else if (mak == 2) {
      menMak = "Friench Fries";
      harga = 10000;
    } else if (mak == 3) {
      menMak = "Pasta";
      harga = 25000;
    }
      cout << "Kuantitas Pesanan (Contoh: 0)\t:";
      cin >> kua; cout << endl;
      cout << "Apakah Anda Memiliki Voucher (y/n)\t: "; // mengecek voucher
      cin >> vc;
      cout << endl;
        switch (vc) {
          case 'y':
          cout << "Masukkan kode voucher\t: ";
          cin.ignore();
          getline(cin,nama);
            if(nama == "mknhmt"){ // fungsi kondisional untuk mengecek kode voucher
            cout << "Selamat Anda berhasil mendapatkan diskon voucher 20%\n";
            tHarga = harga * kua; //perhitungan total harga tanpa diskon
            dis = 0.2 * tHarga;// menghitung diskon
            akhir = tHarga - dis;//menghitung hasil akhir setelah diskon
            cout << "== NOTA PEMBELIAN ==\n";
            cout << "Menu\t\t: " << menMak << endl;
            cout << "Kuantitas\t: " << kua << endl;
            cout << "Total Harga\t: " << tHarga << endl;
            cout << "Diskon\t\t: " << dis << endl;
            cout << "Harga Akhir\t: " << akhir << endl;
            } else { // output jika voucher salah
            tHarga = harga * kua;
            dis = 0 * tHarga;
            akhir = tHarga -dis;
            cout << "== NOTA PEMBELIAN ==\n";
            cout << "Menu\t\t: " << menMak << endl;
            cout << "Kuantitas\t: " << kua << endl;
            cout << "Total Harga\t: " << tHarga << endl;
            cout << "Diskon\t\t: " << dis << endl;
            cout << "Harga Akhir\t: " << akhir << endl;
            } break;
            default :
            tHarga = harga * kua; //penghitungan jika tidak memiliki voucher
            dis = 0 * tHarga;
            akhir = tHarga;
            cout << "== NOTA PEMBELIAN ==\n";
            cout << "Menu\t\t: " << menMak << endl;
            cout << "Kuantitas\t: " << kua << endl;
            cout << "Total Harga\t: " << tHarga << endl;
            cout << "Diskon\t\t: " << dis << endl;
            cout << "Harga Akhir\t: " << akhir << endl;
        }break;

    case 2: 
    cout << "= Menu Minuman =" << endl;
    cout << "1) Espresso \t IDR 20000" << endl;
    cout << "2) Cappucino \t IDR 20000" << endl;
    cout << "3) Latte \t IDR 15000" << endl;
    cout << "Masukkan pilihan menu (Contoh: 0) : ";
    cin.ignore();
    cin >> min; cout << endl; 
    if (min == 1) {
        menMin = "Espresso";
        harga = 20000;
    } else if (min == 2) {
      menMin = "Cappucino";
      harga = 20000;
    } else if (min == 3) {
      menMin = "Latte";
      harga = 15000;
    }
      cout << "Kuantitas Pesanan (Contoh: 0)\t:";
      cin >> kua; cout << endl;
      cout << "Apakah Anda Memiliki Voucher (y/n)\t: ";
      cin >> vc;
      cout << endl;
        switch (vc) {
          case 'y':
          cout << "Masukkan kode voucher\t: ";
          cin.ignore();
          getline(cin,nama);
          if(nama == "mknhmt"){
            cout << "Selamat Anda berhasil mendapatkan diskon voucher 20%\n";
            tHarga = harga * kua;
            dis = 0.2 * tHarga;
            akhir = tHarga - dis;
            cout << "== NOTA PEMBELIAN ==\n";
            cout << "Menu\t\t: " << menMin << endl;
            cout << "Kuantitas\t: " << kua << endl;
            cout << "Total Harga\t: " << tHarga << endl;
            cout << "Diskon\t\t: " << dis << endl;
            cout << "Harga Akhir\t: " << akhir << endl;
          } else {
            tHarga = harga * kua;
            dis = 0 * tHarga;
            akhir = tHarga - dis;
            cout << "== NOTA PEMBELIAN ==\n";
            cout << "Menu\t\t: " << menMin << endl;
            cout << "Kuantitas\t: " << kua << endl;
            cout << "Total Harga\t: " << tHarga << endl;
            cout << "Diskon\t\t: " << dis << endl;
            cout << "Harga Akhir\t: " << akhir << endl;
            }break;
            default :
            tHarga = harga * kua;
            dis = 0 * tHarga;
            akhir = tHarga;
            cout << "== NOTA PEMBELIAN ==\n";
            cout << "Menu\t\t: " << menMin << endl;
            cout << "Kuantitas\t: " << kua << endl;
            cout << "Total Harga\t: " << tHarga << endl;
            cout << "Diskon\t\t: " << dis << endl;
            cout << "Harga Akhir\t: " << akhir << endl;
        }break;

    case 3: 
    cout << "= Menu Dessert =" << endl;
    cout << "1) Macaron \t IDR 20000" << endl;
    cout << "2) Tiramisu \t IDR 20000" << endl;
    cout << "3) Cheesecake \t IDR 15000" << endl;
    cout << "Masukkan pilihan menu (Contoh: 0) : ";
    cin.ignore();
    cin >> des; cout << endl;
    if (des == 1) {
        menDes = "Espresso";
        harga = 20000;
    } else if (des == 2) {
      menDes = "Cappucino";
      harga = 20000;
    } else if (des == 3) {
      menDes = "Latte";
      harga = 15000;
    }
      cout << "Kuantitas Pesanan (Contoh: 0)\t:";
      cin >> kua; cout << endl;
      cout << "Apakah Anda Memiliki Voucher (y/n)\t: ";
      cin >> vc;
      cout << endl;
        switch (vc) {
          case 'y':
          cout << "Masukkan kode voucher\t: ";
          cin.ignore();
          getline(cin,nama);
          if(nama == "mknhmt"){
            cout << "Selamat Anda berhasil mendapatkan diskon voucher 20%\n";
            tHarga = harga * kua;
            dis = 0.2 * tHarga;
            akhir = tHarga - dis;
            cout << "== NOTA PEMBELIAN ==\n";
            cout << "Menu\t\t: " << menDes << endl;
            cout << "Kuantitas\t: " << kua << endl;
            cout << "Total Harga\t: " << tHarga << endl;
            cout << "Diskon\t\t: " << dis << endl;
            cout << "Harga Akhir\t: " << akhir << endl;
          } else {
            tHarga = harga * kua;
            dis = 0 * tHarga;
            akhir = tHarga -dis;
            cout << "== NOTA PEMBELIAN ==\n";
            cout << "Menu\t\t: " << menDes << endl;
            cout << "Kuantitas\t: " << kua << endl;
            cout << "Total Harga\t: " << tHarga << endl;
            cout << "Diskon\t\t: " << dis << endl;
            cout << "Harga Akhir\t: " << akhir << endl;
            }break;
            default :
            tHarga = harga * kua;
            dis = 0 * tHarga;
            akhir = tHarga;
            cout << "== NOTA PEMBELIAN ==\n";
            cout << "Menu\t\t: " << menDes << endl;
            cout << "Kuantitas\t: " << kua << endl;
            cout << "Total Harga\t: " << tHarga << endl;
            cout << "Diskon\t\t: " << dis << endl;
            cout << "Harga Akhir\t: " << akhir << endl;
        }break;
  }
  
}
