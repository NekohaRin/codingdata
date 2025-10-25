#include <bits/stdc++.h>
using namespace std;

struct node
{
    int info;
    node *next;
    node *prev;
};

node *top, *bottom, *NB, *hapus, *bantu;

void buatStack() {
    top = NULL;
    bottom = NULL;
}

bool stackKosong() {
    return top == NULL;
}

void push(int IB){ 
    NB = new node();
    NB->info = IB;
    NB->next = NULL;
    NB->prev = NULL;

    if(stackKosong()) {
        top = NB;
        bottom = NB;

    } else {
        top->next = NB;
        NB ->prev = top;
        top = NB;
    }
}

void pop() {
    if(stackKosong()) {
        cout << "Kosong\n";
    } else {
        hapus = top;

        if(top == bottom) {
            top = NULL;
            bottom = NULL; 
        } else {
            top = top->prev;
            top->next = NULL;
        }
        delete hapus;
    }
}

void cetakStack() {
    cout << "Stack : " << endl;
    if(stackKosong()) {
        cout << "kosong\n";
    } else {
        bantu = top;
        while (bantu != 0)
        {
            cout << bantu->info <<endl;
            bantu -> prev = bantu;
        }
        bantu--; 
    }

}

int main () {
    buatStack();
    cetakStack();
    push(23);
    push(34);
    push(91);
    push(11);
    cetakStack();
    pop();
    cetakStack();
}