#include <stdio.h>
int main()
{
	int i,j,k=1,n;
	printf("Enter no of rows:\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=2*i-1;j++)
		{
			if(j%2 == 0)
			{
				printf("*");
			}
			else
			{
				
				printf("%d",k);
				k++;
			}
		}
		printf("\n");
	}
}
