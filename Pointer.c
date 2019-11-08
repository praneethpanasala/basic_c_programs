#include<stdio.h>
void naga(int *a,int *b)
{
	int  temp=*a;
              *a=*b;
               *b=temp;
              
}
int main()
{
	int a=10,b=20;
	printf("before function call :%d %d\n",a,b);
	naga(&a,&b);
	printf("insert function call :%d %d\n",a,b);
	
}
