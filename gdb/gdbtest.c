#include <stdio.h>
#include <stdlib.h>
int main()
{
	FILE *fp;
	char ch,str[200];
	int c=0,n=0;
	fp=fopen("sample.txt","r");
	if(fp==NULL)
	{
		printf("file is not created");
		exit(1);
	}
	while((ch=(fgetc(fp)))!=EOF)
	{
		if(ch==' ')
			c++;
		if(ch=='\n')
			n++;
		printf("%c",ch);
		ch++;
	}
	printf("no of spaces in file=%d\n",c);
	printf("no of lines=%d\n",n);
	fclose(fp);
}
