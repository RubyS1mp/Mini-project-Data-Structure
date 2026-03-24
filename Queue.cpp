#include <iostream>
#include <string>
using namespace std;

#define MAX 5

string queue[MAX];
int front = 0, rear = 0;

void enqueue(string name) {
    if (rear == MAX) { cout << "Antrian penuh!\n"; return; }
    queue[rear++] = name;
    cout << name << " masuk antrian.\n";
}

void dequeue() {
    if (front == rear) { cout << "Antrian kosong!\n"; return; }
    cout << queue[front++] << " selesai dilayani.\n";
}

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