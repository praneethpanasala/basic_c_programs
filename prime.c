#include<stdio.h>
#include<math.h>
int prime(int);
main()
{
	int n,i,z;
	printf("ENTER N VALUE :");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		z=prime(i);
		if(z!=0)
			printf("%d ",z);
	}
	printf("\n");
}
int prime(int j)
{
	int c=0,i;
	for(i=1;i<=j;i++)
	{
		if(j%i==0)
			c=c+1;
	}
	if(c==2)
		return j;
	else
		return 0;
}
