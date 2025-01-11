#include <stdio.h>

int main() {
    int cuaca, suhu, kelembaban, angin;
    char *bermain;

    printf("Ramalan Cuaca:\n");
    printf("1. Cerah\n");
    printf("2. Mendung\n");
    printf("3. Hujan\n");
    printf("Pilih cuaca (1/2/3): ");
    scanf("%d", &cuaca);

    printf("Suhu:\n");
    printf("1. Panas\n");
    printf("2. Sejuk\n");
    printf("3. Dingin\n");
    printf("Pilih suhu (1/2/3): ");
    scanf("%d", &suhu);

    printf("Kelembaban:\n");
    printf("1. Tinggi\n");
    printf("2. Normal\n");
    printf("Pilih kelembaban (1/2): ");
    scanf("%d", &kelembaban);

    printf("Angin:\n");
    printf("1. Kuat\n");
    printf("2. Lemah\n");
    printf("Pilih angin (1/2): ");
    scanf("%d", &angin);

    if (cuaca == 1 && kelembaban == 1) {
        bermain = "Tidak";
    } else if (cuaca == 1 && kelembaban == 2) {
        bermain = "Ya";
    } else if (cuaca == 2) {
        bermain = "Ya";
    } else if (cuaca == 3 && angin == 1) {
        bermain = "Tidak";
    } else if (cuaca == 3 && angin == 2) {
        bermain = "Ya";
    }

    printf("Kesimpulan dari proses decision tree: Bermain Tenis = %s\n", bermain);

    return 0;
}
