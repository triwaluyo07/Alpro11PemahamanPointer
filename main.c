#include "header.h"

///Nama : Tri Waluyo
///Nim : A11.2017.10097
///Kelas : A11.4203

int main()
{
    float angka1;
    float angka2;

    printf("====================================\n");
    printf("\t\tSoal 1 \n");
    printf("====================================\n");
    printf("input angka 1 : ");
    scanf("%f",&angka1);
    printf("input angka 2 : ");
    scanf("%f",&angka2);
    float hasil;

    perkalian(&hasil,angka1,angka2);
    printf("Hasil perkalian %.1f dan %.1f = %.1f\n",angka1,angka2,hasil);

    printf("====================================\n");
    printf("\t\tSoal 2 \n");
    printf("====================================\n");

    printf("Angka 1 = %.1f , Angka 2 = %.1f \n",angka1,angka2);
    swapAngka(&angka1,&angka2);
    printf("Angka 1 = %.1f , Angka 2 = %.1f \n",angka1,angka2);

    puts("\n");

    int *arrai;
    int jumlah=4;
    arrai= malloc(sizeof(int)*jumlah);

    arrai[0]=8; ///cara 1 = arrai[idx] , cara 2 = *(arrai+idx)

    printf("hasil dengan model [0] = %d \n",arrai[0]);
    printf("hasil dengan model *(arrai) = %d \n",*(arrai));

    *(arrai+1)=10;
    printf("hasil arrai[1] = %d \n",arrai[1]);
    *(arrai+2)=6;
    *(arrai+3)=1;
    printf("hasil arrai[2] = %d \n",arrai[2]);
    printf("hasil arrai[3] = %d \n",arrai[3]);

    puts("output array pointer");

    int *index;
    index=arr(10);
    cetakArr(index,10);
    return 0;
}
