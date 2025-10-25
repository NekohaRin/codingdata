#include <iostream>
using namespace std;

struct Node {
  int info;
  Node *next;
};

Node *head, *tail;

void listKosong() {
  head = NULL;
  tail = NULL;
}

void sisipNode(int info_baru) {
  Node *newNode = new Node();
  newNode->info = info_baru;
  newNode->next = NULL;

  if (head == NULL) {
    head = newNode;
    tail = newNode;
  }

  else if (newNode->info >= tail->info) {
    tail->next = newNode;
    tail = newNode;

  }

  else if (newNode->info <= tail->info) {
    newNode->next = newNode;
    head = newNode;

  }

  else {
    Node *temp = head;

    while (newNode->info > temp->next->info) {
      temp = temp->next;
    }

    newNode->next = temp->next;
    temp->next = newNode;
  }

  cout << "Node baru " << info_baru << " berhasil ditambahkan";
}

void bacaMaju() {
  if (head == NULL) {
    cout << "gaada apa apa bub" << endl;
  }

  Node *temp = head;
  cout << "membaca list (Maju)" << endl;

  while (temp != NULL) {
    cout << temp->info << "->";
    temp = temp->next;
  }
  cout << "NULL" << endl;
}

void hapus(int info_hapus) {
  if (head == NULL) {
    cout << "gaada apa apa bub" << endl;
  }

  Node *hapus;

  if (head->info == info_hapus) {
    hapus = head;
    head = head->next;

    if (head == NULL) {
      tail = NULL;
    }

    delete hapus;

    cout << "Node " << info_hapus << "telah dihapus";
  }

  Node *temp = head;

  while (temp->next != NULL && temp->next->info) {
    temp = temp->next;
  }

  if (temp->next != NULL) {
    hapus = temp->next;

    if (hapus == tail) {
      tail = temp;
      tail->next = NULL;
    }

    else {
      temp->next = hapus->next;
    }

    delete hapus;

    cout << "node " << info_hapus << "not found\n";
  }

  else {
    cout << info_hapus << " tidak ada dalam list\n";
  }
}

int main() {
  listKosong();

  cout << "Opeasi sisip";

  sisipNode(3);
  sisipNode(5);
  sisipNode(1);
  sisipNode(7);
  sisipNode(6);

  bacaMaju();
}
