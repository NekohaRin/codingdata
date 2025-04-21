#include <iostream>
#define PI 3.14  // Mendefinisikan nilai pi
using namespace std;

int main() {
    // Deklarasi variabel
    float jari, tinggi, volume, lPermukaan;

    // Input jari-jari dan tinggi tabung dari user
    cout << "Masukkan jari-jari tabung (dalam cm): ";
    cin >> jari;

    cout << "Masukkan tinggi tabung (dalam cm): ";
    cin >> tinggi;

    // Rumus menghitung volume tabung: V = π * r^2 * t
    volume = PI * jari * jari * tinggi;

    // Rumus menghitung luas permukaan tabung: A = 2πr(r + t)
    lPermukaan = 2 * PI * jari * (jari + tinggi);

    // Output volume dan luas permukaan tabung
    cout << "\nVolume tabung adalah: " << volume << endl;
    cout << "Luas permukaan tabung adalah: " << lPermukaan << endl;

    return 0;
}
