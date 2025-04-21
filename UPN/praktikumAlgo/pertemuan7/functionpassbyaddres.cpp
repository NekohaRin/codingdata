#include <iostream>
using namespace std;

void tampil (int *a){
    *a=*a-3;
}

int main(){
    int value = 7;
    cout << "nilai sebelum direfrensikan: " << value << endl;
    tampil(value);
    cout << "nilai sebelum direfrensikan: " << value << endl;
}