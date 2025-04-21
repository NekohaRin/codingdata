#include <iostream>
using namespace std;

int main(){
  int menu;
  cout << "MENU MAKANAN" << endl;
  cout << "1.Nasi Goreng" << endl;
  cout << "2.Mie Goreng" << endl;
  cout << "3.Martabak" << endl;
  cout << "5.Martabak manis" << endl;
  
  cout << "Pilih Menu" << endl;
  cin >> menu;
  cout << endl;
  switch (menu) {
  case 1:
    char pedas;
    cout << "Anda Memilih Nasi Goreng" << endl;
    cout << "Apakah pedas?" << endl;
    cin >> pedas;
    cout << endl;
    switch (pedas) {
      case 'y':
        cout << "Anda memilih pedas." << endl;
        break;
      case 'n':
        cout << "Anda memilih tidak pedas." << endl;
        break;
      default:
        cout << "Pilihan tidak tersedia." << endl;
        break;
    }
    break;
  case 2 :
    char telur;
    cout << "Anda Memilih Mie Goreng" << endl;
    cout << "Pakai telur tidak? (y/n)" << endl;
    cin >> telur;
    if (telur == 'y'){
      int jumlah;
      cout << "Mau pakai telur berapa?" << endl;
      cin >> jumlah;
      cout << endl;
      switch (jumlah) {
        case 1 :
          cout << "Mie goreng pakai 1 telur siap meluncur" << endl;
          break;
        case 2 :
          cout << "Mie goreng pakai 2 telur siap meluncur" << endl;
          break;
        case 3 :
          cout << "Mie goreng pakai 3 telur siap meluncur" << endl;
          break;
        default:
          cout <<"Maaf jumlah telur terlalu banyak" << endl;
          break;
      }
    } else {
      cout << "okayy terimakasih";
    }
    break;
  case 3 :
    cout << "Anda Memilih Martabak" << endl;
    break;
  default:
    cout << "Pilihan tidak valid" << endl;
    break;
  }
}
