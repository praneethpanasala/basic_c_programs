#include "c_interview.h"
#include "string.h"
/************************************************************************
 * @brief  :How will you print “Hello World” without semicolon?
 *         
 * @param  :void 
 *          
 * @return : void
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
 * @param  : int a, int b
 *          
 * @return : int
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

/***************************************************************************
 * @brief  :write a program to swap a nibble or byte.  
 *         
 * @param  : int opt int num
 *          
 * @return : int
 *************************************************************************/
int swap(int opt,int num)
{
	switch(opt)
	{
		case 1:
			return ( (num & 0x0F) << 4 | (num & 0xF0) >> 4 );
			break;
		case 2:

			return ( (num & 0x00FF) << 8 | (num & 0xFF00) >> 8 );
			break;
		default:
			printf("invalid option");
			exit(1);
	}
}
/***************************************************************************
 * @brief  :write a program to palindromeofanumber 
 *         
 * @param  : int num
 *          
 * @return : int
 *************************************************************************/
int palindromeofnumber(int num)
{
	int iNumber_copy = num;
	int n=0;
	int m=0;
	while(num != 0 )
	{
		n=num%10;
		m=m*10+n;
		num=num/10;	
	}
	if(iNumber_copy == m)
	{
		return 1;
	}
	else 
	{
		return 0;
	}
}
/***************************************************************************
 * @brief  :write a program to palindromaofastring.  
 *         
 * @param  : char *ptr
 *          
 * @return : int
 *************************************************************************/

