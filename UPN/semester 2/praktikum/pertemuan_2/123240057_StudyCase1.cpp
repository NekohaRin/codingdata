#include <iostream>
#include <cmath>
using namespace std;
int a,r,hasil,n;

int deret_geometri(int a, int r, int n){
    if (n == 0) return a;
    else return deret_geometri(a, r,n-1) + a*pow(r,n);
}

int main() {
    cout << "masukkan nilai a : "; cin >> a;
    cout << "masukkan nilai r: "; cin >> r;
    cout << "masukkan nilai : "; cin >> n;
    cout << "hasil perhitungan geometri : " << deret_geometri(a,r,n);
}