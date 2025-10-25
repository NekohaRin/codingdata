#include <iostream>
#include <iomanip>
using namespace std;

struct Node {
    string nim, nama;
    float tugas, kuis, responsi, nilaiAkhir;
    Node* next;
};

Node *head, *tail;

float hitungNilai(float t, float k, float r) {
    return 0.2*t + 0.45*k + 0.35*r;
}

void listKosong() {
    head = new Node;
    tail = new Node;
    head->nilaiAkhir = 9999; // sentinel head
    tail->nilaiAkhir = -9999; // sentinel tail
    head->next = tail;
    tail->next = NULL;
}

bool cekNIM(string nim) {
    Node* temp = head->next;
    while(temp != tail) {
        if(temp->nim == nim) return true;
        temp = temp->next;
    }
    return false;
}

void inputData() {
    string nim, nama;
    float t,k,r;
    cout << "Masukkan NIM: "; cin >> nim;
    if(cekNIM(nim)) { cout << "NIM tidak bisa digunakan!\n"; return; }
    cout << "Masukkan Nama: "; cin.ignore(); getline(cin, nama);
    cout << "Masukkan Nilai Tugas: "; cin >> t;
    cout << "Masukkan Nilai Kuis : "; cin >> k;
    cout << "Masukkan Nilai Responsi: "; cin >> r;

    Node* newNode = new Node;
    newNode->nim = nim; newNode->nama = nama;
    newNode->tugas = t; newNode->kuis = k; newNode->responsi = r;
    newNode->nilaiAkhir = hitungNilai(t,k,r);

    Node* temp = head;
    while(temp->next != tail && newNode->nilaiAkhir <= temp->next->nilaiAkhir) {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
    cout << "Data berhasil ditambahkan!\n";
}

void tampilData() {
    if(head->next == tail) { cout << "Data kosong!\n"; return; }
    cout << left << setw(15) << "NIM" << setw(20) << "Nama" << "Nilai Akhir\n";
    cout << "--------------------------------------------\n";
    Node* temp = head->next; int rank=1;
    while(temp != tail) {
        cout << rank++ << ". " << setw(15) << temp->nim 
             << setw(20) << temp->nama 
             << fixed << setprecision(2) << temp->nilaiAkhir << endl;
        temp = temp->next;
    }
}

void hapusData(string nama) {
    if(head->next == tail) { cout << "Data kosong!\n"; return; }
    Node* temp = head;
    while(temp->next != tail && temp->next->nama != nama) {
        temp = temp->next;
    }
    if(temp->next == tail) {
        cout << "Mahasiswa dengan Nama " << nama << " tidak ditemukan!\n";
    } else {
        Node* hapus = temp->next;
        temp->next = hapus->next;
        delete hapus;
        cout << "Data berhasil dihapus!\n";
    }
}

void cariData(string nim) {
    Node* temp = head->next;
    while(temp != tail && temp->nim != nim) {
        temp = temp->next;
    }
    if(temp == tail) cout << "Mahasiswa dengan NIM " << nim << " tidak ditemukan!\n";
    else cout << "Data ditemukan: " << temp->nim << " - " << temp->nama 
              << " (Nilai Akhir: " << temp->nilaiAkhir << ")\n";
}

int main() {
    listKosong();
    int pilihan; string nama,nim;
    do {
        cout << "\n=== MENU LL KEPALA EKOR ===\n";
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
    } while(pilihan != 5);
    return 0;
}
