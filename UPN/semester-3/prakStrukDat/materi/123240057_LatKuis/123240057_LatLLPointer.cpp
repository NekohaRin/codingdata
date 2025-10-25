#include <iostream>
#include <iomanip>
using namespace std;

struct Node {
    string nim, nama;
    float tugas, kuis, responsi, nilaiAkhir;
    Node* next;
};

Node *head = NULL, *tail = NULL;

float hitungNilai(float tugas, float kuis, float responsi) {
    return 0.2*tugas + 0.45*kuis + 0.35*responsi;
}

bool cekNIM(string nim) {
    Node* temp = head;
    while(temp != NULL) {
        if(temp->nim == nim) return true;
        temp = temp->next;
    }
    return false;
}

void inputData() {
    string nim, nama;
    float tugas, kuis, responsi;
    cout << "Masukkan NIM : "; cin >> nim;
    if(cekNIM(nim)) {
        cout << "NIM tidak bisa digunakan!" << endl;
        return;
    }
    cout << "Masukkan Nama : "; cin.ignore(); getline(cin, nama);
    cout << "Masukkan Nilai Tugas : "; cin >> tugas;
    cout << "Masukkan Nilai Kuis  : "; cin >> kuis;
    cout << "Masukkan Nilai Responsi : "; cin >> responsi;

    Node* newNode = new Node;
    newNode->nim = nim;
    newNode->nama = nama;
    newNode->tugas = tugas;
    newNode->kuis = kuis;
    newNode->responsi = responsi;
    newNode->nilaiAkhir = hitungNilai(tugas, kuis, responsi);
    newNode->next = NULL;

    if(head == NULL) {
        head = tail = newNode;
    } else if(newNode->nilaiAkhir > head->nilaiAkhir) {
        newNode->next = head;
        head = newNode;
    } else if(newNode->nilaiAkhir <= tail->nilaiAkhir) {
        tail->next = newNode;
        tail = newNode;
    } else {
        Node* temp = head;
        while(temp->next != NULL && newNode->nilaiAkhir <= temp->next->nilaiAkhir) {
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }
    cout << "Data berhasil ditambahkan!" << endl;
}

void tampilData() {
    if(head == NULL) {
        cout << "Data kosong!" << endl; return;
    }
    cout << left << setw(15) << "NIM" << setw(20) << "Nama" << "Nilai Akhir\n";
    cout << "--------------------------------------------\n";
    Node* temp = head; int rank=1;
    while(temp != NULL) {
        cout << rank++ << ". " << setw(15) << temp->nim 
             << setw(20) << temp->nama 
             << fixed << setprecision(2) << temp->nilaiAkhir << endl;
        temp = temp->next;
    }
}

void hapusData(string nama) {
    if(head == NULL) { cout << "Data kosong!" << endl; return; }
    Node *temp = head, *hapus = NULL;

    if(head->nama == nama) {
        hapus = head;
        head = head->next;
        delete hapus;
        if(head == NULL) tail = NULL; 
        cout << "Data berhasil dihapus!\n"; return;
    }
    while(temp->next != NULL && temp->next->nama != nama) {
        temp = temp->next;
    }
    if(temp->next == NULL) {
        cout << "Mahasiswa dengan Nama " << nama << " tidak ditemukan!" << endl;
    } else {
        hapus = temp->next;
        temp->next = hapus->next;
        if(hapus == tail) tail = temp;
        delete hapus;
        cout << "Data berhasil dihapus!\n";
    }
}

void cariData(string nim) {
    if(head == NULL) { cout << "Data kosong!" << endl; return; }
    Node* temp = head;
    while(temp != NULL && temp->nim != nim) {
        temp = temp->next;
    }
    if(temp == NULL) {
        cout << "Mahasiswa dengan NIM " << nim << " tidak ditemukan!" << endl;
    } else {
        cout << "Data ditemukan: " << temp->nim << " - " << temp->nama 
             << " (Nilai Akhir: " << temp->nilaiAkhir << ")\n";
    }
}

int main() {
    int pilihan;
    string nama, nim;
    do {
        cout << "\n=== PROGRAM PERANKINGAN MAHASISWA ===\n";
        cout << "1. Input Data\n2. Tampilkan Data\n3. Hapus Data\n4. Cari Data\n5. Keluar\nPilihan: ";
        cin >> pilihan;
        switch(pilihan) {
            case 1: inputData(); break;
            case 2: tampilData(); break;
            case 3: cout << "Masukkan Nama yang akan dihapus: "; cin.ignore(); getline(cin,nama); hapusData(nama); break;
            case 4: cout << "Masukkan NIM yang dicari: "; cin >> nim; cariData(nim); break;
            case 5: cout << "Keluar...\n"; break;
            default: cout << "Pilihan tidak valid!\n";
        }
    } while(pilihan != 5);
    return 0;
}
