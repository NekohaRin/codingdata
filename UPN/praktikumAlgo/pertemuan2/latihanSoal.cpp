#include <iostream>
using namespace std;

int main() {
  float ipk;
  float waktu;
  cout << "Masukkan waktu pendidikan : ";
  cin >> waktu;
  if (waktu <= 4){
  cout << "Masukkan ipk : ";
  cin >> ipk;
    if(ipk >= 3.51 && ipk <= 4.00){
       if (ipk == 4.00) {
      cout << "summa cumlaude";
    } else if (ipk >= 3.80) {
      cout << "magna cumlaude";
    } else {
    cout << "Cumlaude";
    } 
  } else {
    if (ipk >= 3.00) {
    cout << "sangat baik";
  } else if (ipk >= 2.50){
    cout << "baik";
  } else if (ipk >= 2.00){
    cout << "cukup";}
    else {cout << "tidak berpendidikan";}
  }}}
