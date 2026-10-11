#include <stdio.h>

int main() {
    float a, b, i, j, x, y, hasil;

    // Input nilai secara berurutan dipisah spasi
    scanf("%f %f %f %f %f %f", &a, &b, &i, &j, &x, &y);

    // Proses perhitungan rumus dengan tanda kurung
    hasil = (a - b) * i / j - (x + y);

    // Output dengan format 3 angka di belakang koma
    printf("%.3f\n", hasil);

    return 0;
}