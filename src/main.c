#include <stdio.h> 
#include <stdlib.h> 

#define MAX_SIZE 10 // Mendefinisikan konstanta untuk ukuran maksimum array

// Mendeklarasikan variabel global
int tabungFirst[MAX_SIZE], tabungSecond[MAX_SIZE], topValueFirst = 0, topValueSecond = 0;

// Fungsi untuk memeriksa apakah sebuah angka mengandung nol
int isContainsZero(int num) {
    if (num > 0) { // Memeriksa apakah angka positif
        if (num % 10 == 0) { // Memeriksa apakah digit terakhir adalah nol
            return 1; // Mengembalikan true jika ditemukan nol
        }
        num /= 10; // Menghapus digit terakhir
    }
    return 0; // Mengembalikan false jika tidak ditemukan nol
}

// Fungsi untuk mengurutkan array secara menurun
void sortDesc(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) { // Melakukan loop melalui array
        for (int j = 0; j < n - 1 - i; j++) { // Loop bersarang untuk perbandingan
            if (arr[j] < arr[j+1]) { // Membandingkan elemen yang berdekatan
                int temp = arr[j]; // Menukar jika elemen saat ini lebih kecil
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

// Fungsi untuk mencetak isi array
void printTabung(int tabung[], int topValue) {
    sortDesc(tabung, topValue); // Mengurutkan array secara menurun
    for (int i = 0; i < topValue; i++) { // Melakukan loop melalui array
        printf("%d ", tabung[i]); // Mencetak setiap elemen
    }
    printf("\n"); // Mencetak karakter newline
}

int main() {
    int num, sumFirst = 0, sumSecond = 0; // Mendeklarasikan variabel lokal

    // Mencetak instruksi untuk menghentikan input
    printf("CTRL+D untuk berhenti (linux) \n");
    printf("CTRL+Z untuk berhenti (windows) \n");
    printf("Masukkan angka unik (1-100): ");

    // Loop untuk membaca input hingga EOF
    while(scanf("%d", &num) != EOF) {
        // Memeriksa apakah angka di luar jangkauan atau mengandung nol
        if (num < 1 || num > 100 || isContainsZero(num)) {
            continue; // Melewati iterasi saat ini
        }

        // Memeriksa apakah angka genap
        if (num % 2 == 0) {
            tabungSecond[topValueSecond++] = num; // Menambahkan ke array kedua
            sumSecond += num; // Menambahkan ke jumlah array kedua
        } else {
            tabungFirst[topValueFirst++] = num; // Menambahkan ke array pertama
            sumFirst += num; // Menambahkan ke jumlah array pertama
        }

        // Memeriksa apakah ada array yang mencapai ukuran maksimum
        if (topValueFirst == MAX_SIZE || topValueSecond == MAX_SIZE) {
            break; // Keluar dari loop
        }
    }

    // Mencetak isi dan jumlah kedua array
    printf("Tabung 1: ");
    printTabung(tabungFirst, topValueFirst);
    printf("Tabung 2: ");
    printTabung(tabungSecond, topValueSecond);
    printf("Total tabung 1: %d\n", sumFirst);
    printf("Total tabung 2: %d\n", sumSecond);

    return 0; // Mengembalikan sukses
}