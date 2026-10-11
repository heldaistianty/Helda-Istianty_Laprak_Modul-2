#include <stdio.h>

int main() {
    float nilai1, nilai2, hasil;

    // Input
    printf("Masukkan Nilai Pertama : ");
    scanf("%f", &nilai1);
    printf("Masukkan Nilai Kedua   : ");
    scanf("%f", &nilai2);

    // Proses penjumlahan
    hasil = nilai1 + nilai2;

    // Output (%g untuk mencetak angka tanpa nol di belakang koma, %.2f untuk 2 angka di belakang koma)
    printf("\nHasil dari penjumlahan nilai pertama \"%g\" dan nilai kedua \"%g\" adalah \"%.2f\"\n", nilai1, nilai2, hasil);

    return 0;
}