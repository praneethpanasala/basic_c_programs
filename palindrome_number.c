#include <stdio.h>
int main()
{
	int iNumber = 0;
	int iNumber_copy = 0;
	int n=0;
	int m=0;
	printf("Enter a number:\n");
	scanf("%d",&iNumber);
	iNumber_copy = iNumber;
	while(iNumber != 0 )
	{
		n=iNumber%10;
		m=m*10+n;
		iNumber=iNumber/10;	
	}
	if(iNumber_copy == m)
	{
		printf("Given number is palindrome\n");
	}
	else
	{
		
		printf("Given number is not palindrome\n");
	}
}
