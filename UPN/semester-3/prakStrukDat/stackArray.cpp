#include <iostream>
using namespace std;

#define Max 50
#define true 1
#define false 0

int stack[Max], top = 0;

void createStack() {
    stack[top] = 0;
}

int checkStackSpace() {
    if (top == 0) {
        return true;
    } else return false;
}

// bool checkStackSpace() {
//     return top == 0;
// } alternative simple

int stackFull() {
    if(top == Max - 1)
    return (true);
    else return (false);
}

void push(int IB) {
    if(stackFull()) {
        cout << "fulll\n";
    } else {
        top++;
        stack[top] = IB;
        stack[0] = top;
    }
}

void pop() {
    int IP;
    if(checkStackSpace()) {
        cout << "kosong\n";
    } else {
        IP = stack[top];
        top--;
        stack[0];
        cout << "nilai yang di pop = " << IP << endl;
    }
}

void cetakStack() {
    cout << "Stack : " << endl;
    if(checkStackSpace()) {
        cout << "kosong\n";
    } else {
        int i = top;
        while (i > 0)
        {
            cout << stack[i] << endl;
            i--;
        }
        
    }

}

int main () {
    createStack();
    cetakStack();
    push(23);
    push(34);
    push(91);
    push(11);
    cetakStack();
    pop();
    cetakStack();
}