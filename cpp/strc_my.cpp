#include <iostream>
#include <fstream>
using namespace std;

struct jadwal
{
    string hari;
    int jam;
    string matkul;
}; jadwal schedule[10];

int main(){
int i, jumlah;
    system("clear");
    ofstream jadwal("jadwal.csv", ios::app);
    if (jadwal.is_open())
    {
    
    cout << "Berapa jumlah data yang ingin ditambahkan : "; cin >> jumlah;
    for ( i = 1; i <= jumlah; i++)
    { 
    cout << "Jam ke : "; cin >> schedule[i].jam;
    cout << "Jadwal hari : "; cin.ignore(); getline(cin >> ws, schedule[i].hari);
    cout << "Mata Kuliah : "; getline(cin >> ws, schedule[i].matkul);
    } jadwal.close();
    }else{cout << " no gagal\n";}


    for (i = 1; i<= jumlah; i++){
    cout << "----------------------------------------------------\n";
    cout << "Jadwal kuliah hari : " << schedule[i].hari << endl;
    cout << "----------------------------------------------------\n";
    cout << "Jam ke : " << schedule[i].jam << endl;
    cout << "Jadwal hari : " << schedule[i].hari << endl;
    cout << "Mata Kuliah : " << schedule[i].matkul << endl;
 
    }

}