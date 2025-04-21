#include <iostream>  // Memanggil library
#include <iomanip>

using namespace std;
int main()
{ 
char plug, nim[10];
string nama;
cout << "Masukkan nama Anda \t: ";
getline(cin, nama);       // Memasukkan data yang diinput user kedalam variabel nama
cout << "Masukkan nim Anda \t: ";
cin >> nim;    // Memasukkan data yang diinput user kedalam variabel nim          
cin.ignore();          // mengabaikan enter sebelum getline 
cout << "Masukkan plug anda \t: ";
cin >> plug;  // Memasukkan data yang diinput user kedalam variabel plug

cout << "\n Berikut data yang anda masukkan :\n";
cout << "Nama \t= " << nama << endl;
cout << "NIM \t= " << nim << endl;
cout << "Plug \t= " << plug << endl;

    // Output data dalam bentuk tabel
    cout << "\nDalam bentuk tabel : ";
    cout << "\n===========================================================\n";
    cout << left << setw(20) << "Nama \t\t" 
         << setw(20) << "NIM" 
         << setw(30) << "Plug" << endl;
    cout << "===========================================================\n";
    cout << left << setw(26) << nama
         << setw(25) << nim 
         << setw(30) << plug << endl;
    cout << "===========================================================\n";
return 0;
}
