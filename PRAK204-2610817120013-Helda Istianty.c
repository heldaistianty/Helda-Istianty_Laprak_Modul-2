#include <stdio.h>

int main() {
    float r, t, volume, luas, keliling;
    float phi = 22.0 / 7.0; // Menggunakan 22/7 agar pas dengan test case

    // Input jari-jari dan tinggi (bisa dienter satu-satu atau pakai spasi)
    scanf("%f", &r);
    scanf("%f", &t);

    volume = phi * (r * r) * t;
    luas = 2 * phi * r * (r + t);
    keliling = 2 * phi * r;

    printf("Volume = %.2f\n", volume);
    printf("Luas = %.2f\n", luas);
    printf("Keliling = %.2f\n", keliling);

    return 0;
}