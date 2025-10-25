#include <iostream>
#include <string>
using namespace std;

// Struktur node untuk linked list antrian swalayan
struct Node {
  string nama;      // Nama pelanggan
  int jumlahBarang; // Jumlah barang belanjaan
  Node *next;       // Pointer ke node berikutnya
};

// Pointer head untuk menunjuk ke awal antrian
Node *head = NULL;

// Fungsi menambahkan pelanggan ke antrian (enqueue)
void tambahAntrian(string nama, int jumlahBarang) {
  Node *baru = new Node;             // buat node baru
  baru->nama = nama;                 // isi nama pelanggan
  baru->jumlahBarang = jumlahBarang; // isi jumlah barang
  baru->next = NULL;                 // node baru selalu di akhir

  if (head == NULL) {
    // jika antrian kosong
    head = baru;
  } else {
    // cari node terakhir
    Node *temp = head;
    while (temp->next != NULL) {
      temp = temp->next;
    }
    temp->next = baru; // sambungkan node baru di akhir
  }
  cout << nama << " masuk antrian dengan " << jumlahBarang << " barang."
       << endl;
}

// Fungsi melayani pelanggan dari antrian (dequeue)
void layaniPelanggan() {
  if (head == NULL) {
    cout << "Tidak ada pelanggan dalam antrian." << endl;
  } else {
    Node *temp = head; // ambil pelanggan terdepan
    cout << "Melayani " << temp->nama << " dengan " << temp->jumlahBarang
         << " barang." << endl;
    head = head->next; // geser ke pelanggan berikutnya
    delete temp;       // hapus pelanggan yang sudah dilayani
  }
}

// Fungsi menampilkan daftar antrian
void tampilkanAntrian() {
  if (head == NULL) {
    cout << "Antrian kosong." << endl;
  } else {
    cout << "Daftar Antrian di Kasir: " << endl;
    Node *temp = head;
    int posisi = 1;
    while (temp != NULL) {
      cout << posisi << ". " << temp->nama << " (" << temp->jumlahBarang
           << " barang)" << endl;
      temp = temp->next;
      posisi++;
    }
  }
  cout << endl;
}

// Program utama
int main() {
  // Beberapa pelanggan masuk antrian
  tambahAntrian("Andi", 5);
  tambahAntrian("Budi", 12);
  tambahAntrian("Citra", 3);
  tambahAntrian("Dewi", 8);

  cout << endl;
  tampilkanAntrian();

  // Kasir mulai melayani
  layaniPelanggan();
  tampilkanAntrian();

  layaniPelanggan();
  tampilkanAntrian();

  // Layani sampai habis
  layaniPelanggan();
  layaniPelanggan();
  layaniPelanggan(); // mencoba saat antrian kosong

  return 0;
}
