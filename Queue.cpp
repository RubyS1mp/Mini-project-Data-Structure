#include <iostream>
#include <string>
using namespace std;
//  maksimum antrian
#define MAX 5

// Array untuk menyimpan antrian
// front = posisi orang yang akan dilayani berikutnya
// rear  = posisi kosong untuk orang yang baru masuk
string queue[MAX];
int front = 0, rear = 0;

// Menambah orang ke belakang antrian (seperti antri di kasir)
void enqueue(string name) {
    if (rear == MAX) { cout << "Antrian penuh!\n"; return; }
    queue[rear++] = name;
    cout << name << " masuk antrian.\n";
}

// Melayani dan mengeluarkan orang dari depan antrian ((FIFO)  yang duluan masuk, dilayani duluan)
void dequeue() {
    if (front == rear) { cout << "Antrian kosong!\n"; return; }
    cout << queue[front++] << " selesai dilayani.\n";
}

// Menampilkan semua orang yang sedang mengantri, dari depan ke belakang
void tampil() {
    if (front == rear) { cout << "Antrian kosong!\n"; return; }
    cout << "\n=== Antrian ===\n";
    for (int i = front; i < rear; i++)
        cout << "[" << i - front + 1 << "] " << queue[i] << "\n";
}

int main() {
    int pilihan;
    string nama;

    do {
        cout << "\n1. Tambah  2. Layani  3. Lihat  0. Keluar\n";
        cout << "Pilihan: ";
        cin >> pilihan;

        if (pilihan == 1) { cout << "Nama: "; cin >> nama; enqueue(nama); }
        else if (pilihan == 2) dequeue();
        else if (pilihan == 3) tampil();
    } while (pilihan != 0);

    return 0;
}
