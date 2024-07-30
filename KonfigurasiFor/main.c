#include <stdio.h>
#include <stdlib.h>

int main()
{
  //buat konfigurasi kotak bintang
    //******
    //*    *
    //*    *
    //*    *
    //******

    //CODE

    int panjang, lebar;

    printf(" [Pembuatan Kotak dengan Perulangan] \n\n");

    printf("Masukan Panjang Kotak :");
    scanf("%d", &panjang);
    printf("Masukan Lebar Kotak :");
    scanf("%d", &lebar);

    for(int i = 1;i <= lebar; i++){

        if(i == 1 || i == lebar){
            for(int j = 1; j <= panjang; j++){
                printf("*");
            }
        }else{

        for(int k = 1;k <= panjang; k++){
            if(k == 1 || k == panjang){
                printf("*");
                }
        else{
                printf(" ");
                }
            }
        }
    printf("\n");
    }


      return 0;
}
