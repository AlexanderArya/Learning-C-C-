#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <windows.h>
#include <stdbool.h>


int i, x, y, z, m, banyak, pilihan, kiri=37,kanan=83,atas=12,bawah=21;
void gotoxy(int x, int y);
void SetColor(unsigned short);


void keluar(){
    kotak_kecil();
    int k;
    gotoxy(43,11);
    char oo[]="THANK  YOU  FOR  USING  OUR  PROGRAM \n\n";
    for(k=0; oo[k]!=NULL; k++){
    printf("%c",oo[k]);
    Sleep(50);
    }
    gotoxy(55,13);
    char ou[]=("AKHIR KATA");
    for(k=0; ou[k]!=NULL; k++){
    printf("%c",ou[k]);
    Sleep(50);
    }
    gotoxy(43,15);
    char oi[]=("D E S P A C I T O  T H A N K Y O U \n\n\n\n");
    for(k=0; oi[k]!=NULL; k++){
    printf("%c",oi[k]);
    Sleep(50);
    }
}

void loading(){
            system("cls");
            gotoxy(kiri,atas);
            printf("%c", 201);
                for(i=0;i<kanan-kiri-1;i++){
                    printf("%c",205);
                }   printf("%c", 187);
            gotoxy(kiri,bawah);
            printf("%c", 200);
                for(i=0;i<kanan-kiri-1;i++){
                    printf("%c",205);
                }   printf("%c", 188);
            for(i=1;i<bawah-atas;i++){
                gotoxy(kiri,atas+i);
                printf("%c", 186);
                gotoxy(kanan,atas+i);
                printf("%c", 186);
                }
            gotoxy(54,15);
            printf("L O A D I N G\n");
            gotoxy(40,17);
            for (x=0 ; x<=39 ; x++){
            for (y=0 ; y<40000000; y++)
            z=y;
            printf ("%c", 219);
            }
}

void rumah(){
 char chr;
        kotak();
        gotoxy(55,11);
        printf("R U M A H");
        gotoxy(51,13);
        printf("INPUT BAHAN BANGUNAN :");
        scanf("%c%c",&chr,&chr);

        int l,m,n,o,p,q,r,s;
        gotoxy(51,15);
        printf("INPUT BESAR BANGUNAN :");
        scanf ("%d",&o);
        system("cls");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),5);
        for(m=1; m<o+1 ;m++){
            for(n=1 ; n<=o+2 ; n++){
                printf(" ");
        }
        for(n=1; n<=4; n++){
            printf("%c ",chr);
        }
                printf("\n");
        }
        for(p=1; p<=o; p++){
            for(q=o; q>=p; q--){
                printf(" ");}
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),1);
            for(r=1; r<=p ;r++){
                printf("%c ",chr);}
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),2);
            for(s=1; s<=o; s++){
                printf("%c ",chr);}
                printf("\n");
        }
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),4);
        for(p=1; p<=o; p++){
            for(q=1; q<=o; q++){
                printf(" %c",chr);}
            for(r=1; r<=o; r++){
                printf(" %c",chr);}
                printf("\n");
        }
        getch();
}

void menu_utama(){
        kotak();
    gotoxy(52,11);
    printf("[1] R U M A H");
    gotoxy(52,13);
    printf("[2] B E N D E R A");
    gotoxy(52,15);
    printf("[3] L A U N D R Y");
    gotoxy(52,17);
    printf("[4] A U T H O R");
    gotoxy(52,19);
    printf("[5] EXIT");
    gotoxy(54,21);
    printf("P I L I H A N");
    gotoxy(59,22);
    printf("[");
    gotoxy(61,22);
    printf("]");
}

void coba_lagi(){
system("cls");
system("color 27");
     gotoxy(kiri,atas-2);
            printf("%c", 201);
                for(i=0;i<kanan-kiri-1;i++){
                    printf("%c",205);
                }   printf("%c", 187);
            gotoxy(kiri,bawah-5);
            printf("%c", 200);
                for(i=0;i<kanan-kiri-1;i++){
                    printf("%c",205);
                }   printf("%c", 188);
            for(i=1;i<bawah-atas-3;i++){
                gotoxy(kiri,atas-2+i);
                printf("%c", 186);
                gotoxy(kanan,atas-2+i);
                printf("%c", 186);
                }
                gotoxy(52,11);
            printf("C O B A   L A G I?");
                 gotoxy(55,12);
            printf("( Y / N )");
}

void bendera(){
int banyak;
    kotak();
    gotoxy(43,11);
    printf("MASUKAN PANJANG BENDERA (MAX 45) : ");
    scanf("%i", &banyak);
    int a,b,c,x=38;
    gotoxy(x,13);
    for(a=1;a<=banyak;a++)
        {
       SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),200);printf(" ");Sleep(50);
    }
        gotoxy(x,14);
        for(a=1;a<=banyak;a++)
    {
       SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),200);printf(" ");Sleep(50);
    }
        gotoxy(x,15);
        for(a=1;a<=banyak;a++)
        {
       SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),200);printf(" ");Sleep(50);
    }
    gotoxy(x,16);
    for(b=1;b<=banyak;b++){
       SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),500); printf(" ");Sleep(50);
    }
       gotoxy(x,17);
    for (b=1;b<=banyak;b++){
       SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),500); printf(" ");Sleep(50);}
      gotoxy(x,18);
    for(b=1;b<=banyak;b++){
       SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),500); printf(" ");Sleep(50);
    }
      gotoxy(x,19);
    for (c=1;c<=banyak;c++){
       SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),400); printf(" ");Sleep(50);}
      gotoxy(x,20);
    for (c=1;c<=banyak;c++){
       SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),400); printf(" ");Sleep(50);}
       gotoxy(x,21);
    for (c=1;c<=banyak;c++){
       SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),400); printf(" ");Sleep(50);}
        printf("\n");
        getch();
}

void kotak(){
gotoxy(kiri,atas-2);
            printf("%c", 201);
                for(i=0;i<kanan-kiri-1;i++){
                    printf("%c",205);
                }   printf("%c", 187);
            gotoxy(kiri,bawah+2);
            printf("%c", 200);
                for(i=0;i<kanan-kiri-1;i++){
                    printf("%c",205);
                }   printf("%c", 188);
            for(i=1;i<bawah-atas+4;i++){
                gotoxy(kiri,atas-2+i);
                printf("%c", 186);
                gotoxy(kanan,atas-2+i);
                printf("%c", 186);
                }

}

void kotak_kecil(){
gotoxy(kiri,atas-2);
            printf("%c", 201);
                for(i=0;i<kanan-kiri-1;i++){
                    printf("%c",205);
                }   printf("%c", 187);
            gotoxy(kiri,bawah-5);
            printf("%c", 200);
                for(i=0;i<kanan-kiri-1;i++){
                    printf("%c",205);
                }   printf("%c", 188);
            for(i=1;i<bawah-atas-3;i++){
                gotoxy(kiri,atas-2+i);
                printf("%c", 186);
                gotoxy(kanan,atas-2+i);
                printf("%c", 186);
                }
}

void author(){
    kotak();
                gotoxy(47,11);
                printf("NAMA ANGGOTA SUANGGI TERBANG\n");
    char aa[]="[1] ANDREAN VINI BIMO ARYA WIBOWO (672021256)\n";
    gotoxy(38,13);
    for(y=0; aa[y]!=NULL; y++){
    printf("%c",aa[y]);
    Sleep(50);
    }
    char ab[]="[2] ROY CHRISTIANO ARIYANTO       (672022085)\n";
    gotoxy(38,15);
    for(y=0; ab[y]!=NULL; y++){
    printf("%c",ab[y]);
    Sleep(50);
    }
    char ac[]="[3] MARVIN JAMES MAHENDRA IBO     (672022047)\n";
    gotoxy(38,17);
    for(y=0; ac[y]!=NULL; y++){
    printf("%c",ac[y]);
    Sleep(50);
    }
    char ad[]="[4] EURO ANDRI SETIAWAN           (672022082)\n";
    gotoxy(38,19);
    for(y=0; ad[y]!=NULL; y++){
    printf("%c",ad[y]);
    Sleep(50);
    }
    getch();
}

void menu_laundry(){
    kotak();
    gotoxy(50,11);
    puts("SUANGGI TERBANG LAUNDRY");
    gotoxy(43,12);
    printf("[1] 1 JAM SELESAI [Rp 10.000/Kg]");
    gotoxy(43,13);
    printf("[2] 3 JAM SELESAI [Rp 8.000/Kg]");
    gotoxy(43,14);
    printf("[3] 6 JAM SELESAI [Rp 7.500/Kg]");
    gotoxy(43,15);
    printf("[4] 10 JAM SELESAI [Rp 7.000/Kg]");
    gotoxy(43,16);
    printf("[5] 12 JAM SELESAI [Rp 6.500/Kg]");
    gotoxy(43,17);
    printf("[6] 1 HARI SELESAI [Rp 6.000/Kg]");
    gotoxy(43,18);
    printf("[7] 2 HARI SELESAI [Rp 4.000/Kg]");
    gotoxy(43,19);
    printf("[8] 3 HARI SELESAI [Rp 2.500/Kg]");
    gotoxy(43,20);
    printf("[9] SPREI [Rp 5.000/Kg]");
    gotoxy(43,21);
    printf("[10] KARPET [Rp 15.000/Kg]");
}

int k, b;
float total;
char nama[20];
char inisial;

void laundry(){
    kotak();
    printf("\t");
    gotoxy(50,11);
    puts("SUANGGI TERBANG LAUNDRY");

    //INPUT NAMA
    gotoxy(47,13);
    printf("NAMA               :");
    gets(nama);gets(nama);

    //INPUT INISIAL
    gotoxy(47,15);
    printf("INISIAL            :");
    inisial = getche();

    gotoxy(47,17);
    printf("BERAT LAUNDRY [KG] :");
    scanf("%d", &b);

    system("cls");
    menu_laundry();
    gotoxy(39,22);
    printf("[-] PILIHAN MENU");
    gotoxy(55,22);
    printf("[");
    gotoxy(57,22);
    printf("]");
    gotoxy(56,22);
    scanf("%d", &k);
    printf("\n\n");

    switch(k){
    case 1:
        total = 10000 * b;
        struk();
        break;
    case 2:
        total = 8000 * b;
        struk();
        break;
    case 3:
        total = 7500 * b;
        struk();
        break;
    case 4:
        total = 7000 * b;
        struk();
        break;
    case 5:
        total = 6500 * b;
        struk();
        break;
    case 6:
        total = 6000 * b;
        struk();
        break;
    case 7:
        total = 4000 * b;
        struk();
        break;
    case 8:
        total = 2500 * b;
        struk();
        break;
    case 9:
        total = 5000 * b;
        struk();
        break;
    case 10:
        total = 15000 * b;
        struk();
        break;

    }

    /*
    printf("\n\n");
    puts("*=================================*");
    printf("\n");
    putchar('H');
    printf("\t");
    putchar('E');
    printf("\t");
    putchar('L');
    printf("\t");
    putchar('E');
    printf("\t");
    putchar('M');
    printf("\t");
    putchar('F');
    printf("\t");
    putchar('O');
    printf("\t");
    putchar('I');
    printf("\t");
*/
}

void struk(){
        system("cls");
        kotak_kecil();
        gotoxy(52,11);
        printf("STRUK PEMBAYARAN");
        gotoxy(50,13);
        printf("NAMA        : %s \n", nama);
        gotoxy(50,14);
        printf("TOTAL BIAYA : Rp %.2f,-", total);
}

int main(){
    int i;
    int nama[100];
    int sandi[100];
    char nama1[100];
    char sandi1[100];
    char pemilihan;
    int pilihan, loop = 1;
    int pengecekanNama = 0, pengecekanPassword = 0;

//kiri=37,kanan=83,atas=12,bawah=21;
    while(loop == 1){
    system("cls");
    system("color 27");
    kotak();
    gotoxy(47,11);
    printf("S E L A M A T   D A T A N G");
    gotoxy(50,14);
    printf("[1] R E G R I S T R A S I\n\n");
    gotoxy(50,16);
    printf("[2] L O G I N");
    gotoxy(50,18);
    printf("[3] E X I T");
    gotoxy(54,21);
    printf("P I L I H A N");
    gotoxy(59,22);
    printf("[");
    gotoxy(61,22);
    printf("]");
    gotoxy(60,22);
    scanf("%d", &pilihan);

    switch(pilihan)
    {
    case 1:
        loading();
        system("cls");
        kotak();
        gotoxy(52,11);
        printf("R E G R I S T R A S I");
        gotoxy(42,14);
        printf("N A M A         :");
        gotoxy(42,17);
        printf("P A S S W O R D :");

        gotoxy(60,14);
        scanf(" %[^\n]", &nama);
        pengecekanNama = 1;

        gotoxy(60,17);
        scanf(" %[^\n]", &sandi);
        pengecekanPassword = 1;

        gotoxy(40,20);
        printf("R E G R I S T R A S I   B E R H A S I L !!");

        gotoxy(60,21);
        getch();

        break;
    case 2:

        //BELUM REGRISTRASI
        if(pengecekanNama == 0 || pengecekanPassword == 0){
            system("cls");
            char pemilihandua;
            kotak_kecil();
            gotoxy(52,12);
            printf("W A R N I N G !!!");
            gotoxy(43,14);
            printf("R E G R I S T R A S I   D A H U L U ");
            getch();

        }else{

        //SUDAH REGRISTRASI
        system("cls");
        loading();

        system("cls");
        kotak();
        gotoxy(57,11);
        printf("L O G I N");
        gotoxy(42,14);
        printf("N A M A         :");
        gotoxy(42,17);
        printf("P A S S W O R D :");
        gotoxy(60,14);
        fflush(stdin);
        gets(nama1);
        gotoxy(60,17);
        fflush(stdin);
        gets(sandi1);

        int admin_nama=strcmp(nama,nama1);
        int admin_sandi=strcmp(sandi,sandi1);

        if(admin_nama==0&&admin_sandi==0){

   //LOGIN BERHASIL (MASUK KE MENU UTAMA)
   while(loop == 1){
   system("cls");
   menu_utama();
   gotoxy(60,22);
   scanf("%d", &pilihan);
   switch(pilihan){

   //RUMAH
   case 1:
    system("cls");
    rumah();
    coba_lagi();
    gotoxy(59,15);
    scanf("%c%c", &pemilihan,&pemilihan);
    if(pemilihan == 'Y'){
    loop = 1;
        }else
        loop = 0;
       break;

   //BENDERA
   case 2:
    system("cls");
    bendera();
    coba_lagi();
    gotoxy(59,15);
    scanf("%c%c", &pemilihan,&pemilihan);
    if(pemilihan == 'Y'){
    loop = 1;
    }else
        loop = 0;
        break;

   //LAUNDRY
   case 3:
    system("cls");
    laundry();
    getch();
    coba_lagi();
    gotoxy(59,15);
    scanf("%c%c", &pemilihan,&pemilihan);
    if(pemilihan == 'Y'){
    loop = 1;
    }else
        loop = 0;
        break;

   //AUTHOR
   case 4:
        system("cls");
    author();
    coba_lagi();
    gotoxy(59,15);
    scanf("%c%c", &pemilihan,&pemilihan);
    if(pemilihan == 'Y'){
    loop = 1;
    }else
        loop = 0;
        break;
   case 5:
        system("cls");
        keluar();
        loop = 0;
   }
  }



    }else{

     //LOGIN GAGAL
     gotoxy(50,22);
     printf("L O G I N   G A G A L\n");
     getch();
     coba_lagi();
     gotoxy(51,13);
     printf("[");
     gotoxy(53,13);
     printf("]");
     gotoxy(52,13);
    scanf("%c", &pemilihan);
    if(pemilihan == 'Y'){
    loop = 1;
        }else
        loop = 0;
    }
        }
        break;
    case 3:
        system("cls");
        kotak_kecil();
        gotoxy(50,13);
        printf("T E R I M A K A S I H");
        getch();
        loop = 0;
        break;
    default:
        system("cls");
        kotak_kecil();
        gotoxy(48,13);
        printf("M E N U   T I D A K A D A");
        getch();
    }
}
    return 0;
}

void gotoxy(int x, int y){
    COORD coord = {0,0};// sebuah struct yang berisikan dua variabel bertipe SHORT, yaitu X dan Y.
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition/*digunakan untuk menetapkan posisi cursor di layar*/(GetStdHandle(STD_OUTPUT_HANDLE)/*mendapatkan handle ke layar dengan standard output device karena akan ditampilkan dilayar.*/, coord);

}

void SetColor(unsigned short color){
    HANDLE hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsoleOutput,color);
}




