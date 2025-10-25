#include <iostream>
using namespace std;

int main (){
    int tb = 198;
    int *lTb = &tb;
    int **xlTb = &lTb;

    cout << &tb << endl;
    cout << &lTb << endl;
    cout << *lTb << endl;
    cout << &xlTb << endl;
    cout << *xlTb << endl;
    cout << **xlTb << endl;

    string somet[] = {"hebat", "berat", "kuat"};
    string *gg = somet;

    cout << *(gg + 0);

    
}