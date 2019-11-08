#include<stdio.h>
#include<math.h>
main()
{
int n,i,j,x=1;
printf("ENTER N VALUE :");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(j=1;j<=2*i-1;j++)
{
if(j%2==0)
{
printf("*");
}
else
{
printf("%d",x);
x=x+1;
}
}
printf("\n");
}
}
