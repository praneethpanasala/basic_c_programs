#include<stdio.h>

char* mystring(char* str);

int main(){
	char str[1000];
	scanf("%[^\n]s", str);
	char* s = mystring(str);
	printf("%s\n", s);
	return 0;
}

char* mystring(char* str){
	char* s = str;
	int count = 1;
	char str2[1000] = "\0";
	char* n = str2;
	while(*(s) != '\0')
	{
		if(count == 1)
		{
			*n = *s;
			n++;
		}
		if(*(s) == *(s+1))
		{
			count++;
			s++;
		}
		else
		{
			*n = '0' + count;
			n++;
			count = 1;
			s++;
		}
	}
	return str2;
}
