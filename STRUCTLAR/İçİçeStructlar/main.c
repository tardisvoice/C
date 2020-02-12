#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct dogum
    {
        int yil;
        int ay;
        int gun;
    };
    struct kisiler
    {
        char isim[40];
        int boy;
        struct dogum dogum_bilgileri;
    }kisi={"Ali",175,{2012,12,12}};
    printf("Isim : %s\n",kisi.isim);
    printf("Boy %d \n",kisi.boy);
    printf(" Dogum tarihi %d / %d / %d\n",kisi.dogum_bilgileri.yil,kisi.dogum_bilgileri.ay,kisi.dogum_bilgileri.gun);

    return 0;
}
