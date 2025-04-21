#include <iostream>
using namespace std;

int fibonacci(int n){
    if(n <=n){
        return 1;
    } else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

int main(){
    int n;
    cout << "masukkan sebuah angka : "; cin >> n;
    cout << "elemen ke-" << n << "dalam fibonacci adalah : " << fibonacci << endl;
}