#include<stdio.h>
int main()
{
	int boyut,i,j,yazilacak;
	printf("Matris boyut ? : "); scanf("%d",&boyut);
	for(i=1;i<=boyut;i++)
	{
		for(j=1;j<=boyut;j++)
		{
			int a=boyut-i+1;
			int b=boyut-j+1;
			if (a<=b&&a<=i&&a<=j)
				yazilacak=a;
			else
				if(b<=a&&b<=i&&i<=j)
					yazilacak=i;	
				else 
					yazilacak=j;
			printf("%d",yazilacak);	
		}
		printf("\n");
	}
	
}
