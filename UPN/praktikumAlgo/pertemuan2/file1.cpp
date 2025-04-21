#include <iostream>
using namespace std;

int main() {
    // char gender;
    // cout << "apa jenis kelamin kamu?";
    // cin >> gender;
    // if(gender == 'P') {
    //     cout << "kamu perempuan";
    // } else if(gender == 'L'){
    //     cout << "kamu laki-laki";
    // } else {cout << "kamu kaum pelangi";}

/*    int jumlah_poin;
    cout << "Masukkan jumlah poin\n";
    cin>> jumlah_poin;

    if(jumlah_poin >= 100 || jumlah_poin < 200) {
        cout << "Kamu adalah member gold\n";
        cout << "Kamu dapat diskon 10%\n";
        int a = 5;
        cout << "nilai a: " << a << endl;
    } else if
    else {cout << "Kamu bukan member\n";} */
int nilai;
  cout << "Masukkan nilai : ";
  cin >> nilai;
  if (nilai >= 85 && nilai <= 100){
    int project;
    cout << "Masukkan nilai project : ";
    cin >> project;
    if(project >= 90){
      cout << "Nilai A+";
    } else {
    cout << "Nilai A";
    }
  } else if (nilai >= 70){
    cout << "NIlai B";
  } else if (nilai >= 60){
    cout << "Nilai C";
  } else if (nilai >= 50) {
    cout << "Nilai D";
  } else {cout << "Nilai E";}
}
