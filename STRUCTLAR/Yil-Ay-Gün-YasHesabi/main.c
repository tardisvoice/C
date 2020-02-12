#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct tarih{

        int yil;
        int ay;
        int gun;
    }dogum_gunu,bugun,fark;

    fark.gun=0;
    fark.ay=0;
    fark.yil=0;
    printf("Dogum gununuzu GG-AA-YYYY olarak giriniz.\n");
    scanf("%d-%d-%d",&dogum_gunu.gun,&dogum_gunu.ay,&dogum_gunu.yil);
    printf("Bugunun tarihini GG-AA-YYYY olarak giriniz.\n");
    scanf("%d-%d-%d",&bugun.gun,&bugun.ay,&bugun.yil);

    fark.gun=bugun.gun - dogum_gunu.gun;
    if(fark.gun<0)
    {
        fark.gun+=30;
        bugun.ay--;
    }
    fark.ay=bugun.ay - dogum_gunu.ay;
    if(fark.ay<0)
    {
        fark.ay+=12;
        bugun.yil--;
    }
    fark.yil=bugun.yil - dogum_gunu.yil;
    printf("%d/%d/%d",fark.gun,fark.ay,fark.yil);
}
