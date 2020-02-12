//ikizkenar dik üçgen çizen program
#include<stdio.h>
int main()
{
	int n,i,j;
	printf("Sayi ? :"); scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		
		for(j=0;j<n;j++)
		{
			if(i+j==n-1)
			{
				printf("%d",n);
			}
			else
			{
				if(i==n-1 || j==n-1)
				{
					printf("%d",n);
				}
				else
				{
					printf(" ");
				}
			}
		}
		printf("\n");
	}

	return 0;
}
