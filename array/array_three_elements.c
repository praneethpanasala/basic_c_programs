#include <stdio.h>
int main()
{
	
	int arr[50]={0};
	int i,n,count=0;
	printf("Enter no of elements: \n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
 	for(i=0;i<=n;i++)
	{
		if(count==3)
		{
		  int temp=arr[i];
		  arr[i]=arr[i+1];
		  arr[i+1]=temp;
		  i=i+count-1;
		  count=0;
		}
		count++;
	}	
	
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}
