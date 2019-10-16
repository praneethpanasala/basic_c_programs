#include "multidimarray.h"
void singledimensionalarray()
{
	int n;
	printf("Enter no of elements: ");
	scanf("%d",&n);
	int *arr=(int *)malloc(n*sizeof(int));
	for(int i=0;i<n;i++)
	{
		printf("Enter element in arr[%d] :",i);
		scanf("%d",arr+i);
	}
	for(int i=0;i<n;i++)
	{
		printf(" %d ",*(arr+i));
	}
	printf("\n");	

}

void twodimensionalarray()
{
	int row,col;
	printf("Enter no of rows and col's:\n");
	scanf("%d %d",&row,&col);
	int **arr=(int **)malloc(row*sizeof(int));
	for(int i=0;i<row;i++)
	{
			*(arr+i) = (int *)malloc(col*sizeof(int));
	}
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			printf("Enter element in arr[%d][%d] :",i,j);
			scanf("%d",(*(arr+i)+j));
		}
	}

	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			printf(" %d ",*(*(arr+i)+j));
		}
		printf("\n");	
	}

}
void threedimensionalarray()
{
	int page,row,col;
	printf("Enter no of pages,rows and col,s:\n");
	scanf("%d %d %d",&page,&row,&col);
	int ***arr=(int ***)malloc(page*sizeof(int));
	for(int i=0;i<page;i++)
	{
		*(arr+i) = (int **)malloc(row*sizeof(int));
		for(int j=0;j<row;j++)
		{
			*(*(arr+i)+j)=(int *)malloc(col*sizeof(int));
		}
	}
	for(int i=0;i<page;i++)
	{
		for(int j=0;j<row;j++)
		{
			for(int k=0;k<col;k++)
			{
				printf("Enter element in arr[%d][%d][%d] :",i,j,k);
				scanf("%d",(*(*(arr+i)+j)+k));
			}
		}
	}
	for(int i=0;i<page;i++)
	{
		for(int j=0;j<row;j++)
		{
			for(int k=0;k<col;k++)
			{
				printf(" %d ",(*(*(*(arr+i)+j)+k)));
			}
			printf("\n");
		}
		printf("\n");
	}

}
