#include "string.h"
/************************************************************************
 * @brief  :string copy 
 *         
 * @param  :char *ptr ,char *ptr1 
 *          
 * @return : void
 *************************************************************************/
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
/************************************************************************
 * @brief  :string compare 
 *         
 * @param  :char *ptr ,char *ptr1 
 *          
 * @return : int
 *************************************************************************/
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
/************************************************************************
 * @brief  :string length 
 *         
 * @param  :char *ptr 
 *          
 * @return : int
 *************************************************************************/
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
/************************************************************************
 * @brief  :string reverse 
 *         
 * @param  :char *ptr 
 *          
 * @return : void
 *************************************************************************/
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
/************************************************************************
 * @brief  :string concatination 
 *         
 * @param  :char *ptr ,char *ptr1 
 *          
 * @return : void
 *************************************************************************/
void stringcat(char *ptr ,char *ptr1)
{
	while(*ptr != '\0')
	{
		ptr++;
	}
	while(*ptr1 != '\0')
	{
		*ptr = *ptr1;
		ptr++;
		ptr1++;
	}
	*ptr = '\0';
}
/************************************************************************
 * @brief  :string string
 *         
 * @param  :char *ptr ,char *ptr1 
 *          
 * @return : int
 *************************************************************************/
int stringstring(char *ptr,char *ptr1)
{
	int substring_len = 0;
	int mainstring_len = 0;
	int temp = 0;
	char *copy_mainstring = ptr;
	char *copy_substring = ptr1;
	while(*copy_substring != '\0')
	{
		substring_len++;
		copy_substring++;
	}
	while(*copy_mainstring != '\0')
	{
		mainstring_len++;
		copy_mainstring++;
	}
	for(int i = 0;i<mainstring_len-substring_len;i++)
	{
		temp=i;
		for(int j =0;j<substring_len;j++)
		{
			if(ptr[temp] == ptr1[j])
			{
				if(j == substring_len-1)
				{
					return 1;
				}
				temp++;
			}
			else
			{
				break;
			}
		}
	}
	return 0;
}

/************************************************************************
 * @brief  :memeory copy
 *         
 * @param  :char *ptr ,char *ptr1 , int req_size
 *          
 * @return : void
 *************************************************************************/
void memorycopy(char *ptr ,char *ptr1,int req_size)
{
	int i = 0;
	for(i = 0;i<req_size;i++)
	{
		ptr[i]=ptr1[i];
	}
	ptr[i]='\0';
}

/************************************************************************
 * @brief  :memory set
 *         
 * @param  :char *ptr ,char *ptr1 ,int req_size
 *          
 * @return : void
 *************************************************************************/
void memoryset(char *ptr, char ch,int req_size)
{
	int i = 0;
	for(i=0;i<req_size;i++)
	{
		*ptr=ch;
		ptr++;
	}
}

