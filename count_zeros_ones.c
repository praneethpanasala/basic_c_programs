#include <stdio.h>
int main()
{
	int iNum = 0;
	int iZeros_count = 0;
	int iOnes_count = 0;
	printf("Enter a number :\n");
	scanf("%d",&iNum);
	while(iNum > 9 || iNum == 1)
	{
		if(iNum%10 == 0)
		{
			iZeros_count++;
		}
		if(iNum%10 == 1)
		{
			iOnes_count++;
		}
		iNum = iNum/10;
	}
	printf("number of zeros in a number = %d\n",iZeros_count);
	printf("number of ones in a number = %d\n",iOnes_count);
	return 0;
}
