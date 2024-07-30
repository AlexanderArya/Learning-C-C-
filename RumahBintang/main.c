#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <windows.h>
#include <stdbool.h>

 int main (){
 int a,b,c,d,e;
    printf ("masukkan banyak perulangan : ");
    scanf ("%d", &a);
        for(b=1; b<=a;b++){
        for(c=a; c>=b;c--){
            printf (" ");}
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),1);
            for (d = 1; d <= b; d++){
                printf ("* ");}
                printf (" ");
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),2);
            for (e = 1; e <= a; e++){
                printf ("* ");}
                printf ("\n");}
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),4);
            for (b = 1; b <= a; b++){
            for (c = 1; c <= a; c++){
                printf (" *");}
                printf (" ");
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),4);
            for (d = 1; d <= a; d++) {
            printf (" *");}
            printf ("\n");}
 }
