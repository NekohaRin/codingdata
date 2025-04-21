#include <iostream>
using namespace std;

int arr[] = {2, 7, 10, 14, 15, 18, 20, 21, 50 , 61, 1000};
int N = sizeof(arr)/sizeof(int);

int main(){
  int cari;
  cout << "Masukan nilai cari: "; cin >> cari;
  
  // batas
  int kiri = 0,
      kanan = N -1;
  bool ketemu = false;

  while (kiri <= kanan){
    int tengah = (kiri + kanan)/2;

    if (arr[tengah] == cari) {
      cout << "data ditemukan pada index ke-" << tengah << endl;
      ketemu = true;
      break;
    } else if (cari < arr[tengah]){
      // cari sebelah kiri tengah
      kanan = tengah-1;
    } else if (cari > arr[tengah]){
    }

  }
  if(!ketemu) {
    cout << "nilai tidak ditemukan\n";

  }

  return 0;
}
