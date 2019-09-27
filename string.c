#include "string.h"
void stringcopy(char *ptr1,char *ptr)
{
	while(*ptr != '\0')
	{
		*ptr1=*ptr;
		ptr1++;
		ptr++;
	}
	*ptr1='\0';

}
int stringcmp(char *ptr1,char *ptr)
{
	int flag = 0;
	while(*ptr != '\0' && *ptr1 != '\0')
	{
		if(*ptr != *ptr1)
		{
			flag = 1;
			break;
		}
		ptr++;
		ptr1++;
	}
	if(flag == 0 && *ptr == '\0' && *ptr1 == '\0')
	{
		return 0;
	}
	else
	{
		return 1;
	}
}
int stringlen(char *ptr)
{
	int count = 0;
	while(*ptr != '\0')
	{
		count++;
		ptr++;
	}
	return count;
}
void stringrev(char *ptr)
{
	char *last = ptr;
	char *start = ptr;
	char temp;
	int len = 0;
       while(*last != '\0')
       {
	       len++;
	       last++;
       }	      
       for(int i=0;i < len/2 ; i++)
       {
	       last--;
	       temp=*last;
	       *last=*start;
	       *start=temp;
	       start++;
       }
} 
