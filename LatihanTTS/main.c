#include <stdio.h>
#include <stdlib.h>

void bintang1(){
printf("  *  \n");
}

void bintang2(){
printf(" **  \n");
}

void bintang3(){
printf(" *** \n");
}

void bintang4(){
printf(" ****\n");

}

void bintang5(){
printf("*****\n");
}

void main()
{
/*
bintang1();
bintang2();
bintang3();
bintang4();
bintang5();
*/
/*
for(int i = 0;i < 5; i++){
    for(int j = i; j < 5;j++){
     printf(" * ");
    }
    printf("\n");
}
printf("\n");

for(int k = 0;k <= 5;k++){
    for(int l = 0;l <k;l++){
        printf(" * ");
    }
    printf("\n");
}
printf("\n");


for(int k = 0;k <= 5;k++){
    for(int l = 0;l <k;l++){
        printf(" * ");
    }
  for(int m = 5; m <= k ; m++ ){
    printf(" * ");
  }
  printf("\n");
}
*/
int umur;

printf("Masukan umur anda: ");
scanf("%d", &umur );

printf("Umur anda adalah %d\n", umur);

if(umur > 60){
    printf("Tua");
}else if(umur >= 40){
    printf("Paruh Baya");
}else if(umur >= 17 ){
    printf("Pemuda");
}else if(umur >= 5){
    printf("Remaja");
}else {
    printf("Balita");
}

}
