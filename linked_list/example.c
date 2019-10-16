# include <stdio.h>
# include <stdlib.h>
# include <string.h>
struct node {
	int id_no;
	char name[100];
	struct node *next;
};

struct node *first = NULL;
struct node *last = NULL;

void insert_node(int val,char ptr[])
{
	struct node *new_node = (struct node*) malloc(sizeof(struct node));
	if (new_node == NULL)
	{
		printf("memory is not allocated\n");
		exit(1);
	}
	else 
	{
		if(first == NULL)
		{
			new_node->id_no = val;
			strcpy(new_node->name,ptr);
			new_node->next=NULL;
			first=new_node;
			last=new_node;
		}
		else
		{
			new_node->id_no = val;
			strcpy(new_node->name,ptr);
			last->next=new_node;
			last=last->next;
			new_node->next=NULL;
		}
	}
}
void printlist()
{
	struct node *temp = first;
	while(temp != NULL)
       	{
		printf("%d\n",temp->next);
		printf("id_no : %d,name : %s\n",temp->id_no,temp->name);
		temp = temp->next;
	}
}
int main()
{
	insert_node(2,"bala");
	insert_node(2,"bala");
	insert_node(2,"bala");
	insert_node(2,"bala");
	insert_node(2,"bala");
	insert_node(2,"bala");
	printlist();
}
