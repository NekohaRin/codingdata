#include <iostream>

using namespace std;

struct Node
{
    int info;
    Node* next;
};
Node *newNode, *head, *tail;

void listKosong(){
    head = new Node;
    tail = new Node;
    head->info = -9999;
    head->next = tail;
    tail->info = 9999;
    tail->next = head;
}

void sisipNode(int info_baru){
    newNode = new Node;
    newNode->info = info_baru;
    newNode->next = NULL;

    // if(head == NULL&&tail==NULL){
    //     head = newNode;
    //     tail = newNode;
    // } else if(newNode-> info < head->info){ //sisip depan sebelum head
    //     newNode->next = head;
    //     head = newNode;
    // } else if (newNode->info > tail->info){ //sisip belakang
    //     tail->next = newNode;
    //     tail = newNode;
    // } else 
    if(info_baru>head->info&&info_baru<tail->info){
        Node *temp;
        temp = head;
        while(temp != NULL && newNode->info > temp->next->info ){
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }else cout << "Nilai kurang / lebih dari batasan\n";
}

void hapusNode(int info_hapus){
    Node *hapus, *temp;
    temp = head;
    // if(head->info ==info_hapus){
    //     hapus = head;
    //     head = head->next;
    //     hapus->next = NULL;
    //     delete(hapus);
    // }else if(tail-> info == info_hapus){
    //     while(temp->next != tail){
    //         temp = temp->next;
    //     }
    //     hapus = tail;
    //     tail = temp;
    //     tail->next = NULL;
    //     delete(hapus);
    // } else {
        while(temp->next != NULL && temp->next->info != info_hapus){
            temp = temp->next;
        }
        if (temp->next==NULL){
            cout<< "Node dengan nilai "<<info_hapus<< " tidak ditemukan"<<endl;
            return;
        }
        hapus = temp->next;
        temp->next = hapus->next;
        hapus->next = NULL;
        delete(hapus);

    // }
}

void bacaMaju(){
    Node *temp;
    temp = head;
    while(temp != tail){
        cout << temp->info << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

void traversal(){
    Node *pindah, *head_simpan;
    head_simpan = head;
    head = tail;

    do {
        pindah = head_simpan;
        while(pindah->next != tail){
            pindah = pindah->next;
        }
        tail->next = pindah;
        tail = pindah;
    } while (tail != head_simpan);
    tail->next = NULL;
}


void bacaMundur(){
    traversal();
    Node *temp;
    temp = head->next;
    while (temp != tail){
        cout << temp->info << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
    traversal();
}


int main(){
    listKosong();
    sisipNode(8);
    sisipNode(4);
    sisipNode(6);
    sisipNode(2);
    sisipNode(10);
    bacaMaju();
    bacaMundur();
    hapusNode(2);
    bacaMaju();
    hapusNode(10);
    bacaMaju();
    hapusNode(6);
    hapusNode(5);
    bacaMaju();
    return 0;
}