#include<stdio.h>
int main()
{
	int a[10],b[10],n,i,j,c=0;
	printf("ENTER N VAL :\n");
	scanf("%d",&n);
	printf("ENTER DATA INTO ARRAY :\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
for(i=0;i<n;i++)
{
if (a[i]==a[i+1])
{ c++;
for(j=i+1;j<n;j++)
{
if(a[j]==a[j+1])
{
c++;
}

}
