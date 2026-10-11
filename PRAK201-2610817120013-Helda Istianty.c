#include <stdio.h>

int main() {
    char nama[100], nim[30], kelas[10], ttl[100], alamat[200], hobby[100], no_hp[30];

    printf("Nama                  : ");
    gets(nama);
    printf("NIM                   : ");
    gets(nim);
    printf("Kelas Paralel         : ");
    gets(kelas);
    printf("Tempat/Tanggal Lahir  : ");
    gets(ttl);
    printf("Alamat                : ");
    gets(alamat);
    printf("Hobby                 : ");
    gets(hobby);
    printf("No. HP                : ");
    gets(no_hp);

    printf("\nOutput\n");
    printf("Nama                  : %s\n", nama);
    printf("NIM                   : %s\n", nim);
    printf("Kelas Paralel         : %s\n", kelas);
    printf("Tempat/Tanggal Lahir  : %s\n", ttl);
    printf("Alamat                : %s\n", alamat);
    printf("Hobby                 : %s\n", hobby);
    printf("No. HP                : %s\n", no_hp);

    return 0;
}