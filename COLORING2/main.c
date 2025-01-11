#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

int i, x, y, z, m, banyak, pilihan, kiri=37,kanan=83,atas=12,bawah=21;
void gotoxy(int x, int y);
void SetColor(unsigned short);

int main(){

loading();

}

void loading()
{
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
            gotoxy(40,16);
            for (x=0 ; x<=39 ; x++){
            for (y=0 ; y<40000000; y++)
            z=y;
            printf ("%c", 219);
            }
}


void gotoxy(int x, int y)
{
    COORD coord = {0,0};// sebuah struct yang berisikan dua variabel bertipe SHORT, yaitu X dan Y.
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition/*digunakan untuk menetapkan posisi cursor di layar*/(GetStdHandle(STD_OUTPUT_HANDLE)/*mendapatkan handle ke layar dengan standard output device karena akan ditampilkan dilayar.*/, coord);
}

void SetColor(unsigned short color)
{
    HANDLE hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsoleOutput,color);
}

int setColor(int color){
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),color);
}

