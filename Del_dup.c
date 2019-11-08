#include<stdio.h>
int main()
{
	int i,j,a[100],c=0,temp,n,k;
	printf("ENTER N VALUE :");
	scanf("%d",&n);
	printf("ENTER DATA TO ARRAY :");
	for(i=0;i<n;i++)
	  scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
    		for(j=i+1;j<n-c;j++)
		{
		 if(a[i]==a[j])
		{ 
                   c++;
		   for(k=j;k<n;k++)
		    {
                     a[k]=a[k+1];   
                    }
                   i--;
		}
		}

	}

	for(i=0;i<n-c;i++)
		printf("%d ",a[i]);
	printf("\n");
}

