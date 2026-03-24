#include <iostream>
#include <string>
using namespace std;

#define MAX 10

string deque[MAX];
int front = MAX / 2, rear = MAX / 2;

void addRear(string name) {
    if (rear == MAX) { cout << "Penuh!\n"; return; }
    deque[rear++] = name;
    cout << name << " masuk antrian belakang.\n";
}

void addFront(string name) {
    if (front == 0) { cout << "Penuh!\n"; return; }
    deque[--front] = name;
    cout << name << " masuk antrian depan (VIP).\n";
}

void removeFront() {
    if (front == rear) { cout << "Antrian kosong!\n"; return; }
    cout << deque[front++] << " dilayani dari depan.\n";
}

void removeRear() {
    if (front == rear) { cout << "Antrian kosong!\n"; return; }
    cout << deque[--rear] << " cancel dari belakang.\n";
}

void tampil() {
    if (front == rear) { cout << "Antrian kosong!\n"; return; }
    cout << "\n=== Antrian Deque ===\n";
    for (int i = front; i < rear; i++)
        cout << "[" << i - front + 1 << "] " << deque[i] << "\n";
}

int main() {
    int pilihan;
    string nama;

    do {
        cout << "\n1. Masuk biasa  2. Masuk VIP (depan)  3. Layani depan\n";
        cout << "4. Cancel belakang  5. Lihat  0. Keluar\n";
        cout << "Pilihan: ";
        cin >> pilihan;

        if (pilihan == 1) { cout << "Nama: "; cin >> nama; addRear(nama); }
        else if (pilihan == 2) { cout << "Nama: "; cin >> nama; addFront(nama); }
        else if (pilihan == 3) removeFront();
        else if (pilihan == 4) removeRear();
        else if (pilihan == 5) tampil();
    } while (pilihan != 0);

    return 0;
}