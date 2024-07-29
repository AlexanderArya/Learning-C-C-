#include <stdio.h>
#include <stdlib.h>

int main()
{
int jumlah;
int angka[9999];

printf("Masukan Jumlah array:");
scanf("%d", &jumlah);

for(int i=1;i <= jumlah; i++){
    printf("Masukan ke-%d: ", i);
    scanf("%d", &angka[i]);

}

for(int j=1;j<= jumlah;j++){
    printf("%d \n", angka[j]);
}

    return 0;
}
