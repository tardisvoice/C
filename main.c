#include <stdio.h>
#include <stdlib.h>

void bankamatik(int para);
int main()
{
    int miktar;
    printf("Para miktari:");scanf("%d",&miktar);
    bankamatik(miktar);
    return 0;
}

void bankamatik(int para)
{
    int a,yirmilik,onluk,beslik;
    if(para%5==0)
    {
        yirmilik=para/20;
        para-=yirmilik*20;
        onluk=para/10;
        para-=onluk*10;
        beslik=para/5;
        printf("\nYirmilik =%d",yirmilik);
        printf("\nOnluk =%d",onluk);
        printf("\nBeslik =%d",beslik);

    }
    else
        printf(" Girilen deger 5'in kati olmalidir");
}
