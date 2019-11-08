#include <stdio.h>
int main()
{
 char a[100],b[100];
 int i;
 printf("ENTER STRING ..\n");
 scanf("%[^\n]",a);
 for(i=0;b[i]=a[i];i++);
 printf("%s\n",b);  
}	
