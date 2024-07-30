#include <stdio.h>
#include <stdlib.h>

int main()
{

    for (int a=1; a<=5; a++) {
        for (int b=1; b<a; b++){
           printf(" ");
        }
        for (int c = 5; c >= a; c--) {
            printf("*");
            }
        printf("\n");
    }
    return 0;
}
