#include <stdio.h>
#include <stdlib.h>

int main()
{
    int kesehatan, pendidikan,toefl,skck,hasil,wawancara;
    int kondiisi;
    printf("Pilih Kondisi 1/2?");
    printf("\nMasukan Jawaban : ");
    scanf("%i", &kondiisi );

    if(kondiisi == 1){

    printf("\n============= \n");
    printf("= Kesehatan = \n");
    printf("============= \n");
    printf("= 1. Baik   = \n");
    printf("= 2. Kurang = \n");
    printf("============= \n");
    printf("Pilihlah Kesehatan Dosen :");
    scanf("%i", &kesehatan);

    if(kesehatan == 1){

            printf("\n============== \n");
            printf("= Wawancara = \n");
            printf("============== \n");
            printf("= 1. Baik      = \n");
            printf("= 2. Cukup     = \n");
            printf("= 3. Kurang    = \n");
            printf("============== \n");
            printf("Pilihlah wawancara Dosen :");
            scanf("%i", &wawancara);

        if(wawancara == 1 || wawancara == 2 || wawancara == 3){

            printf("\n============== \n");
            printf("= Pendidikan = \n");
            printf("============== \n");
            printf("= 1. S2      = \n");
            printf("= 2. S3      = \n");
            printf("============== \n");
            printf("Pilihlah Pendidikan Dosen :");
            scanf("%i", &pendidikan);

        if(pendidikan == 1 || pendidikan == 2){

                printf("\n============== \n");
                printf("=   TOEFL    = \n");
                printf("============== \n");
                printf("= 1. Baik   = \n");
                printf("= 2. Kurang   = \n");
                printf("============== \n");
                printf("Apakah Sudah mempunyai sertifikasi TOEFL : :");
                scanf("%i", &toefl);

            if(toefl == 1 || toefl == 2){

                    printf("\n============== \n");
                    printf("=    SKCK    = \n");
                    printf("============== \n");
                    printf("= 1. Ya      = \n");
                    printf("= 2. Tidak   = \n");
                    printf("============== \n");
                    printf("Apakah sudah ada SKCK? :");
                    scanf("%i", &skck);

                    if(skck == 1 || skck == 2);{
                            printf("\n\nDosen Diterima!!");
                            exit;
                    }
                }
            }
        }

    }else if(kesehatan == 2){

         printf("\n============== \n");
            printf("= Wawancara = \n");
            printf("============== \n");
            printf("= 1. Baik      = \n");
            printf("= 2. Cukup     = \n");
            printf("= 3. Kurang    = \n");
            printf("============== \n");
            printf("Pilihlah wawancara Dosen :");
            scanf("%i", &wawancara);

        if(wawancara == 1 || wawancara == 2 || wawancara == 3){

           printf("\n============== \n");
            printf("= Pendidikan = \n");
            printf("============== \n");
            printf("= 1. S2      = \n");
            printf("= 2. S3      = \n");
            printf("============== \n");
            printf("Pilihlah Pendidikan Dosen :");
            scanf("%i", &pendidikan);

        if(pendidikan == 1 || pendidikan == 2){

                printf("\n============== \n");
                printf("=   TOEFL    = \n");
                printf("============== \n");
                printf("= 1. Baik   = \n");
                printf("= 2. Kurang   = \n");
                printf("============== \n");
                printf("Apakah Sudah mempunyai sertifikasi TOEFL :");
                scanf("%i", &toefl);

            if(toefl == 1 || toefl == 2){

                    printf("\n============== \n");
                    printf("=    SKCK    = \n");
                    printf("============== \n");
                    printf("= 1. Ya      = \n");
                    printf("= 2. Tidak   = \n");
                    printf("============== \n");
                    printf("Apakah sudah ada SKCK? :");
                    scanf("%i", &skck);

                    if(skck == 1 || skck == 2);{
                            printf("Dosen Ditolak!!");
                            exit;
                    }
                }
            }
        }
    }else {
        printf("Inputan salah");
    }
}else if(kondiisi == 2){

    // Kondisi No 1 dan 4

    printf("\n============= \n");
    printf("= Kesehatan = \n");
    printf("============= \n");
    printf("= 1. Baik   = \n");
    printf("= 2. Kurang = \n");
    printf("============= \n");
    printf("Pilihlah Kesehatan Dosen :");
    scanf("%i", &kesehatan);

    if(kesehatan == 2){

            printf("================ \n");
            printf("=  Wawancara   = \n");
            printf("================ \n");
            printf("= 1. Baik      = \n");
            printf("= 2. Cukup     = \n");
            printf("= 3. Kurang    = \n");
            printf("============== \n");
            printf("Pilihlah wawancara Dosen :");
            scanf("%i", &wawancara);
        if(wawancara == 1 || wawancara == 2 || wawancara == 3){

                printf("\n============== \n");
                printf("= Pendidikan = \n");
                printf("============== \n");
                printf("= 1. S2      = \n");
                printf("= 2. S3      = \n");
                printf("============== \n");
                printf("Pilihlah Pendidikan Dosen :");
                scanf("%i", &pendidikan);

            if(pendidikan == 1 || pendidikan == 2){

                printf("\n============== \n");
                printf("=   TOEFL    = \n");
                printf("============== \n");
                printf("= 1. Punya   = \n");
                printf("= 2. Tidak   = \n");
                printf("============== \n");
                printf("Apakah Sudah mempunyai sertifikasi TOEFL : :");
                scanf("%i", &toefl);

            if(toefl == 1 || toefl == 2){

                    printf("\n============== \n");
                    printf("=    SKCK    = \n");
                    printf("============== \n");
                    printf("= 1. Ya      = \n");
                    printf("= 2. Tidak   = \n");
                    printf("============== \n");
                    printf("Apakah sudah ada SKCK? :");
                    scanf("%i", &skck);

                    if(skck == 1 || skck == 2);{
                            printf("Dosen Diterima!!");
                            exit;
                    }
                }
            }
        }
    }else if(kesehatan == 1){
            printf("\n============== \n");
            printf("= Pendidikan = \n");
            printf("============== \n");
            printf("= 1. S2      = \n");
            printf("= 2. S3      = \n");
            printf("============== \n");
            printf("Pilihlah Pendidikan Dosen :");
            scanf("%i", &pendidikan);

        if(pendidikan == 1 || pendidikan == 2){

                printf("================ \n");
                printf("=  Wawancara   = \n");
                printf("================ \n");
                printf("= 1. Baik      = \n");
                printf("= 2. Cukup     = \n");
                printf("= 3. Kurang    = \n");
                printf("============== \n");
                printf("Pilihlah wawancara Dosen :");
                scanf("%i", &wawancara);
            if(wawancara == 1 || wawancara == 2 || wawancara == 3){

                    printf("\n============== \n");
                    printf("=   TOEFL    = \n");
                    printf("============== \n");
                    printf("= 1. Punya   = \n");
                    printf("= 2. Tidak   = \n");
                    printf("============== \n");
                    printf("Apakah Sudah mempunyai sertifikasi TOEFL :");
                    scanf("%i", &toefl);

                if(toefl == 1 || toefl == 2){

                    printf("\n============== \n");
                    printf("=    SKCK    = \n");
                    printf("============== \n");
                    printf("= 1. Ya      = \n");
                    printf("= 2. Tidak   = \n");
                    printf("============== \n");
                    printf("Apakah sudah ada SKCK? :");
                    scanf("%i", &skck);

                                if(skck == 1 || skck == 2);{
                                printf("Dosen Ditolak!!");
                                exit;
                    }
                }
            }
        }

    }else {
        printf("Inputan salah");
    }
}

    return 0;
}


