#include <stdio.h>
#include <stdlib.h>

void main()
{
    int tinggi,ulang;

    //Awalan
    for(int awal=0;awal<=32;awal++){
        printf("=");
    }
    printf("\n");

    printf("=\tSegitiga Berundak\t=\n");

    for(int awal=0;awal<=32;awal++){
        printf("=");
    }
    printf("\n");

    //Segitiga
    printf("Masukan Tinggi Segitiga:");
    scanf("%i", &tinggi);
    printf("\n");

    int i;

    for(int h=tinggi;h>0;h--){
        tinggi--;
        printf("\n");
        for(i=0; i <=tinggi;i++){
            for(int j=tinggi;j>=i;j--){
            printf(" ");
        }
        for(int k=0;k<=i;k++){
            printf("*");
                }
            printf("\n");
            }
        }

    }








