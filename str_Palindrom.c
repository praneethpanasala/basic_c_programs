#include<stdio.h>
int main()
{
int i,j,k,z;
char a[10],b[10],temp;
printf("ENTER STRING :");
scanf("%s",a);
for(i=0;b[i]=a[i];i++); //str_copy
printf("\ncopy string  %s :",b);
z=i-1;
for(i=0;i<z;i++,z--) //str_reverse
{
temp=a[i];
a[i]=a[z];
a[z]=temp;
}
printf("\naftr reverse %s :",a);
for(i=0;a[i];i++) //str_compare
{
if(a[i]!=b[i])
break;
}
if(b[i]=='\0')
printf("PALINDROM\n");
else
printf("NOT\n");
}

