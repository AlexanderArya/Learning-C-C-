#include <stdio.h>
#include <stdlib.h>

int main()
{

    // Segitiga Kiri Atas
    for(int k=0;k< 5;k++){
        for(int l=k;l<5-1;l++){
            printf(" ");
        }
        for(int p=0;p<=k;p++){
            printf("*");
        }
        printf("\n");
    }

    printf("\n");

    // Segitiga Kiri Bawah    
    for (int a=1;a<=5;a++) {
        for (int b=1; b<a;b++){
           printf(" ");
        }
        for (int c = 5; c >= a; c--) {
            printf("*");
            }
        printf("\n");
    }

    printf("\n");

    // Segitiga Kanan Atas
    for(int a=1;a<=5;a++){
        for(int b=1; b<=a;b++){
            printf("*");
        }
        printf("\n");
    }

    printf("\n");

    // Segitiga Kanan Bawah
    for(int a=1;a<=5;a++){
        for(int b=a;b<=5;b++){
            printf("*");
        }
        printf("\n");
    }


    return 0;
}
