#include <stdio.h>
#include <stdlib.h>

int main()
{
    int input=168, counter = 2, output = 0;
        while(output < input){
            int jumlah_faktor=0;
        for(int i = 1; i <= counter; i++){
            if(counter % i == 0){
                    jumlah_faktor++;
            }
        }
    if(jumlah_faktor == 2){
        printf("%d \n", counter);
        output++;
        }
        counter++;
    }



    return 0;
}
