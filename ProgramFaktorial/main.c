#include <stdio.h>
#include <stdlib.h>

int main() {
    // Program Faktorial dengan For Loop
    int angka, hasil, i;

    printf("Input angka: ");
    scanf("%d", &angka);

    hasil = 1;
    for (i = 1; i <= angka; i++) {
        hasil = hasil * i;
    }
    printf("%d! = %d \n", angka, hasil);

    // Program Faktorial dengan While Loop
    int angka1 = 1, angka2;
    hasil = 1; // Reset hasil

    printf("Masukkan Nilai: ");
    scanf("%d", &angka2);

    while (angka1 <= angka2) {
        hasil = hasil * angka1;
        angka1++;
    }
    printf("%d! = %d \n", angka2, hasil);

    // Program Faktorial dengan Do-While Loop
    int n, a;

    printf("Masukkan data yang diinginkan: ");
    scanf("%d", &a);

    hasil = n = 1; // Reset hasil dan inisialisasi n
    do {
        hasil = hasil * n;
        n++;
    } while (n <= a);
    printf("Hasil dari %d! = %d \n", a, hasil);




    return 0;
}
