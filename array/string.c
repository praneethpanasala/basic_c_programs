#include <stdio.h>
int stringpal(char *str,char *str1)
{
	char *temp1;
	char *temp2;
	char *last,*start;
	temp1=str;
	temp2=str1;
	last=str;
	start=str;
	int i,len=0;
	char  temp;	
	while(*str !='\0')
	{
		*str1=*str;
		str++;
		str1++;
	}
	*str1 ='\0';

	while(*last != '\0')
	{
		len++;
		last++;
	}	      
	for(i=0;i < len/2 ; i++)
	{
		last--;
		temp=*last;
		*last=*start;
		*start=temp;
		start++;
	}
	str=temp1;
	str1=temp2;
	int flag = 0;
	while(*str != '\0' && *str1 != '\0')
	{
		if(*str != *str1)
		{
			flag = 1;
			break;
		}
		str++;
		str1++;
	}
	if(flag == 0 && *str == '\0' && *str1 == '\0')
	{
		return 0;
	}
	else
	{
		return 1;
	}


}
int main()
{
	char ch[10] = "hello";
	char ch1[10];
	int res=stringpal(ch,ch1);
	
}
