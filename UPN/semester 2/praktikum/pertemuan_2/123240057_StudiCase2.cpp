#include <iostream>
using namespace std;

int sumArray(int array[], int n){
    if (n == 0)return 0;
    else return array[n-1] + sumArray(array, n - 1);
    
}

int main(){
    int n;
    cout << "Masukan banyak element: "; cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cout << "Masukkan element ke-" << i << " : "; cin >> arr[i];
    }

    cout << "Total elemen Array : " << sumArray(arr, n) << endl;
}