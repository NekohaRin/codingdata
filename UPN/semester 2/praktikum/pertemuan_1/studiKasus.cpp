#include <iostream>
using namespace std;

int main() {
    struct mahasiswa
    {
        /* data */
        int algo;
        int jarkom;
        int basdat;
    };
    float mean[3] = {0};
    mahasiswa mhs[5];

    for (int i = 0; i < 5; i++){
        cout << "Masukkan nilai ke-" << i+1 << " : \n";
        cout << "algo: "; cin >> mhs[i].algo;
        cout << "basdat : "; cin >> mhs[i].basdat;
        cout << "jarkom : "; cin >> mhs[i].jarkom;
    }
    
    for (int i = 0; i < 5; i++) {
        cout << "data ke-" << i+1 << " : \n";
        cout << "algo : " << mhs[i].algo << endl;
        cout << "basdat : " << mhs[i].basdat << endl;
        cout << "jarkom : " << mhs[i].jarkom << endl;
        int rata;
        rata = (mhs[i].algo + mhs[i].basdat + mhs[i].jarkom)/3;
        cout << "rata rata dari ketiga nilai adalah : " << rata << endl;
    }

    for(int i=0; i < 5; i++){
        mean[0] += mhs[i].algo;
        mean[1] += mhs[i].basdat;
        mean[2] += mhs[i].jarkom;
    }
    for(int i = 0; i < 3; i++){
        mean[i] = mean[i] /5; 
    }

    cout << "Rerata algo : " << mean[0] << endl;
    cout << "Rerata basdat : " << mean[1] << endl;
    cout << "Rerata jarkom : " << mean[2] << endl;
}