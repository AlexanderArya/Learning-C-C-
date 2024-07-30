#include <stdio.h>
#include <stdlib.h>

int hitungPangkat(int x, int y) {
    if (y == 0) {
        return 1;
    } else {
        return x * hitungPangkat(x, y - 1);
    }
}

double hitungLimas(int tinggi, int alas) {
    double volume;
    volume = (1.0 / 3.0) * tinggi * (alas * alas);
    return volume;
}

double hitungKerucut(int jari, int tinggi) {
    double volumeKerucut, phi = 3.14;
    volumeKerucut = (phi * jari * jari * tinggi) / 3;
    return volumeKerucut;
}

int main() {
    // Program Pangkat
    int x, y;
    printf("===================\n");
    printf("= Program Pangkat =\n");
    printf("===================\n");

    printf("Isi angka yang akan dipangkatkan: ");
    scanf("%d", &x);
    printf("Pangkat: ");
    scanf("%d", &y);

    printf("Hasil %d Pangkat %d adalah %d\n", x, y, hitungPangkat(x, y));

    // Program Volume Limas
    int tinggi, alas;

    printf("========================\n");
    printf("= Program Volume Limas =\n");
    printf("========================\n");

    printf("Masukan Tinggi Limas: ");
    scanf("%d", &tinggi);
    printf("Masukan Alas Limas: ");
    scanf("%d", &alas);

    printf("VOLUME LIMAS: %.2f\n", hitungLimas(tinggi, alas));

    // Program Volume Kerucut
    int r;
    printf("==========================\n");
    printf("= Program Volume Kerucut =\n");
    printf("==========================\n");

    printf("Masukan jari jari: ");
    scanf("%d", &r);
    printf("Masukan tinggi: ");
    scanf("%d", &tinggi);

    printf("VOLUME KERUCUT: %.2f\n", hitungKerucut(r, tinggi));

    return 0;
}
