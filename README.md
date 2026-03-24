
# Mini Project Data Structure
**IUP Data Structure — Mini Project 1**

Proyek ini mengimplementasikan tiga struktur data fundamental: **Stack**, **Queue**, dan **Deque**, masing-masing dalam konteks simulasi dunia nyata menggunakan bahasa C++.

---

## Struktur Data yang Diimplementasikan

### 1. Stack — Simulasi Riwayat Kunjungan (`Stack.cpp`)
Stack menggunakan prinsip **LIFO (Last In, First Out)** — data yang terakhir masuk akan pertama keluar.

**Analogi:** Seperti tumpukan buku. Buku yang paling terakhir ditaruh di atas akan diambil lebih dulu.

**Operasi:**
- `push` — Menambah nama ke atas tumpukan riwayat
- `pop` — Menghapus riwayat paling atas (paling terakhir)
- `tampil` — Menampilkan seluruh riwayat dari yang terbaru

---

### 2. Queue — Simulasi Antrian Pelayanan (`Queue.cpp`)
Queue menggunakan prinsip **FIFO (First In, First Out)** — data yang pertama masuk akan pertama keluar.

**Analogi:** Seperti antrian di kasir. Siapa yang datang lebih dulu, dilayani lebih dulu.

**Operasi:**
- `enqueue` — Menambah orang ke belakang antrian
- `dequeue` — Melayani dan mengeluarkan orang dari depan antrian
- `tampil` — Menampilkan seluruh antrian dari depan ke belakang

---

### 3. Deque — Simulasi Antrian Prioritas (`Deque.cpp`)
Deque (**Double-Ended Queue**) memungkinkan penambahan dan penghapusan dari **kedua sisi** antrian.

**Analogi:** Seperti antrian dengan jalur VIP. Orang biasa masuk dari belakang, tapi tamu VIP bisa langsung masuk dari depan. Siapapun juga bisa membatalkan dari belakang.

**Operasi:**
- `addRear` — Masuk antrian dari belakang (antrian biasa)
- `addFront` — Masuk antrian dari depan (jalur VIP)
- `removeFront` — Melayani dari depan
- `removeRear` — Membatalkan antrian dari belakang
- `tampil` — Menampilkan seluruh antrian

---

## Cara Menjalankan

Kompilasi dan jalankan masing-masing file dengan g++:

```bash
g++ Stack.cpp -o stack && ./stack
g++ Queue.cpp -o queue && ./queue
g++ Deque.cpp -o deque && ./deque
```

---

## Teknologi
- Bahasa: **C++**
- Implementasi: Array statis dengan pointer manual (`top`, `front`, `rear`)
