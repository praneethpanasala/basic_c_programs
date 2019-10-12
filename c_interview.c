#include "c_interview.h"
#define TOTAL_ELEMENTS (sizeof(array) / sizeof(array[0]))
int array[] = {23,34,12,17,204,99,16};
/************************************************************************
 * @brief  :How will you print “Hello World” without semicolon?
 *         
 * @param  : 
 *          
 * @return : 
 *************************************************************************/

void print_without_semicolon(void)
{
	if(printf("Hello World"))
	{

	}
}

/***************************************************************************
 * @brief  :Write a C program to compute the sum of the two given integer values. 
 *          If the two values are the same, then return triple their sum?
 *         
 * @param  : 
 *          
 * @return : 
 *************************************************************************/
int sum_check(int a,int b )
{
	if (a==b)
	{
		return (a+b)*3;
	}
	else
	{
		return (a+b);
	}
}




int main()
{
	int d;

	for(d=-1;d <= (TOTAL_ELEMENTS-2);d++)
		printf("%d\n",array[d+1]);

	return 0;
}
