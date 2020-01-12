#include "header.h"

void perkalian(float *hasil,float num1, float num2)
{
    *hasil = num1 * num2;
}

void swapAngka(float *num1,float *num2)
{
    float temp;

    temp=*num1;
    *num1=*num2;
    *num2=temp;
}

int *arr(int ukuran)
{
    int i,*arr;
    arr=malloc(sizeof(int)*ukuran);
    for(i=0;i<ukuran;i++)
    {
        *(arr+i)=i; ///arr[i]=i;
    }

    return arr;
}

void cetakArr(int *arr,int ukuran)
{
    int i;
    for(i=0;i<ukuran;i++)
    {
        printf("%d ",*(arr+i));
    }
}
