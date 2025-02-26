# OddAndEvenTubeSort

Proyek ini adalah program C sederhana yang membaca angka unik dari input pengguna, mengkategorikannya ke dalam dua array berdasarkan apakah mereka genap atau ganjil, dan kemudian mencetak array yang telah diurutkan beserta jumlahnya.

### Tangkapan Layar

![Tangkapan Layar Pertanyaan](screenshots/soal.png

## Memulai

### Prasyarat

- Kompiler GCC

### Instalasi

1. Clone repositori:
    ```sh
    git clone https://github.com/TudeOrangBiasa/.git
    ```
2. Masuk ke direktori proyek:
    ```sh
    cd odd-and-even-tube-sort
    ```

### Penggunaan

1. Kompilasi program:
    ```sh
    gcc -o main src/main.c
    ```
2. Jalankan program:
    ```sh
    ./main
    ```

### Contoh

Saat Anda menjalankan program, Anda akan diminta untuk memasukkan angka unik antara 1 dan 100. Program akan mengkategorikan mereka ke dalam dua array (satu untuk angka genap dan satu untuk angka ganjil), mengurutkannya dalam urutan menurun, dan mencetak array beserta jumlahnya.

```sh
CTRL+D untuk berhenti (linux) 
CTRL+Z untuk berhenti (windows) 
Masukkan angka unik (1-100): 12 45 78 23 56 89 34 67 90 21
Tabung 1: 89 67 45 23 21 
Tabung 2: 90 78 56 34 12 
Total tabung 1: 245
Total tabung 2: 270
```
