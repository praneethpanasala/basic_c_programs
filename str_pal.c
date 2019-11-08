#include<stdio.h>
void stcpy(char *str,char *str1)
{
char *temp=str1;
while(*str!='\0')
{
*str1=*str;
str++;
str1++;
}
*str1='\0';
str1=temp;
printf("%s\n",str1);
}
int main()
{
char a[10]="NAGA";
char b[10];
stcpy(a,b);
}
