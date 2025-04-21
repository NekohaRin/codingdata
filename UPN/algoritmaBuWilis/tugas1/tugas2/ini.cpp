#include <iostream>
using namespace std;
main() {
    system("cls");
    char nim;
    string nama;
    int sem,sks,sksm,skse;
    double ipk,sksd,maxd;
    cout << "Masukkan NIM\t\t\t\t\t:";
    cin>>nim;
    cout << "Masukkan Nama\t\t\t\t\t:";
    cin >> nama;
    cin.ignore();
    getline(cin, nama);
    cout << "Masukkan total SKS\t\t\t\t:";
    cin>>sks;
    cout << "Masukkan IPK\t\t\t\t\t:"; 
    cin>>ipk;
    cout << "Masukkan jumlah SKS mka pilihan\t\t\t:"; 
    cin>>sksm;
    cout << "Masukkan jumlah SKS nilai D\t\t\t:"; 
    cin>>sksd;
    cout << "Masukkan jumlah SKS nilai E\t\t\t:"; 
    cin>>skse;
    cout << "Masukkan jumlah semester yang ditempuh \t\t:"; 
    cin>>sem;
    maxd = 0.25 * sks;
    if(ipk >= 2.25 && sks >= 144 && sksm >= 15 && sksd <= maxd && skse == 0){
        cout << "SELAMAT ANDA DINYATAKAN LULUS" << endl;
        if(ipk >= 3.51 && sem <= 8){
            cout << "Selamat anda juga mendapatkan gelar CUMLAUDE" << endl;
        } else if (3.01 <= ipk <= 3.50 || ipk >= 3.51 && sem > 8 ) {
            cout << "Very Satisfactory" << endl;
        } else if (2.76 <= ipk <= 3.00) {
            cout << "Satisfactory" << endl;
        }
    } else {
        cout << "Maaf anda belum lulus" << endl;
    }
}