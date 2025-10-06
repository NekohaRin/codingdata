#include <iostream>
#include <fstream>

using namespace std;

int main(){
    fstream doc("123240057.txt", ios::in | ios::out);
    // for ios app : menambahkan data baru dala file
    //     ios trunc : menimpa data lama dengan data baru(its default)

    if (doc.is_open()){
        doc << "testing";
        cout << "file berhasil dimasukkan" << endl;
        doc.close();
    } else {
        cout << "Oh nooo it's too big \n";
    }

    fstream doxi("123240057.txt", ios::out);
    string fileField;
    if (doxi.is_open()){
        while( getline(doxi, fileField)){}
        cout << fileField;
        doxi.close();

    }

    fstream locki("menamai.txt");

    return 0;
}
