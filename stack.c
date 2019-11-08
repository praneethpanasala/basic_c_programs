#include<stdio.h>
#include<stdlib.h>
int a[5],top;
void POP();
void PUSH();
void DISPLAY();
int main()
{
	int op;
	char ch;
	do
	{
	printf("ENTER OPTIONS\n");
	printf("1.PUSH\n");
	printf("2.POP\n");
	printf("3.DISPLAY\n");
	scanf("%d",&op);
		switch(op)
		{
			case 1:PUSH();
			       break;
			case 2:POP();
			       break;
			case 3:DISPLAY();
			       break;
                        default:
			       printf("INVALID OPTION\n");
                               exit(0);
		}
		printf("DO YOU WANT TO CONTINUE [Y/N] :");
		scanf(" %c",&ch);
           }
          	while(ch=='Y'||ch=='y');
}
void PUSH()
{
	int i;
        char ch;
        do
        {
	printf("ENTER DATA :");
	scanf("%d",&i);
	if(top>5)
	{
		printf("STACK OVER FLOW \n");
                exit(0);
                
	}
	else
	{
		a[top++]=i;
	}
		printf("DO YOU WANT TO CONTINUE TO PUSH [Y/N] :");
		scanf(" %c",&ch);
}while(ch=='y'||ch=='Y');
}
void DISPLAY()
{
	int i;
	if(top==0)
	{
		printf("STACK UNDER FLOW \n");
                exit(0);
	}
	else
	{
		for(i=0;i<top;i++)
		{
			printf("%d ",a[i]);
		}
                printf("\n");
	}
}
void POP()
{
	int i;
	if(top==0)
	{
		printf("STACK UNDER FLOW \n");
                exit(0);
	}
        else
         {
         a[top--]=0;

         }
}

