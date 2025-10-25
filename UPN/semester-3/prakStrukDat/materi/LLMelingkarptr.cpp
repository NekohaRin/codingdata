#include <iostream>

using namespace std;

struct Node
{
    int info;
    Node *next;
};
Node *newNode, *head, *tail;

void listKosong()
{
    head = NULL;
    tail = NULL;
}

void sisipNode(int info_baru)
{
    newNode = new Node;
    newNode->info = info_baru;
    newNode->next = NULL;

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        tail->next = head; // PERUBAHAN: Langsung dibuat melingkar
    }
    else if (newNode->info <= head->info)
    {
        newNode->next = head;
        head = newNode;
        tail->next = head;
    }
    else if (newNode->info >= tail->info)
    {
        tail->next = newNode;
        tail = newNode;
        tail->next = head;
    }
    else
    {
        Node *temp = head;
        while (newNode->info > temp->next->info)
        {
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }
}

void hapusNode(int info_hapus)
{
    if (head == NULL)
    {
        cout << "List kosong." << endl;
        return;
    }

    Node *hapus, *temp = head;

    if (head->info == info_hapus)
    {
        hapus = head;
        if (head == tail)
        {
            head = NULL;
            tail = NULL;
        }
        else
        {
            head = head->next;
            tail->next = head;
        }
        delete (hapus);
    }
    else
    {
        while (temp->next != head && temp->next->info != info_hapus)
        {
            temp = temp->next;
        }

        if (temp->next->info == info_hapus)
        {
            hapus = temp->next;
            if (hapus == tail)
            {
                tail = temp;
            }
            temp->next = hapus->next;
            tail->next = head;
            delete (hapus);
        }
        else
        {
            cout << "Node dengan nilai " << info_hapus << " tidak ditemukan" << endl;
        }
    }
}

void bacaMaju()
{
    Node *temp;
    temp = head;
    while (temp != tail)
    {
        cout << temp->info << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

// Fungsi traversal dan bacaMundur tetap sama, meskipun sangat tidak efisien
// dan mengubah urutan list secara permanen.
void traversal()
{
    Node *pindah, *head_simpan;
    head_simpan = head;
    head = tail;

    do
    {
        pindah = head_simpan;
        while (pindah->next != tail)
        {
            pindah = pindah->next;
        }
        tail->next = pindah;
        tail = pindah;
    } while (tail != head_simpan);
    tail->next = head;
}

void bacaMundur()
{
    traversal();
    Node *temp;
    temp = head;
    while (temp != tail)
    {
        cout << temp->info << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
    traversal();
}

int main()
{
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
    bacaMaju();
    hapusNode(5);
    bacaMaju();
    return 0;
}