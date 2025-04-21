#include <iostream>
using namespace std;
int main() {
    float celcius, reamur, fahrenheit, kelvin; // Declare var menggunakan float

    cout << "Masukkan suhu dalam celcius : ";
    cin >> celcius; // Input suhu dalam celcius by user
    fahrenheit = celcius * 9/5 + 32; // Convert suhu ke fahrenheit
    kelvin = celcius + 273; // Convert suhu ke kelvin
    reamur = celcius * 5/4 + 32; // Convert suhu ke reamur

    // Menampilkan hasil
    cout << "suhu celcius \t\t: " << celcius;
    cout << "\nsuhu fahrenhei \t\t: " << fahrenheit;
    cout << "\nsuhu kelvin \t\t: " << kelvin;
    cout << "\nsuhu reamur \t\t: " << reamur;
}