#include<stdio.h>
#include<math.h>
main()
{
int n,i,j,x;
printf("ENTER N VALUE :");
scanf("%d",&n);
for(i=1;i<=n;i++)
{ x=i;
for(j=1;j<=i;j++)
{
printf("%.f",pow(x,2));
x=x+1;
}
printf("\n");
}
}
