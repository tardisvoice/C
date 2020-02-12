//Bolenleri toplamý kendisine eþit olan sayý
#include<stdio.h>
int main()
{
	int sayi,i=1,toplam=0;
	printf("Lutfen bir sayi giriniz : ");
	scanf("%d",&sayi);
	while(i<=sayi/2)
	{
		if(sayi%i==0)
		{
			toplam+=i;
		}
		i++;
	}
	if(toplam==sayi)
	{
		printf("Mukemmel sayidir.");
	}
	else
	{
		printf("Mukemmel sayi degildir.");
	}
}
