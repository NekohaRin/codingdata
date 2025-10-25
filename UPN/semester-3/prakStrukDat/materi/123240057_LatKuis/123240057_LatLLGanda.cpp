#include <iostream>
#include <iomanip>
using namespace std;

struct Node {
    string nim, nama;
    float tugas, kuis, responsi, nilaiAkhir;
    Node *next, *prev;
};

Node *head=NULL, *tail=NULL;

float hitungNilai(float t, float k, float r) {
    return 0.2*t + 0.45*k + 0.35*r;
}

bool cekNIM(string nim) {
    Node* temp=head;
    while(temp != NULL) {
        if(temp->nim==nim) return true;
        temp=temp->next;
    }
    return false;
}

void inputData() {
    string nim,nama; float t,k,r;
    cout << "Masukkan NIM: "; cin >> nim;
    if(cekNIM(nim)) { cout << "NIM tidak bisa digunakan!\n"; return; }
    cout << "Masukkan Nama: "; cin.ignore(); getline(cin,nama);
    cout << "Masukkan Nilai Tugas: "; cin >> t;
    cout << "Masukkan Nilai Kuis : "; cin >> k;
    cout << "Masukkan Nilai Responsi: "; cin >> r;

    Node* newNode = new Node;
    newNode->nim=nim; newNode->nama=nama;
    newNode->tugas=t; newNode->kuis=k; newNode->responsi=r;
    newNode->nilaiAkhir=hitungNilai(t,k,r);
    newNode->next=newNode->prev=NULL;

    if(head==NULL) {
        head=tail=newNode;
    } else if(newNode->nilaiAkhir > head->nilaiAkhir) {
        newNode->next=head;
        head->prev=newNode;
        head=newNode;
    } else if(newNode->nilaiAkhir <= tail->nilaiAkhir) {
        tail->next=newNode;
        newNode->prev=tail;
        tail=newNode;
    } else {
        Node* temp=head;
        while(temp->next!=NULL && newNode->nilaiAkhir <= temp->next->nilaiAkhir) {
            temp=temp->next;
        }
        newNode->next=temp->next;
        newNode->prev=temp;
        temp->next->prev=newNode;
        temp->next=newNode;
    }
    cout << "Data berhasil ditambahkan!\n";
}

void tampilData() {
    if(head==NULL) { cout << "Data kosong!\n"; return; }
    cout << left << setw(15) << "NIM" << setw(20) << "Nama" << "Nilai Akhir\n";
    cout << "--------------------------------------------\n";
    Node* temp=head; int rank=1;
    while(temp!=NULL) {
        cout << rank++ << ". " << setw(15) << temp->nim
             << setw(20) << temp->nama
             << fixed << setprecision(2) << temp->nilaiAkhir << endl;
        temp=temp->next;
    }
}

void hapusData(string nama) {
    if(head==NULL) { cout << "Data kosong!\n"; return; }
    Node* temp=head;
    while(temp!=NULL && temp->nama!=nama) {
        temp=temp->next;
    }
    if(temp==NULL) {
        cout << "Mahasiswa dengan Nama " << nama << " tidak ditemukan!\n";
    } else {
        if(temp==head) {
            head=head->next;
            if(head!=NULL) head->prev=NULL;
            else tail=NULL;
        } else if(temp==tail) {
            tail=tail->prev;
            if(tail!=NULL) tail->next=NULL;
            else head=NULL;
        } else {
            temp->prev->next=temp->next;
            temp->next->prev=temp->prev;
        }
        delete temp;
        cout << "Data berhasil dihapus!\n";
    }
}

void cariData(string nim) {
    Node* temp=head;
    while(temp!=NULL && temp->nim!=nim) {
        temp=temp->next;
    }
    if(temp==NULL) cout << "Mahasiswa dengan NIM " << nim << " tidak ditemukan!\n";
    else cout << "Data ditemukan: " << temp->nim << " - " << temp->nama
              << " (Nilai Akhir: " << temp->nilaiAkhir << ")\n";
}

int main() {
    int pilihan; string nama,nim;
    do {
        cout << "\n=== MENU LL GANDA ===\n";
        cout << "1. Input Data\n2. Tampilkan Data\n3. Hapus Data\n4. Cari Data\n5. Keluar\nPilihan: ";
        cin >> pilihan;
        switch(pilihan) {
            case 1: inputData(); break;
            case 2: tampilData(); break;
            case 3: cout << "Masukkan Nama yang dihapus: "; cin.ignore(); getline(cin,nama); hapusData(nama); break;
            case 4: cout << "Masukkan NIM dicari: "; cin >> nim; cariData(nim); break;
            case 5: cout << "Keluar...\n"; break;
            default: cout << "Pilihan tidak valid!\n";
        }
    } while(pilihan!=5);
    return 0;
}
