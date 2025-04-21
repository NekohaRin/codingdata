#include <iostream>
using namespace std;

//fungsi cek kabisat
bool tKabisat(int thn) {
    return thn % 4 == 0;
}
//fungsi convert waktu ke detik
int jamToDetik(int h,int m,int s){
    return (h * 3600) + (m * 60) + s;
}
//fungsi untuk hitung bmi
float beMI(float bb, float tt) {
    return bb / (tt * tt);
}
string masukanBMI(float bmi) {
    if (bmi < 18.5) return "Kurus";
    else if (bmi >= 18.5 && bmi < 24.9) return "Normal";
    else if (bmi >= 25.0 && bmi < 29.9) return "Gemuk";
    else return "Obesitas";
}

//fungsi main
int main(){
    int pilihan; float bmi;
    do
    {
    cout << "Menu : \n";
    cout << "1. tahun kabisat\n";
    cout << "2. konversi jam ke detik\n";
    cout << "3. hitung BMI\n";
    cout << "4. keluar\n";
    cout << "Masukkan pilihan : "; cin >> pilihan;
    switch (pilihan)
    {
    case 1:
    // kabisat
        cout << "1. cek tahun kabisat/bukan\n";
        int tahun;
        cout << "masukkan sebuah tahun : "; cin >> tahun;
        if (tKabisat(tahun)) {
            cout << "tahun " << tahun << " adalah kabisat.\n";
        } else {
            cout << "tahun " << tahun << " bukan kabisat.\n";
        }
        break;
    case 2 :
    // convert waktu - second
        cout << "2. menghitung waktu dalam bentuk detik\n";
        int jam, menit, detik;
        cout << "masukkan jam   : "; cin >> jam; 
        cout << "masukkan menit : "; cin >> menit;
        cout << "masukkan detik : "; cin >> detik;
        cout << "total waktu " << (jamToDetik(jam,menit,detik)) << endl;
    break;
    case 3 :
    // bmi
        cout << "3. menghitung BMI\n";
        float ber, tgg;

        cout << "masukkan berat badan (kg): ";
        cin >> ber;
        cout << "masukkan tinggi badan (m): ";
        cin >> tgg;

        // memanggil function penghitung BMI untuk mendapatkan BMI
        bmi = beMI(ber, tgg);

        // hasil
        cout << "BMI Anda: " << bmi << endl;
        cout << "Kategori: " << masukanBMI(bmi) << endl;
    break;
    case 4 :
        cout << "Keluar dari program...\n"; system("cls");
    break;   
    
    }}while (pilihan != 4);
    return 0;
}