#include <iostream>
#include <string>
using namespace std;

#define MAX 5

string stack[MAX];
int top = -1;

void push(string name) {
    if (top == MAX - 1) { cout << "Riwayat penuh!\n"; return; }
    stack[++top] = name;
    cout << name << " masuk riwayat.\n";
}

void pop() {
    if (top == -1) { cout << "Riwayat kosong!\n"; return; }
    cout << stack[top--] << " dihapus dari riwayat.\n";
}

void tampil() {
    if (top == -1) { cout << "Riwayat kosong!\n"; return; }
    cout << "\n=== Riwayat ===\n";
    for (int i = top; i >= 0; i--)
        cout << "[" << top - i + 1 << "] " << stack[i] << "\n";
}

int main() {
    int pilihan;
    string nama;

    do {
        cout << "\n1. Tambah  2. Hapus  3. Lihat  0. Keluar\n";
        cout << "Pilihan: ";
        cin >> pilihan;

        if (pilihan == 1) { cout << "Nama: "; cin >> nama; push(nama); }
        else if (pilihan == 2) pop();
        else if (pilihan == 3) tampil();
    } while (pilihan != 0);

    return 0;
}