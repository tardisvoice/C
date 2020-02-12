#include <stdio.h>
#include <stdlib.h>
#define n 8
struct body
{
    char *donemaldigiders[50];
    int dersnotu;
    double donemortalamasi;
    long ogrno;
};
struct body bodies[n];
int main()
{
    int a;
    for(a=0;a<n;a++)
    {
        printf("%d. ogrencinin dersini giriniz :",a+1);
        scanf("%s",&bodies[a].donemaldigiders);
        printf("%d. Ogrencinin notunu giriniz",a+1);
        scanf("%d",&bodies[a].dersnotu);
        printf("%d. ogrencinin ortalamasi",a+1);
        scanf("%lf",&bodies[a].donemortalamasi);
    }
}
