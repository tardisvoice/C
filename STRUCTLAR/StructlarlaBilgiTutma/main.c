#include <stdio.h>
#include <stdlib.h>
struct kayit
{
    char ad[10];
    char soyad[5];
    int no;
    int sinif;
};
int main()
{
    struct kayit ogr;
    printf("Ogrenci adi :\n"); scanf("%s",&ogr.ad);
    printf("Ogrenci soyadi :\n"); scanf("%s",&ogr.soyad);
    printf("Ogrenci sinifi :\n"); scanf("%d",&ogr.sinif);
    printf("Ogrenci no: \n"); scanf("%d",&ogr.no);
    printf("\n No: %d",ogr.no);
    printf("\n Adi : %s",ogr.ad);
    printf("\n Soyadi : %s",&ogr.soyad);
    printf("\n Sinifi : %d",ogr.sinif);
    return 0;
}
