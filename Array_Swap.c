#include<stdio.h>
int main()
{
int i,j,a[100],c=0,temp,n;
printf("ENTER N VALUE :");
scanf("%d",&n);
printf("ENTER DATA TO ARRAY :");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
{
 if(c==3)
  {
  temp=a[i];
  a[i]=a[i+1];
  a[i+1]=temp;
   i=i+c-1;
   c=0;
   }
c=c+1;
} 
for(i=0;i<n;i++)
printf("%d ",a[i]);
printf("\n");
}

