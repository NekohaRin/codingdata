#include <iostream>
using namespace std;


// fungsi cek ganjil genap
bool ganjilGen(int niem) {
    return niem % 2 == 0;
}
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
//fungsi hitung nilai maksimal
int nMax(){
    int maks,nilai;
    for(int a = 1; a <= 3; a++) {
        cout << "Masukkan bilangan ke-" << a << " : "; cin >> nilai;
        if(nilai > maks ){
            maks = nilai;
        }
    }
    return maks;
}
//fungsi hitung jumlah digit
int jmlhDgt(int angka){
    int digit = 0;
    if (angka == 0){
        return 1;
    }
    while (angka != 0){
        angka = angka/10;
        digit++;
    }
    return digit;
}
//fungsi MAIN
int main(){
    int pilihan;
    do
    {
    
    cout << "Menu : \n";
    cout << "1. Masukkan NIM\n";
    cout << "2. Keluar\n";
    cout << "Masukkan pilihan : "; cin >> pilihan;
    switch (pilihan)
    {   
        case 1 :

    //cek nim
        int nim;
        cout << "masukkan nim anda : "; cin >> nim;
        if (ganjilGen(nim)){
    //jika nim genap
            cout << "nim kamu merupakan angka genap, berikut daftar menu yang kamu dapatkan : \n";
            cout << "1. hitung jumlah digit\n";
            cout << "2. menentukan nilai maksimum\n";
            cout << "3. hitung BMI\n";system("pause"); system("cls");

        //hitung jumlah digit
        cout << "1. hitung jumlah digit\n";
        int angka;
        cout << "masukkan angka : "; cin >> angka;
        int jmlh = jmlhDgt(angka);
        cout << " jumlah angka dalam " << angka << " adalah " << jmlh << endl;

        //mencari nilai terbesar
        cout << "2. menentukan nilai maksimum\n";
        int maksimum = nMax();
        cout << "Nilai maksimum yang diperoleh adalah: " << maksimum << endl;        // bmi
        cout << "3. menghitung BMI\n";
        float ber, tgg;

        cout << "masukkan berat badan (kg): ";
        cin >> ber;
        cout << "masukkan tinggi badan (m): ";
        cin >> tgg;

        // memanggil function penghitung BMI untuk mendapatkan BMI
        float bmi = beMI(ber, tgg);

        // hasil
        cout << "BMI Anda: " << bmi << endl;
        cout << "Kategori: " << masukanBMI(bmi) << endl;



        } else {
    // jika nim ganjil
            cout << "nim kamu merupakan angka ganjil, berikut menu yang kamu dapatkan : \n";
            cout << "1. tahun kabisat\n";
            cout << "2. konversi jam ke detik\n";
            cout << "3. hitung BMI\n";system("pause"); system("cls");
            
        // kabisat
        cout << "1. cek tahun kabisat/bukan\n";
        int tahun;
        cout << "masukkan sebuah tahun : "; cin >> tahun;
        if (tKabisat(tahun)) {
            cout << "tahun " << tahun << " adalah kabisat.\n";
        } else {
            cout << "tahun " << tahun << " bukan kabisat.\n";
        }


        // convert waktu - second
        cout << "2. menghitung waktu dalam bentuk detik\n";
        int jam, menit, detik;
            cout << "masukkan jam   : "; cin >> jam; 
            cout << "masukkan menit : "; cin >> menit;
            cout << "masukkan detik : "; cin >> detik;
        cout << "total waktu " << (jamToDetik(jam,menit,detik)) << endl;

        // bmi
        cout << "3. menghitung BMI\n";
        float ber, tgg;

        cout << "masukkan berat badan (kg): ";
        cin >> ber;
        cout << "masukkan tinggi badan (m): ";
        cin >> tgg;

        // memanggil function penghitung BMI untuk mendapatkan BMI
        float bmi = beMI(ber, tgg);

        // hasil
        cout << "BMI Anda: " << bmi << endl;
        cout << "Kategori: " << masukanBMI(bmi) << endl;

        }
        break;

        case 0 : 
            cout << "Keluar dari program...\n"; system("cls");
        break; 
    }
    
    } while (pilihan != 2);
        return 0;
    }
