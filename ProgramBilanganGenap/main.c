#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, jumlah = 0, n = 0, jmlhblg;
    float rata = 0.0;

    printf("Masukan Bilangan (Bebas): ");
    scanf("%i", &jmlhblg);

    for (i = 1; i <= jmlhblg; i++) {
        if (i % 2 == 0) {
            printf("%d ", i);
            n = n + 1;
            jumlah = jumlah + i;
        }
    }

    if (n != 0) {
        rata = (float)jumlah / n;
    }

    printf("\nJumlah angka genap: %i", n);
    printf("\nRata-rata angka genap: %.2f", rata);

    return 0;
}
