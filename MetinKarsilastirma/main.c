#include <stdio.h>
#include <string.h>

void kontrol(char metin1[], char metin2[], int boyut,int boyut2)
{
    char temp2[20];
    char temp1[40];
    int i,j,sayac=1,deger=0,x = 0, y = 0;
    while(sayac <= boyut2)
    {
        for(j = 0; j < sayac; j++)
        {
           temp2[j] = metin2[j];
        }
        temp2[j]='\0';

        for(i = 0; i < boyut; i++)
        {
            y = 0;
            for(x = i; x < sayac+i; x++)
            {
                temp1[y] = metin1[x];
                y++;
            }
            temp1[y] = '\0';
            if(strcmp(temp2,temp1) == 0)
                deger++;
        }
        printf("%s : %d\n",temp2,deger);
        deger = 0;
        boyut--;
        sayac++;
    }
}


int main()
{
 	char metin1[40];
    printf("1.metni girin\n");
    gets(metin1);
    char metin2[20];

    printf("2.metni girin\n");
    gets(metin2);
    int boyut,boyut2;



 	boyut=strlen(metin1);

 	boyut2=strlen(metin2);

    kontrol(metin1,metin2,boyut,boyut2);
	return 0;
}
