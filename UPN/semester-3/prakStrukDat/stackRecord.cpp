#include <iostream>
using namespace std;

#define Max 50
#define true 1
#define false 0

struct data_stack
{
    char element[Max];int top = 0;
};

data_stack stack;

void createStack() {
    stack.top = -1;
}

int checkStackSpace() {
    if (stack.top == -1) {
        return true;
    } else return false;
}

// bool checkStackSpace() {
//     return top == 0;
// } alternative simple

int stackFull() {
    if(stack.top == Max - 1)
    return (true);
    else return (false);
}

void push(char IB) {
    if(stackFull()) {
        cout << "fulll\n";
    } else {
        stack.top++;
        stack.element[stack.top] = IB;
    }
}

void pop() {
    char IP;
    if(checkStackSpace()) {
        cout << "kosong\n";
    } else {
        IP = stack.element[stack.top];
        stack.top--;
        cout << "nilai yang di pop = " << IP << endl;
    }
}

void cetakStack() {
    cout << "Stack : " << endl;
    if(checkStackSpace()) {
        cout << "kosong\n";
    } else {
        int i = stack.top;
        while (i >= 0)
        {
            cout << stack.element[i] << endl;
            i--;
        }
        
    }

}

int main () {
    createStack();
    cetakStack();
    push('A');
    push('B');
    push('C');
    push('D');
    cetakStack();
    pop();
    cetakStack();
}