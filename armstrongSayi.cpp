//armstrong sayisi ; ab=a^2+b^2 saðlarsa veya abc=a^3+b^3+c^3 saglarsa dogrudur.
#include<stdio.h>
int main()
{
	int sayi,basamak=0,temp,p,sum=0,kalan,c;
	printf("Sayi ? :");
	scanf("%d",&sayi);
	temp=sayi;
	while(temp>0)
	{
		basamak++;
		temp/=10;
	}
	temp=sayi;
	while(temp!=0)
	{
		kalan=temp%10;
		p=1;
		for(c=1;c<=basamak;c++)
		{
			p*=kalan;
		
		}
		sum+=p;
		temp/=10;
		
	}
	if(sum==sayi)
	{
		printf("Sayi armstrong sayidir.");
	}
	else
	{
		printf("Sayi armstrong sayi degildir.");
	}
	return 0;
}
